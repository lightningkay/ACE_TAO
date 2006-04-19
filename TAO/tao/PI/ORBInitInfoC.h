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
// be/be_codegen.cpp:164

#ifndef _TAO_IDL_ORIG_ORBINITINFOC_H_
#define _TAO_IDL_ORIG_ORBINITINFOC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PI/pi_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/StringSeqA.h"
#include "tao/CodecFactory/IOP_Codec_includeA.h"
#include "tao/AnyTypeCode/PI_ForwardA.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Versioned_Namespace.h"

#include "tao/StringSeqC.h"
#include "tao/CodecFactory/IOP_Codec_includeC.h"
#include "tao/PI_ForwardC.h"
#include "tao/PolicyC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_PI_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:49

namespace PortableInterceptor
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR__VAR_OUT_CH_

  class ClientRequestInterceptor;
  typedef ClientRequestInterceptor *ClientRequestInterceptor_ptr;

  typedef
    TAO_Objref_Var_T<
        ClientRequestInterceptor
      >
    ClientRequestInterceptor_var;

  typedef
    TAO_Objref_Out_T<
        ClientRequestInterceptor
      >
    ClientRequestInterceptor_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR__VAR_OUT_CH_

  class ServerRequestInterceptor;
  typedef ServerRequestInterceptor *ServerRequestInterceptor_ptr;

  typedef
    TAO_Objref_Var_T<
        ServerRequestInterceptor
      >
    ServerRequestInterceptor_var;

  typedef
    TAO_Objref_Out_T<
        ServerRequestInterceptor
      >
    ServerRequestInterceptor_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_IORINTERCEPTOR__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_IORINTERCEPTOR__VAR_OUT_CH_

  class IORInterceptor;
  typedef IORInterceptor *IORInterceptor_ptr;

  typedef
    TAO_Objref_Var_T<
        IORInterceptor
      >
    IORInterceptor_var;

  typedef
    TAO_Objref_Out_T<
        IORInterceptor
      >
    IORInterceptor_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_POLICYFACTORY__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_POLICYFACTORY__VAR_OUT_CH_

  class PolicyFactory;
  typedef PolicyFactory *PolicyFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        PolicyFactory
      >
    PolicyFactory_var;

  typedef
    TAO_Objref_Out_T<
        PolicyFactory
      >
    PolicyFactory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO__VAR_OUT_CH_

  class ORBInitInfo;
  typedef ORBInitInfo *ORBInitInfo_ptr;

  typedef
    TAO_Objref_Var_T<
        ORBInitInfo
      >
    ORBInitInfo_var;

  typedef
    TAO_Objref_Out_T<
        ORBInitInfo
      >
    ORBInitInfo_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:54

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO_CH_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO_CH_

  class TAO_PI_Export ORBInitInfo
    : public virtual ::CORBA::Object
  {
  public:
    typedef ORBInitInfo_ptr _ptr_type;
    typedef ORBInitInfo_var _var_type;

    // The static operations.
    static ORBInitInfo_ptr _duplicate (ORBInitInfo_ptr obj);

    static void _tao_release (ORBInitInfo_ptr obj);

    static ORBInitInfo_ptr _narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static ORBInitInfo_ptr _unchecked_narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static ORBInitInfo_ptr _nil (void)
    {
      return static_cast<ORBInitInfo_ptr> (0);
    }



    // TAO_IDL - Generated from
    // be/be_visitor_typedef/typedef_ch.cpp:413

    typedef char * ObjectId;
    typedef ::CORBA::String_var ObjectId_var;
    typedef ::CORBA::String_out ObjectId_out;

    // TAO_IDL - Generated from
    // be/be_visitor_typecode/typecode_decl.cpp:49

    static ::CORBA::TypeCode_ptr const _tc_ObjectId;

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:53

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO_DUPLICATENAME_CH_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO_DUPLICATENAME_CH_

    class TAO_PI_Export DuplicateName : public ::CORBA::UserException
    {
    public:

      TAO::String_Manager name;
      DuplicateName (void);
      DuplicateName (const DuplicateName &);
      ~DuplicateName (void);

      DuplicateName &operator= (const DuplicateName &);

      static void _tao_any_destructor (void *);

      static DuplicateName *_downcast ( ::CORBA::Exception *);
      static const DuplicateName *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;

      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );

      // TAO_IDL - Generated from
      // be/be_visitor_exception/exception_ctor.cpp:66

      DuplicateName (
          const char * _tao_name
        );

      virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
    };

    // TAO_IDL - Generated from
    // be/be_visitor_typecode/typecode_decl.cpp:49

    static ::CORBA::TypeCode_ptr const _tc_DuplicateName;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:53

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO_INVALIDNAME_CH_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO_INVALIDNAME_CH_

    class TAO_PI_Export InvalidName : public ::CORBA::UserException
    {
    public:

      InvalidName (void);
      InvalidName (const InvalidName &);
      ~InvalidName (void);

      InvalidName &operator= (const InvalidName &);

      static void _tao_any_destructor (void *);

      static InvalidName *_downcast ( ::CORBA::Exception *);
      static const InvalidName *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (
          TAO_OutputCDR &
          ACE_ENV_ARG_DECL
        ) const;

      virtual void _tao_decode (
          TAO_InputCDR &
          ACE_ENV_ARG_DECL
        );

      virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
    };

    // TAO_IDL - Generated from
    // be/be_visitor_typecode/typecode_decl.cpp:49

    static ::CORBA::TypeCode_ptr const _tc_InvalidName;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual ::CORBA::StringSeq * arguments (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual char * orb_id (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual ::IOP::CodecFactory_ptr codec_factory (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void register_initial_reference (
        const char * id,
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::InvalidName
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual ::CORBA::Object_ptr resolve_initial_references (
        const char * id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::InvalidName
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void add_client_request_interceptor (
        ::PortableInterceptor::ClientRequestInterceptor_ptr interceptor
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::DuplicateName
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void add_server_request_interceptor (
        ::PortableInterceptor::ServerRequestInterceptor_ptr interceptor
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::DuplicateName
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void add_ior_interceptor (
        ::PortableInterceptor::IORInterceptor_ptr interceptor
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::DuplicateName
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual ::PortableInterceptor::SlotId allocate_slot_id (
        ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void register_policy_factory (
        ::CORBA::PolicyType type,
        ::PortableInterceptor::PolicyFactory_ptr policy_factory
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:210

    virtual ::CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Abstract or local interface only.
    ORBInitInfo (void);

    virtual ~ORBInitInfo (void);

  private:
    // Private and unimplemented for concrete interfaces.
    ORBInitInfo (const ORBInitInfo &);

    void operator= (const ORBInitInfo &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:49

  extern TAO_PI_Export ::CORBA::TypeCode_ptr const _tc_ORBInitInfo;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO_3_1__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO_3_1__VAR_OUT_CH_

  class ORBInitInfo_3_1;
  typedef ORBInitInfo_3_1 *ORBInitInfo_3_1_ptr;

  typedef
    TAO_Objref_Var_T<
        ORBInitInfo_3_1
      >
    ORBInitInfo_3_1_var;

  typedef
    TAO_Objref_Out_T<
        ORBInitInfo_3_1
      >
    ORBInitInfo_3_1_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:54

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO_3_1_CH_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO_3_1_CH_

  class TAO_PI_Export ORBInitInfo_3_1
    : public virtual ::PortableInterceptor::ORBInitInfo
  {
  public:
    typedef ORBInitInfo_3_1_ptr _ptr_type;
    typedef ORBInitInfo_3_1_var _var_type;

    // The static operations.
    static ORBInitInfo_3_1_ptr _duplicate (ORBInitInfo_3_1_ptr obj);

    static void _tao_release (ORBInitInfo_3_1_ptr obj);

    static ORBInitInfo_3_1_ptr _narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static ORBInitInfo_3_1_ptr _unchecked_narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static ORBInitInfo_3_1_ptr _nil (void)
    {
      return static_cast<ORBInitInfo_3_1_ptr> (0);
    }



    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void add_client_request_interceptor_with_policy (
        ::PortableInterceptor::ClientRequestInterceptor_ptr interceptor,
        const ::CORBA::PolicyList & policies
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::DuplicateName,
        ::CORBA::PolicyError
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void add_server_request_interceptor_with_policy (
        ::PortableInterceptor::ServerRequestInterceptor_ptr interceptor,
        const ::CORBA::PolicyList & policies
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::DuplicateName,
        ::CORBA::PolicyError
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void add_ior_interceptor_with_policy (
        ::PortableInterceptor::IORInterceptor_ptr interceptor,
        const ::CORBA::PolicyList & policies
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ORBInitInfo::DuplicateName,
        ::CORBA::PolicyError
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:210

    virtual ::CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Abstract or local interface only.
    ORBInitInfo_3_1 (void);

    virtual ~ORBInitInfo_3_1 (void);

  private:
    // Private and unimplemented for concrete interfaces.
    ORBInitInfo_3_1 (const ORBInitInfo_3_1 &);

    void operator= (const ORBInitInfo_3_1 &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:49

  extern TAO_PI_Export ::CORBA::TypeCode_ptr const _tc_ORBInitInfo_3_1;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:78

} // module PortableInterceptor

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

// Traits specializations.
namespace TAO
{

#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR__TRAITS_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::ClientRequestInterceptor>
  {
    static ::PortableInterceptor::ClientRequestInterceptor_ptr duplicate (
        ::PortableInterceptor::ClientRequestInterceptor_ptr
      );
    static void release (
        ::PortableInterceptor::ClientRequestInterceptor_ptr
      );
    static ::PortableInterceptor::ClientRequestInterceptor_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::ClientRequestInterceptor_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR__TRAITS_)
#define _PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::ServerRequestInterceptor>
  {
    static ::PortableInterceptor::ServerRequestInterceptor_ptr duplicate (
        ::PortableInterceptor::ServerRequestInterceptor_ptr
      );
    static void release (
        ::PortableInterceptor::ServerRequestInterceptor_ptr
      );
    static ::PortableInterceptor::ServerRequestInterceptor_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::ServerRequestInterceptor_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_PORTABLEINTERCEPTOR_IORINTERCEPTOR__TRAITS_)
#define _PORTABLEINTERCEPTOR_IORINTERCEPTOR__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::IORInterceptor>
  {
    static ::PortableInterceptor::IORInterceptor_ptr duplicate (
        ::PortableInterceptor::IORInterceptor_ptr
      );
    static void release (
        ::PortableInterceptor::IORInterceptor_ptr
      );
    static ::PortableInterceptor::IORInterceptor_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::IORInterceptor_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_PORTABLEINTERCEPTOR_POLICYFACTORY__TRAITS_)
#define _PORTABLEINTERCEPTOR_POLICYFACTORY__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::PolicyFactory>
  {
    static ::PortableInterceptor::PolicyFactory_ptr duplicate (
        ::PortableInterceptor::PolicyFactory_ptr
      );
    static void release (
        ::PortableInterceptor::PolicyFactory_ptr
      );
    static ::PortableInterceptor::PolicyFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::PolicyFactory_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO__TRAITS_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::ORBInitInfo>
  {
    static ::PortableInterceptor::ORBInitInfo_ptr duplicate (
        ::PortableInterceptor::ORBInitInfo_ptr
      );
    static void release (
        ::PortableInterceptor::ORBInitInfo_ptr
      );
    static ::PortableInterceptor::ORBInitInfo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::ORBInitInfo_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_PORTABLEINTERCEPTOR_ORBINITINFO_3_1__TRAITS_)
#define _PORTABLEINTERCEPTOR_ORBINITINFO_3_1__TRAITS_

  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::ORBInitInfo_3_1>
  {
    static ::PortableInterceptor::ORBInitInfo_3_1_ptr duplicate (
        ::PortableInterceptor::ORBInitInfo_3_1_ptr
      );
    static void release (
        ::PortableInterceptor::ORBInitInfo_3_1_ptr
      );
    static ::PortableInterceptor::ORBInitInfo_3_1_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::PortableInterceptor::ORBInitInfo_3_1_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be/be_codegen.cpp:1101

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */


