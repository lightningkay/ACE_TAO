// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:171

#ifndef _TAO_IDL_ORIG_OBJECTIDLISTC_H_
#define _TAO_IDL_ORIG_OBJECTIDLISTC_H_

#include /**/ "ace/pre.h"

#include "tao/Sequence_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/TAO_Export.h"
#include "tao/CDR.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

namespace CORBA
{

  // TAO_IDL - Generated from
  // be\be_visitor_typedef/typedef_ch.cpp:376

  typedef char * ORB_ObjectId;
  typedef CORBA::String_var ORB_ObjectId_var;
  typedef CORBA::String_out ORB_ObjectId_out;

  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_ORB_ObjectId;

  // TAO_IDL - Generated from
  // be\be_visitor_sequence/sequence_ch.cpp:101

#if !defined (_CORBA_ORB_OBJECTIDLIST_CH_)
#define _CORBA_ORB_OBJECTIDLIST_CH_

  class ORB_ObjectIdList;

  typedef
    TAO_MngSeq_Var_T<
        ORB_ObjectIdList,
        TAO_SeqElem_String_Manager
      >
    ORB_ObjectIdList_var;

  typedef
    TAO_MngSeq_Out_T<
        ORB_ObjectIdList,
        ORB_ObjectIdList_var,
        TAO_SeqElem_String_Manager
      >
    ORB_ObjectIdList_out;

  class TAO_Export ORB_ObjectIdList
    : public
        TAO_Unbounded_String_Sequence
  {
  public:
    ORB_ObjectIdList (void);
    ORB_ObjectIdList (CORBA::ULong max);
    ORB_ObjectIdList (
        CORBA::ULong max,
        CORBA::ULong length,
        char ** buffer,
        CORBA::Boolean release = 0
      );
    ORB_ObjectIdList (const ORB_ObjectIdList &);
    ~ORB_ObjectIdList (void);

    typedef ORB_ObjectIdList_var _var_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:44

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_ORB_ObjectIdList;

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module CORBA

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:59

// Traits specializations.
namespace TAO
{
}

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_ch.cpp:71

#if !defined _TAO_CDR_OP_CORBA_ORB_ObjectIdList_H_
#define _TAO_CDR_OP_CORBA_ORB_ObjectIdList_H_

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::ORB_ObjectIdList &
  );
TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::ORB_ObjectIdList &
  );

#endif /* _TAO_CDR_OP_CORBA_ORB_ObjectIdList_H_ */

// TAO_IDL - Generated from
// be\be_codegen.cpp:978

#if defined (__ACE_INLINE__)
#include "ObjectIdListC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"

#endif /* ifndef */

