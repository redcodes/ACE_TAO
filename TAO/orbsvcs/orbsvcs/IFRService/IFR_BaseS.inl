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


ACE_INLINE
void
POA_CORBA::Contained::_get_def_kind_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::Contained_ptr) obj;
  POA_CORBA::IRObject::_get_def_kind_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:2026

ACE_INLINE
void
POA_CORBA::Contained::destroy_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::Contained_ptr) obj;
  POA_CORBA::IRObject::destroy_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_def_kind (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::_get_def_kind (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::destroy (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::destroy (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


ACE_INLINE
void
POA_CORBA::Container::_get_def_kind_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::Container_ptr) obj;
  POA_CORBA::IRObject::_get_def_kind_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:2026

ACE_INLINE
void
POA_CORBA::Container::destroy_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::Container_ptr) obj;
  POA_CORBA::IRObject::destroy_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_Container_ThruPOA_Proxy_Impl::_get_def_kind (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::_get_def_kind (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_Container_ThruPOA_Proxy_Impl::destroy (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::destroy (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


ACE_INLINE
void
POA_CORBA::IDLType::_get_def_kind_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::IDLType_ptr) obj;
  POA_CORBA::IRObject::_get_def_kind_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:2026

ACE_INLINE
void
POA_CORBA::IDLType::destroy_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::IDLType_ptr) obj;
  POA_CORBA::IRObject::destroy_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_IDLType_ThruPOA_Proxy_Impl::_get_def_kind (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::_get_def_kind (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_IDLType_ThruPOA_Proxy_Impl::destroy (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::destroy (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


ACE_INLINE
void
POA_CORBA::TypedefDef::_get_def_kind_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::IRObject::_get_def_kind_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:2026

ACE_INLINE
void
POA_CORBA::TypedefDef::destroy_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IRObject_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::IRObject::destroy_skel (
      req,
      (POA_CORBA::IRObject_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_id_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_get_id_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_set_id_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_set_id_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_name_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_get_name_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_set_name_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_set_name_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_version_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_get_version_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_set_version_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_set_version_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_defined_in_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_get_defined_in_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_absolute_name_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_get_absolute_name_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_containing_repository_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::_get_containing_repository_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:2026

ACE_INLINE
void
POA_CORBA::TypedefDef::describe_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::describe_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:2026

ACE_INLINE
void
POA_CORBA::TypedefDef::move_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::Contained_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::Contained::move_skel (
      req,
      (POA_CORBA::Contained_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

ACE_INLINE
void
POA_CORBA::TypedefDef::_get_type_skel (
    TAO_ServerRequest &req,
    void *obj,
    void *context
    ACE_ENV_ARG_DECL
  )
{
  POA_CORBA::IDLType_ptr impl = (POA_CORBA::TypedefDef_ptr) obj;
  POA_CORBA::IDLType::_get_type_skel (
      req,
      (POA_CORBA::IDLType_ptr) impl,
      context
      ACE_ENV_ARG_PARAMETER
    );
}

// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_def_kind (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::_get_def_kind (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::destroy (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IRObject_ThruPOA_Proxy_Impl::destroy (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_id (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_id (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_set_id (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_set_id (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_name (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_name (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_set_name (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_set_name (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_version (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_version (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_set_version (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_set_version (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_defined_in (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_defined_in (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_absolute_name (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_absolute_name (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_containing_repository (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::_get_containing_repository (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::describe (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::describe (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::move (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_Contained_ThruPOA_Proxy_Impl::move (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}


// TAO_IDL - Generated from
// be\be_interface.cpp:1323

ACE_INLINE void
POA_CORBA::_TAO_TypedefDef_ThruPOA_Proxy_Impl::_get_type (
    TAO_Abstract_ServantBase *servant,
    TAO::Argument ** args,
    int num_args
    ACE_ENV_ARG_DECL
  )
  ACE_THROW_SPEC ((
    CORBA::SystemException
  ))
{
  POA_CORBA::_TAO_IDLType_ThruPOA_Proxy_Impl::_get_type (
      servant,
      args,
      num_args
      ACE_ENV_ARG_PARAMETER
    );
}

