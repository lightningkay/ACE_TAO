/* -*- C++ -*- */
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO/orbsvcs/IFR_Service
//
// = FILENAME
//    InterfaceDef_i.h
//
// = DESCRIPTION
//    IR::InterfaceDef servant class.
//
// = AUTHOR
//    Jeff Parsons <parsons@cs.wustl.edu>
//
// ============================================================================

#ifndef TAO_INTERFACEDEF_I_H
#define TAO_INTERFACEDEF_I_H

#include "Contained_i.h"
#include "IDLType_i.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_InterfaceDef_i : public virtual TAO_Container_i, 
                           public virtual TAO_Contained_i, 
                           public virtual TAO_IDLType_i
{
  // = TITLE
  //    TAO_InterfaceDef_i
  //
  // = DESCRIPTION
  //    Represents an interface definition.
  //
public:
  TAO_InterfaceDef_i (TAO_Repository_i *repo,
                      ACE_Configuration_Section_Key section_key);
  // Constructor

  virtual ~TAO_InterfaceDef_i (void);
  // Destructor  

  virtual IR::DefinitionKind def_kind (
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Return our definition kind.

  virtual void destroy (
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Remove the repository entry.

  virtual IR::Contained::Description *describe (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // From Contained_i's pure virtual function.

  virtual CORBA::TypeCode_ptr type (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // From IDLType_i's pure virtual function.

  virtual IR::InterfaceDefSeq *base_interfaces (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void base_interfaces (
      const IR::InterfaceDefSeq &base_interfaces,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual CORBA::Boolean is_abstract (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void is_abstract (
      CORBA::Boolean is_abstract,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual CORBA::Boolean is_local (
     CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void is_local (
      CORBA::Boolean is_local,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual CORBA::Boolean is_a (
      const char *interface_id,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::AttributeDef_ptr create_attribute (
      const char *id,
      const char *name,
      const char *version,
      IR::IDLType_ptr type,
      IR::AttributeMode mode,
      const IR::ExceptionDefSeq &get_exceptions,
      const IR::ExceptionDefSeq &put_exceptions,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::OperationDef_ptr create_operation (
      const char *id,
      const char *name,
      const char *version,
      IR::IDLType_ptr result,
      IR::OperationMode mode,
      const IR::ParDescriptionSeq &params,
      const IR::ExceptionDefSeq &exceptions,
      const IR::ContextIdSeq &contexts,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  void inherited_contents (
      ACE_Unbounded_Queue<IR::DefinitionKind> &kind_queue,
      ACE_Unbounded_Queue<ACE_TString> &path_queue,
      IR::DefinitionKind limit_type,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Gathers the attributes and operations of all the ancestors.

private:
  void destroy_special (
      const char *sub_section,
        CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Removed the repo ids of our attributes and operations from
  // the flat repo ids section of the repository.
};

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_INTERFACEDEF_I_H */

