// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_NET_UNKNOWNHOSTEXCEPTION_H
#define SCAPIX_JAVA_NET_UNKNOWNHOSTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::net {

class UnknownHostException : public object_base<SCAPIX_META_STRING("java/net/UnknownHostException"),
	java::io::IOException>
{
public:

	static ref<UnknownHostException> new_object(ref<java::lang::String> host);
	static ref<UnknownHostException> new_object();

protected:

	UnknownHostException(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::net {

inline ref<UnknownHostException> UnknownHostException::new_object(ref<java::lang::String> host) { return base_::new_object(host); }
inline ref<UnknownHostException> UnknownHostException::new_object() { return base_::new_object(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_UNKNOWNHOSTEXCEPTION_H
