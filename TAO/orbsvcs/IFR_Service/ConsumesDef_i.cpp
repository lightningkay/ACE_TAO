/* -*- C++ -*- */
// $Id$

#include "Repository_i.h"
#include "ConsumesDef_i.h"

ACE_RCSID(IFR_Service, ConsumesDef_i, "$Id$")

TAO_ConsumesDef_i::TAO_ConsumesDef_i (
    TAO_Repository_i *repo,
    ACE_Configuration_Section_Key section_key
  )
  : TAO_IRObject_i (repo, section_key),
    TAO_Contained_i (repo, section_key),
    TAO_EventDef_i (repo, section_key)
{
}

TAO_ConsumesDef_i::~TAO_ConsumesDef_i (void)
{
}

IR::DefinitionKind
TAO_ConsumesDef_i::def_kind (CORBA::Environment &)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  return IR::dk_Consumes;
}

void 
TAO_ConsumesDef_i::destroy (CORBA::Environment &ACE_TRY_ENV)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  // TODO
}

IR::Contained::Description *
TAO_ConsumesDef_i::describe (CORBA::Environment &ACE_TRY_ENV)
    ACE_THROW_SPEC ((CORBA::SystemException))
{
  // TODO
  return 0;
}

