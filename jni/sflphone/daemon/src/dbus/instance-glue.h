
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__instance_glue_h__ADAPTOR_MARSHAL_H
#define __dbusxx__instance_glue_h__ADAPTOR_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace sflphone {
namespace SFLphone {

class Instance_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    Instance_adaptor()
    : ::DBus::InterfaceAdaptor("org.sflphone.SFLphone.Instance")
    {
        register_method(Instance_adaptor, Register, _Register_stub);
        register_method(Instance_adaptor, Unregister, _Unregister_stub);
    }

    ::DBus::IntrospectedInterface *const introspect() const 
    {
        static ::DBus::IntrospectedArgument Register_args[] = 
        {
            { "pid", "i", true },
            { "name", "s", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument Unregister_args[] = 
        {
            { "pid", "i", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod Instance_adaptor_methods[] = 
        {
            { "Register", Register_args },
            { "Unregister", Unregister_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod Instance_adaptor_signals[] = 
        {
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty Instance_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface Instance_adaptor_interface = 
        {
            "org.sflphone.SFLphone.Instance",
            Instance_adaptor_methods,
            Instance_adaptor_signals,
            Instance_adaptor_properties
        };
        return &Instance_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual void Register(const int32_t& pid, const std::string& name) = 0;
    virtual void Unregister(const int32_t& pid) = 0;

public:

    /* signal emitters for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _Register_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        Register(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _Unregister_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argin1; ri >> argin1;
        Unregister(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
};

} } } 
#endif //__dbusxx__instance_glue_h__ADAPTOR_MARSHAL_H