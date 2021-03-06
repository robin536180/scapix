// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_MEASURE_H
#define SCAPIX_ANDROID_ICU_UTIL_MEASURE_H

namespace scapix::java_api {

namespace android::icu::util { class MeasureUnit; }
namespace java::lang { class Number; }
namespace java::lang { class String; }

namespace android::icu::util {

class Measure : public object_base<SCAPIX_META_STRING("android/icu/util/Measure"),
	java::lang::Object>
{
public:

	static ref<Measure> new_object(ref<java::lang::Number> number, ref<android::icu::util::MeasureUnit> unit);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::lang::Number> getNumber();
	ref<android::icu::util::MeasureUnit> getUnit();

protected:

	Measure(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/util/MeasureUnit.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::util {

inline ref<Measure> Measure::new_object(ref<java::lang::Number> number, ref<android::icu::util::MeasureUnit> unit) { return base_::new_object(number, unit); }
inline jboolean Measure::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint Measure::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Measure::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::Number> Measure::getNumber() { return call_method<SCAPIX_META_STRING("getNumber"), ref<java::lang::Number>>(); }
inline ref<android::icu::util::MeasureUnit> Measure::getUnit() { return call_method<SCAPIX_META_STRING("getUnit"), ref<android::icu::util::MeasureUnit>>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_MEASURE_H
