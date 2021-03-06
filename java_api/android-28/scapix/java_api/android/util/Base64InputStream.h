// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_ANDROID_UTIL_BASE64INPUTSTREAM_H
#define SCAPIX_ANDROID_UTIL_BASE64INPUTSTREAM_H

namespace scapix::java_api {

namespace java::io { class InputStream; }

namespace android::util {

class Base64InputStream : public object_base<SCAPIX_META_STRING("android/util/Base64InputStream"),
	java::io::FilterInputStream>
{
public:

	static ref<Base64InputStream> new_object(ref<java::io::InputStream> in, jint flags);
	jboolean markSupported();
	void mark(jint readlimit);
	void reset();
	void close();
	jint available();
	jlong skip(jlong n);
	jint read();
	jint read(ref<link::java::array<jbyte>> b, jint off, jint len);

protected:

	Base64InputStream(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>

namespace scapix::java_api {
namespace android::util {

inline ref<Base64InputStream> Base64InputStream::new_object(ref<java::io::InputStream> in, jint flags) { return base_::new_object(in, flags); }
inline jboolean Base64InputStream::markSupported() { return call_method<SCAPIX_META_STRING("markSupported"), jboolean>(); }
inline void Base64InputStream::mark(jint readlimit) { return call_method<SCAPIX_META_STRING("mark"), void>(readlimit); }
inline void Base64InputStream::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline void Base64InputStream::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline jint Base64InputStream::available() { return call_method<SCAPIX_META_STRING("available"), jint>(); }
inline jlong Base64InputStream::skip(jlong n) { return call_method<SCAPIX_META_STRING("skip"), jlong>(n); }
inline jint Base64InputStream::read() { return call_method<SCAPIX_META_STRING("read"), jint>(); }
inline jint Base64InputStream::read(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("read"), jint>(b, off, len); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_BASE64INPUTSTREAM_H
