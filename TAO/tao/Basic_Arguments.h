// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file    Basic_Arguments.h
 *
 *  $Id$
 *
 *  @authors Jeff Parsons and Carlos O'Ryan
 */
//=============================================================================


#ifndef TAO_BASIC_ARGUMENTS_H
#define TAO_BASIC_ARGUMENTS_H

#include /**/ "ace/pre.h"

#include "tao/Basic_Argument_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Arg_Traits_T.h"

namespace TAO
{
  /**
   *
   * @brief Specialization for void return type.
   *
   */
  template<>
  class TAO_Export Arg_Traits<void>
  {
    public:
    typedef void        ret_type;

    typedef RetArgument ret_val;

    typedef Basic_Tag   idl_tag;
  };

  template<>
  void
  TAO::In_Basic_Argument_T<unsigned int>::interceptor_value (CORBA::Any *) const
{
// @todo
//  p.argument <<= this->x_;
}

template<>
void
TAO::Ret_Basic_Argument_T<unsigned int>::interceptor_value (CORBA::Any *) const
{
// @todo
//  (*any) <<= this->x_;
}




  /**
   *
   * @brief Specializations for basic stub arg types,
   *  except (w)char/boolean/octet.
   *
   */

  template<>
  class TAO_Export Arg_Traits<CORBA::Short>
    : public Basic_Arg_Traits_T<CORBA::Short>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::Long>
    : public Basic_Arg_Traits_T<CORBA::Long>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::UShort>
    : public Basic_Arg_Traits_T<CORBA::UShort>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::ULong>
    : public Basic_Arg_Traits_T<CORBA::ULong>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::Float>
    : public Basic_Arg_Traits_T<CORBA::Float>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::Double>
    : public Basic_Arg_Traits_T<CORBA::Double>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::LongLong>
    : public Basic_Arg_Traits_T<CORBA::LongLong>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::ULongLong>
    : public Basic_Arg_Traits_T<CORBA::ULongLong>
  {
  };

  template<>
  class TAO_Export Arg_Traits<CORBA::LongDouble>
    : public Basic_Arg_Traits_T<CORBA::LongDouble>
  {
  };
}

#include /**/ "ace/post.h"

#endif /* TAO_BASIC_ARGUMENTS_H */
