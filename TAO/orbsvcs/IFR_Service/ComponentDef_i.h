/* -*- C++ -*- */
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO/orbsvcs/IFR_Service
//
// = FILENAME
//    ComponentDef_i.h
//
// = DESCRIPTION
//    IR::ComponentDef servant class.
//
// = AUTHOR
//    Jeff Parsons <parsons@cs.wustl.edu>
//
// ============================================================================

#ifndef TAO_COMPONENTDEF_I_H
#define TAO_COMPONENTDEF_I_H

#include "InterfaceDef_i.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_ComponentDef_i : public virtual TAO_InterfaceDef_i
{
  // = TITLE
  //    TAO_ComponentDef_i
  //
  // = DESCRIPTION
  //    Represents a component definition.
  //
public:
  TAO_ComponentDef_i (TAO_Repository_i *repo,
                      ACE_Configuration_Section_Key section_key);
  // Constructor

  virtual ~TAO_ComponentDef_i (void);
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

  virtual IR::InterfaceDefSeq *supported_interfaces (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void supported_interfaces (
      const IR::InterfaceDefSeq &supported_interfaces,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::ComponentDef_ptr base_component (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::ProvidesDefSeq *provides_interfaces (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::UsesDefSeq *uses_interfaces (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::EmitsDefSeq *emits_events (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::PublishesDefSeq *publishes_events (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::ConsumesDefSeq *consumes_events (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual CORBA::Boolean is_basic (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::ProvidesDef_ptr create_provides (
      const char *id,
      const char *name,
      const char *version,
      IR::InterfaceDef_ptr interface_type,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::UsesDef_ptr create_uses (
      const char *id,
      const char *name,
      const char *version,
      IR::InterfaceDef_ptr interface_type,
      CORBA::Boolean is_multiple,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::EmitsDef_ptr create_emits (
      const char *id,
      const char *name,
      const char *version,
      IR::ValueDef_ptr value,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::PublishesDef_ptr create_publishes (
      const char *id,
      const char *name,
      const char *version,
      IR::ValueDef_ptr value,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual IR::ConsumesDef_ptr create_consumes (
      const char *id,
      const char *name,
      const char *version,
      IR::ValueDef_ptr value,
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
};

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_COMPONENTDEF_I_H */


