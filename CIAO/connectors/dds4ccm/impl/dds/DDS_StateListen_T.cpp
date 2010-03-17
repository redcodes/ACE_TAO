// -*- C++ -*-
// $Id$

#include "dds4ccm/impl/dds/DataReaderStateListener_T.h"
#include "dds4ccm/impl/dds/Reader_T.h"
#include "dds4ccm/impl/dds/StateListenerControl_T.h"
#include "dds4ccm/impl/dds/PortStatusListener_T.h"

#include "dds4ccm/impl/logger/Log_Macros.h"

template <typename DDS_TYPE, typename CCM_TYPE>
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::DDS_StateListen_T (void) :
  data_control_ (new CCM_DDS_StateListenerControl_T
    < ::CCM_DDS::CCM_StateListenerControl> ()),
  ccm_dds_reader_ (0)
{
}

template <typename DDS_TYPE, typename CCM_TYPE>
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::~DDS_StateListen_T (void)
{
}

template <typename DDS_TYPE, typename CCM_TYPE>
void
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::configuration_complete (
  ::DDS::Topic_ptr topic,
  ::DDS::Subscriber_ptr subscriber,
  const char* library_name,
  const char* profile_name)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::configuration_complete");

  try
    {
      if (::CORBA::is_nil (this->data_reader_.in ()))
        {
          ::DDS::DataReader_var reader;
          if (library_name && profile_name)
            {
              reader = subscriber->create_datareader_with_profile (
                    topic,
                    library_name,
                    profile_name,
                    ::DDS::DataReaderListener::_nil (),
                    0);
            }
          else
            {
              ::DDS::DataReaderQos drqos;
              reader = subscriber->create_datareader (
                    topic,
                    drqos,
                    ::DDS::DataReaderListener::_nil (),
                    0);
            }
          ::CIAO::DDS4CCM::CCM_DDS_DataReader_i *rd =
            dynamic_cast < ::CIAO::DDS4CCM::CCM_DDS_DataReader_i *> (reader.in ());
          this->ccm_dds_reader_.set_impl (rd->get_impl ());
          this->data_reader_ = ::DDS::CCM_DataReader::_narrow (reader);
          this->dds_read_.set_impl (this->data_reader_.in ());
        }
    }
  catch (...)
    {
      DDS4CCM_ERROR (1, (LM_EMERGENCY, "DDS_StateListen_T::configuration_complete: Caught unknown c++ exception.\n"));
      throw CORBA::INTERNAL ();
    }
}

template <typename DDS_TYPE, typename CCM_TYPE>
void
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::activate (
  typename CCM_TYPE::statelistener_type::_ptr_type listener,
  ::CCM_DDS::PortStatusListener_ptr status,
  ACE_Reactor* reactor)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::activate");

  try
    {
      if (::CORBA::is_nil (this->data_listener_.in ()))
        {
          ACE_NEW_THROW_EX (this->data_listener_,
                            DataReaderStateListener (
                              listener,
                              status,
                              data_control_.in (),
                              reactor),
                            CORBA::NO_MEMORY ());
        }
      this->ccm_dds_reader_.set_listener (
        this->data_listener_.in (),
        ::CIAO::DDS4CCM::DataReaderStateListener_T<DDS_TYPE, CCM_TYPE>::get_mask (
          listener));
    }
  catch (...)
    {
      DDS4CCM_ERROR (1, (LM_EMERGENCY, "DDS_StateListen_T::activate: Caught unknown c++ exception.\n"));
      throw CORBA::INTERNAL ();
    }
}

template <typename DDS_TYPE, typename CCM_TYPE>
void
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::passivate (void)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::passivate");
  try
    {
      this->ccm_dds_reader_.set_listener (
              ::DDS::DataReaderListener::_nil (),
              0);
      this->data_listener_ = ::DDS::DataReaderListener::_nil ();
    }
  catch (...)
    {
      DDS4CCM_ERROR (1, (LM_EMERGENCY, "DDS_StateListen_T::passivate: Caught unknown c++ exception.\n"));
      throw CORBA::INTERNAL ();
    }
}

template <typename DDS_TYPE, typename CCM_TYPE>
void
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::remove (
  ::DDS::Subscriber_ptr subscriber)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::remove");
  try
    {
      subscriber->delete_datareader (this->data_reader_.in ());
      this->ccm_dds_reader_.set_impl (0);
      this->data_reader_ = ::DDS::CCM_DataReader::_nil ();
      this->dds_read_.set_impl (0);
    }
  catch (...)
    {
      DDS4CCM_ERROR (1, (LM_EMERGENCY, "DDS_StateListen_T::remove: Caught unknown c++ exception.\n"));
      throw CORBA::INTERNAL ();
    }
}

template <typename DDS_TYPE, typename CCM_TYPE>
typename CCM_TYPE::reader_type::_ptr_type
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::get_data (void)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::get_data");

  return &this->dds_read_;
}

template <typename DDS_TYPE, typename CCM_TYPE>
::DDS::CCM_DataReader_ptr
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::get_dds_entity (void)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::get_dds_entity");

  return &this->ccm_dds_reader_;
}

template <typename DDS_TYPE, typename CCM_TYPE>
::CCM_DDS::CCM_StateListenerControl_ptr
DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::get_data_control (void)
{
  DDS4CCM_TRACE ("DDS_StateListen_T<DDS_TYPE, CCM_TYPE>::get_data_control");

  return ::CCM_DDS::CCM_StateListenerControl::_duplicate (
    this->data_control_.in ());
}

