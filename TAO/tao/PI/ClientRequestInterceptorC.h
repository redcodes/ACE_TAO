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
// be\be_codegen.cpp:154

#ifndef _TAO_IDL_CLIENTREQUESTINTERCEPTORC_H_
#define _TAO_IDL_CLIENTREQUESTINTERCEPTORC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PI/pi_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"

#include "tao/PI/InterceptorC.h"
#include "tao/PI/PIForwardRequestC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_PI_Export

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace PortableInterceptor
{
  
  // TAO_IDL - Generated from
  // be\be_interface.cpp:646

#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO__VAR_OUT_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINFO__VAR_OUT_CH_
  
  class ClientRequestInfo;
  typedef ClientRequestInfo *ClientRequestInfo_ptr;
  
  typedef
    TAO_Objref_Var_T<
        ClientRequestInfo
      >
    ClientRequestInfo_var;
  
  typedef
    TAO_Objref_Out_T<
        ClientRequestInfo
      >
    ClientRequestInfo_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be\be_interface.cpp:646

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
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_CH_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_CH_
  
  class TAO_PI_Export ClientRequestInterceptor
    : public virtual ::PortableInterceptor::Interceptor
  {
  public:
    typedef ClientRequestInterceptor_ptr _ptr_type;
    typedef ClientRequestInterceptor_var _var_type;
    
    // The static operations.
    static ClientRequestInterceptor_ptr _duplicate (ClientRequestInterceptor_ptr obj);
    
    static void _tao_release (ClientRequestInterceptor_ptr obj);
    
    static ClientRequestInterceptor_ptr _narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static ClientRequestInterceptor_ptr _unchecked_narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static ClientRequestInterceptor_ptr _nil (void)
    {
      return static_cast<ClientRequestInterceptor_ptr> (0);
    }
    
    
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void send_request (
        ::PortableInterceptor::ClientRequestInfo_ptr ri
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ForwardRequest
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void send_poll (
        ::PortableInterceptor::ClientRequestInfo_ptr ri
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void receive_reply (
        ::PortableInterceptor::ClientRequestInfo_ptr ri
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void receive_exception (
        ::PortableInterceptor::ClientRequestInfo_ptr ri
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ForwardRequest
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void receive_other (
        ::PortableInterceptor::ClientRequestInfo_ptr ri
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException,
        ::PortableInterceptor::ForwardRequest
      )) = 0;
    
    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:210
    
    virtual ::CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ClientRequestInterceptor (void);
    
    virtual ~ClientRequestInterceptor (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ClientRequestInterceptor (const ClientRequestInterceptor &);
    
    void operator= (const ClientRequestInterceptor &);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:78

} // module PortableInterceptor

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{

#if !defined (_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO__TRAITS_)
#define _PORTABLEINTERCEPTOR_CLIENTREQUESTINFO__TRAITS_
  
  template<>
  struct TAO_PI_Export Objref_Traits< ::PortableInterceptor::ClientRequestInfo>
  {
    static ::PortableInterceptor::ClientRequestInfo_ptr duplicate (
        ::PortableInterceptor::ClientRequestInfo_ptr
      );
    static void release (
        ::PortableInterceptor::ClientRequestInfo_ptr
      );
    static ::PortableInterceptor::ClientRequestInfo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        ::PortableInterceptor::ClientRequestInfo_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

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
        ::PortableInterceptor::ClientRequestInterceptor_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be\be_codegen.cpp:1040

TAO_END_VERSIONED_NAMESPACE_DECL


#include /**/ "ace/post.h"

#endif /* ifndef */


