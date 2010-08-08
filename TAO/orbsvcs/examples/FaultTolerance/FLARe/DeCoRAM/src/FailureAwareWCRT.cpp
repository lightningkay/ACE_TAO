// -*- C++ -*-

//=============================================================================
/**
 *  @file    FailureAwareWCRT.cpp
 *
 *  $Id$
 *
 *  @author  Friedhelm Wolf (fwolf@dre.vanderbilt.edu)
 */
//=============================================================================

#include "FailureAwareWCRT.h"
#include <algorithm>

FailureAwareWCRT::FailureAwareWCRT (const TASK_LIST & tasks,
                                    const ReplicaFinder & replica_finder)
  : tasks_ (tasks),
    replica_finder_ (replica_finder)
{
}

double
FailureAwareWCRT::operator () (double previous,
                               const PROCESSOR_SET & failures)
{
  if (previous == .0)
    return .0;

  // find all tasks that need to become active
  std::set<Taskname> active_tasks;

  for (TASK_LIST::iterator t_it = tasks_.begin ();
       t_it != tasks_.end ();
       ++t_it)
    {
      TRACE (*t_it);

      //std::cout << "Checking Task " << t_it->name << " with role " << t_it->role << std::endl;

      // check in the replica map if all previous tasks get activated
      // and switch the task to primary if this is the case
      PROCESSOR_SET necessary_failures = replica_finder_ (*t_it);

      TRACE (necessary_failures);

      if (necessary_failures.empty ())
        continue;

      //std::cout << "Necc failures are " << necessary_failures << std::endl;
      //std::cout << "Checking failures are " << failures << std::endl;

      PROCESSOR_SET difference;
      std::set_intersection (failures.begin (),
                             failures.end (),
                             necessary_failures.begin (),
                             necessary_failures.end (),
                             std::inserter (difference,
                                            difference.begin ()));

      // If all necessary processors are failing, make the task primary.
      // This is the case if all necessary_failures are contained in the
      // difference set.
      if (difference.size () == necessary_failures.size ())
        {
          active_tasks.insert (t_it->name);
          
          // activate relevant tasks
          t_it->role = PRIMARY;
        }
    } // end for

  double result = ctt_ (tasks_);

  // deactivate relevant tasks
  for (TASK_LIST::iterator t_it = tasks_.begin ();
       t_it != tasks_.end ();
       ++t_it)
    {
      if (active_tasks.find (t_it->name) != active_tasks.end ())
        {
          t_it->role = BACKUP;
        }
    }

  if (result > .0)
    return std::max(result,
                    previous);

  return .0;
}