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

#include "Messaging.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_Messaging_ExceptionHolder[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  42,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x4d657373),
  ACE_NTOHL (0x6167696e),
  ACE_NTOHL (0x672f4578),
  ACE_NTOHL (0x63657074),
  ACE_NTOHL (0x696f6e48),
  ACE_NTOHL (0x6f6c6465),
  ACE_NTOHL (0x723a312e),
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/Messaging/ExceptionHolder:1.0
    16,
  ACE_NTOHL (0x45786365),
  ACE_NTOHL (0x7074696f),
  ACE_NTOHL (0x6e486f6c),
  ACE_NTOHL (0x64657200),  // name = ExceptionHolder
    0, // value modifier
  CORBA::tk_null, // no stateful base valuetype

3, // member count
    20,
  ACE_NTOHL (0x69735f73),
  ACE_NTOHL (0x79737465),
  ACE_NTOHL (0x6d5f6578),
  ACE_NTOHL (0x63657074),
  ACE_NTOHL (0x696f6e00),  // name = is_system_exception
    CORBA::tk_boolean,

  1, // data member visibility marker

  11,
  ACE_NTOHL (0x62797465),
  ACE_NTOHL (0x5f6f7264),
  ACE_NTOHL (0x65720000),  // name = byte_order
    CORBA::tk_boolean,

  1, // data member visibility marker

  20,
  ACE_NTOHL (0x6d617273),
  ACE_NTOHL (0x68616c65),
  ACE_NTOHL (0x645f6578),
  ACE_NTOHL (0x63657074),
  ACE_NTOHL (0x696f6e00),  // name = marshaled_exception
    CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a),
    ACE_NTOHL (0x6f6d672e),
    ACE_NTOHL (0x6f72672f),
    ACE_NTOHL (0x434f5242),
    ACE_NTOHL (0x412f4f63),
    ACE_NTOHL (0x74657453),
    ACE_NTOHL (0x65713a31),
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/OctetSeq:1.0
        9,
    ACE_NTOHL (0x4f637465),
    ACE_NTOHL (0x74536571),
    ACE_NTOHL (0x0),  // name = OctetSeq
        CORBA::tk_sequence, // typecode kind
    12, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_octet,

      0U,


  1, // data member visibility marker

};

static CORBA::TypeCode _tc_TAO_tc_Messaging_ExceptionHolder (
    CORBA::tk_value,
    sizeof (_oc_Messaging_ExceptionHolder),
    (char *) &_oc_Messaging_ExceptionHolder,
    0,
    0
  );

namespace Messaging
{
  ::CORBA::TypeCode_ptr _tc_ExceptionHolder =
    &_tc_TAO_tc_Messaging_ExceptionHolder;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_Messaging_ReplyHandler[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  39,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x4d657373),
  ACE_NTOHL (0x6167696e),
  ACE_NTOHL (0x672f5265),
  ACE_NTOHL (0x706c7948),
  ACE_NTOHL (0x616e646c),
  ACE_NTOHL (0x65723a31),
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/Messaging/ReplyHandler:1.0
    13,
  ACE_NTOHL (0x5265706c),
  ACE_NTOHL (0x7948616e),
  ACE_NTOHL (0x646c6572),
  ACE_NTOHL (0x0),  // name = ReplyHandler
  };

static CORBA::TypeCode _tc_TAO_tc_Messaging_ReplyHandler (
    CORBA::tk_objref,
    sizeof (_oc_Messaging_ReplyHandler),
    (char *) &_oc_Messaging_ReplyHandler,
    0,
    0
  );

namespace Messaging
{
  ::CORBA::TypeCode_ptr _tc_ReplyHandler =
    &_tc_TAO_tc_Messaging_ReplyHandler;
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/any_op_cs.cpp:57

template<>
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ExceptionHolder>::to_value (
    CORBA::ValueBase *&_tao_elem
  ) const
{
  CORBA::add_ref (this->value_);
  _tao_elem = this->value_;
  return 1;
}
// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ExceptionHolder *_tao_elem
  )
{
  CORBA::add_ref (_tao_elem);
  _tao_any <<= &_tao_elem;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ExceptionHolder **_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::ExceptionHolder>::insert (
      _tao_any,
      Messaging::ExceptionHolder::_tao_any_destructor,
      Messaging::_tc_ExceptionHolder,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::ExceptionHolder *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::ExceptionHolder>::extract (
        _tao_any,
        Messaging::ExceptionHolder::_tao_any_destructor,
        Messaging::_tc_ExceptionHolder,
        _tao_elem
      );
}



// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<Messaging::ReplyHandler>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyHandler_ptr _tao_elem
  )
{
  Messaging::ReplyHandler_ptr _tao_objptr =
    Messaging::ReplyHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    Messaging::ReplyHandler_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::ReplyHandler>::insert (
      _tao_any,
      Messaging::ReplyHandler::_tao_any_destructor,
      Messaging::_tc_ReplyHandler,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::ReplyHandler_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::ReplyHandler>::extract (
        _tao_any,
        Messaging::ReplyHandler::_tao_any_destructor,
        Messaging::_tc_ReplyHandler,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Impl_T<
        Messaging::ExceptionHolder
      >;

  template class
    TAO::Any_Impl_T<
        Messaging::ReplyHandler
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::ExceptionHolder \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        Messaging::ReplyHandler \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
