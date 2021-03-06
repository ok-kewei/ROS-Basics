// Generated by gencpp from file my_customer_srv_msg_pkg/MyCustomServiceMessageRequest.msg
// DO NOT EDIT!


#ifndef MY_CUSTOMER_SRV_MSG_PKG_MESSAGE_MYCUSTOMSERVICEMESSAGEREQUEST_H
#define MY_CUSTOMER_SRV_MSG_PKG_MESSAGE_MYCUSTOMSERVICEMESSAGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_customer_srv_msg_pkg
{
template <class ContainerAllocator>
struct MyCustomServiceMessageRequest_
{
  typedef MyCustomServiceMessageRequest_<ContainerAllocator> Type;

  MyCustomServiceMessageRequest_()
    : duration(0)  {
    }
  MyCustomServiceMessageRequest_(const ContainerAllocator& _alloc)
    : duration(0)  {
  (void)_alloc;
    }



   typedef int32_t _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MyCustomServiceMessageRequest_

typedef ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<std::allocator<void> > MyCustomServiceMessageRequest;

typedef boost::shared_ptr< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest > MyCustomServiceMessageRequestPtr;
typedef boost::shared_ptr< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest const> MyCustomServiceMessageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_customer_srv_msg_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f60182c6a4cf2e688b1837c24d5f12e";
  }

  static const char* value(const ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f60182c6a4cf2e6ULL;
  static const uint64_t static_value2 = 0x88b1837c24d5f12eULL;
};

template<class ContainerAllocator>
struct DataType< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_customer_srv_msg_pkg/MyCustomServiceMessageRequest";
  }

  static const char* value(const ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 duration\n\
";
  }

  static const char* value(const ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MyCustomServiceMessageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_customer_srv_msg_pkg::MyCustomServiceMessageRequest_<ContainerAllocator>& v)
  {
    s << indent << "duration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_CUSTOMER_SRV_MSG_PKG_MESSAGE_MYCUSTOMSERVICEMESSAGEREQUEST_H
