#include "RT_Endpoint_Selector_Factory.h"
#include "RT_Invocation_Endpoint_Selectors.h"
#include "RT_Endpoint_Utils.h"
#include "RT_Stub.h"

#include "tao/Invocation.h"
#include "tao/Protocols_Hooks.h"

ACE_RCSID (tao,
           RT_Endpoint_Selector_Factory,
           "$Id$")

// ****************************************************************

RT_Endpoint_Selector_Factory::RT_Endpoint_Selector_Factory (void)
{
  ACE_NEW (this->rt_invocation_endpoint_selector_,
           TAO_RT_Invocation_Endpoint_Selector);
}

RT_Endpoint_Selector_Factory::~RT_Endpoint_Selector_Factory (void)
{
  delete this->rt_invocation_endpoint_selector_;
}

TAO_Invocation_Endpoint_Selector *
RT_Endpoint_Selector_Factory::get_selector (TAO_GIOP_Invocation *invocation
                                            ACE_ENV_ARG_DECL)
{
  return this->rt_invocation_endpoint_selector_;
}

// ****************************************************************

ACE_STATIC_SVC_DEFINE (RT_Endpoint_Selector_Factory,
                       ACE_TEXT ("RT_Endpoint_Selector_Factory"),
                       ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME (RT_Endpoint_Selector_Factory),
                       ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
                       0)
ACE_FACTORY_DEFINE (TAO_RTCORBA, RT_Endpoint_Selector_Factory)
