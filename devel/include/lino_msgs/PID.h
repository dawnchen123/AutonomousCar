// Generated by gencpp from file lino_msgs/PID.msg
// DO NOT EDIT!


#ifndef LINO_MSGS_MESSAGE_PID_H
#define LINO_MSGS_MESSAGE_PID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lino_msgs
{
template <class ContainerAllocator>
struct PID_
{
  typedef PID_<ContainerAllocator> Type;

  PID_()
    : p(0.0)
    , d(0.0)
    , i(0.0)  {
    }
  PID_(const ContainerAllocator& _alloc)
    : p(0.0)
    , d(0.0)
    , i(0.0)  {
  (void)_alloc;
    }



   typedef float _p_type;
  _p_type p;

   typedef float _d_type;
  _d_type d;

   typedef float _i_type;
  _i_type i;





  typedef boost::shared_ptr< ::lino_msgs::PID_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lino_msgs::PID_<ContainerAllocator> const> ConstPtr;

}; // struct PID_

typedef ::lino_msgs::PID_<std::allocator<void> > PID;

typedef boost::shared_ptr< ::lino_msgs::PID > PIDPtr;
typedef boost::shared_ptr< ::lino_msgs::PID const> PIDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lino_msgs::PID_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lino_msgs::PID_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'lino_msgs': ['/home/nvidia/linorobot_ws/src/lino_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lino_msgs::PID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lino_msgs::PID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lino_msgs::PID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lino_msgs::PID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lino_msgs::PID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lino_msgs::PID_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lino_msgs::PID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a559df187bdf63f426d5f304b6b28bb4";
  }

  static const char* value(const ::lino_msgs::PID_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa559df187bdf63f4ULL;
  static const uint64_t static_value2 = 0x26d5f304b6b28bb4ULL;
};

template<class ContainerAllocator>
struct DataType< ::lino_msgs::PID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lino_msgs/PID";
  }

  static const char* value(const ::lino_msgs::PID_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lino_msgs::PID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 p\n\
float32 d\n\
float32 i\n\
";
  }

  static const char* value(const ::lino_msgs::PID_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lino_msgs::PID_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p);
      stream.next(m.d);
      stream.next(m.i);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PID_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lino_msgs::PID_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lino_msgs::PID_<ContainerAllocator>& v)
  {
    s << indent << "p: ";
    Printer<float>::stream(s, indent + "  ", v.p);
    s << indent << "d: ";
    Printer<float>::stream(s, indent + "  ", v.d);
    s << indent << "i: ";
    Printer<float>::stream(s, indent + "  ", v.i);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LINO_MSGS_MESSAGE_PID_H
