// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_H
#define SCAPIX_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util {

class IllegalFormatPrecisionException : public object_base<SCAPIX_META_STRING("java/util/IllegalFormatPrecisionException"),
	java::util::IllegalFormatException>
{
public:

	static ref<IllegalFormatPrecisionException> new_object(jint p);
	jint getPrecision();
	ref<java::lang::String> getMessage();

protected:

	IllegalFormatPrecisionException(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util {

inline ref<IllegalFormatPrecisionException> IllegalFormatPrecisionException::new_object(jint p) { return base_::new_object(p); }
inline jint IllegalFormatPrecisionException::getPrecision() { return call_method<SCAPIX_META_STRING("getPrecision"), jint>(); }
inline ref<java::lang::String> IllegalFormatPrecisionException::getMessage() { return call_method<SCAPIX_META_STRING("getMessage"), ref<java::lang::String>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_H
