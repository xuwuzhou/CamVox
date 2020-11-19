// Generated by gencpp from file isee_synchronize/FirmwareUpdate.msg
// DO NOT EDIT!


#ifndef ISEE_SYNCHRONIZE_MESSAGE_FIRMWAREUPDATE_H
#define ISEE_SYNCHRONIZE_MESSAGE_FIRMWAREUPDATE_H

#include <ros/service_traits.h>


#include <isee_synchronize/FirmwareUpdateRequest.h>
#include <isee_synchronize/FirmwareUpdateResponse.h>


namespace isee_synchronize
{

struct FirmwareUpdate
{

typedef FirmwareUpdateRequest Request;
typedef FirmwareUpdateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FirmwareUpdate
} // namespace isee_synchronize


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::isee_synchronize::FirmwareUpdate > {
  static const char* value()
  {
    return "582779c570de719ad3dde68b15a648a8";
  }

  static const char* value(const ::isee_synchronize::FirmwareUpdate&) { return value(); }
};

template<>
struct DataType< ::isee_synchronize::FirmwareUpdate > {
  static const char* value()
  {
    return "isee_synchronize/FirmwareUpdate";
  }

  static const char* value(const ::isee_synchronize::FirmwareUpdate&) { return value(); }
};


// service_traits::MD5Sum< ::isee_synchronize::FirmwareUpdateRequest> should match 
// service_traits::MD5Sum< ::isee_synchronize::FirmwareUpdate > 
template<>
struct MD5Sum< ::isee_synchronize::FirmwareUpdateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::isee_synchronize::FirmwareUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::FirmwareUpdateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::isee_synchronize::FirmwareUpdateRequest> should match 
// service_traits::DataType< ::isee_synchronize::FirmwareUpdate > 
template<>
struct DataType< ::isee_synchronize::FirmwareUpdateRequest>
{
  static const char* value()
  {
    return DataType< ::isee_synchronize::FirmwareUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::FirmwareUpdateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::isee_synchronize::FirmwareUpdateResponse> should match 
// service_traits::MD5Sum< ::isee_synchronize::FirmwareUpdate > 
template<>
struct MD5Sum< ::isee_synchronize::FirmwareUpdateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::isee_synchronize::FirmwareUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::FirmwareUpdateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::isee_synchronize::FirmwareUpdateResponse> should match 
// service_traits::DataType< ::isee_synchronize::FirmwareUpdate > 
template<>
struct DataType< ::isee_synchronize::FirmwareUpdateResponse>
{
  static const char* value()
  {
    return DataType< ::isee_synchronize::FirmwareUpdate >::value();
  }
  static const char* value(const ::isee_synchronize::FirmwareUpdateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ISEE_SYNCHRONIZE_MESSAGE_FIRMWAREUPDATE_H