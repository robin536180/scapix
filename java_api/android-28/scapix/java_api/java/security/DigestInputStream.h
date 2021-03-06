// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_SECURITY_DIGESTINPUTSTREAM_H
#define SCAPIX_JAVA_SECURITY_DIGESTINPUTSTREAM_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::lang { class String; }
namespace java::security { class MessageDigest; }

namespace java::security {

class DigestInputStream : public object_base<SCAPIX_META_STRING("java/security/DigestInputStream"),
	java::io::FilterInputStream>
{
public:

	static ref<DigestInputStream> new_object(ref<java::io::InputStream> stream, ref<java::security::MessageDigest> digest);
	ref<java::security::MessageDigest> getMessageDigest();
	void setMessageDigest(ref<java::security::MessageDigest> digest);
	jint read();
	jint read(ref<link::java::array<jbyte>> b, jint off, jint len);
	void on(jboolean on);
	ref<java::lang::String> toString();

protected:

	DigestInputStream(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/MessageDigest.h>

namespace scapix::java_api {
namespace java::security {

inline ref<DigestInputStream> DigestInputStream::new_object(ref<java::io::InputStream> stream, ref<java::security::MessageDigest> digest) { return base_::new_object(stream, digest); }
inline ref<java::security::MessageDigest> DigestInputStream::getMessageDigest() { return call_method<SCAPIX_META_STRING("getMessageDigest"), ref<java::security::MessageDigest>>(); }
inline void DigestInputStream::setMessageDigest(ref<java::security::MessageDigest> digest) { return call_method<SCAPIX_META_STRING("setMessageDigest"), void>(digest); }
inline jint DigestInputStream::read() { return call_method<SCAPIX_META_STRING("read"), jint>(); }
inline jint DigestInputStream::read(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("read"), jint>(b, off, len); }
inline void DigestInputStream::on(jboolean on) { return call_method<SCAPIX_META_STRING("on"), void>(on); }
inline ref<java::lang::String> DigestInputStream::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_DIGESTINPUTSTREAM_H
