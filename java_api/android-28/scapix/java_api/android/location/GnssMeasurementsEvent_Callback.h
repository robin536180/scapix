// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK_H
#define SCAPIX_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK_H

namespace scapix::java_api {

namespace android::location { class GnssMeasurementsEvent; }

namespace android::location {

class GnssMeasurementsEvent_Callback : public object_base<SCAPIX_META_STRING("android/location/GnssMeasurementsEvent$Callback"),
	java::lang::Object>
{
public:

	static jint STATUS_LOCATION_DISABLED_();
	static jint STATUS_NOT_ALLOWED_();
	static jint STATUS_NOT_SUPPORTED_();
	static jint STATUS_READY_();

	static ref<GnssMeasurementsEvent_Callback> new_object();
	void onGnssMeasurementsReceived(ref<android::location::GnssMeasurementsEvent> eventArgs);
	void onStatusChanged(jint status);

protected:

	GnssMeasurementsEvent_Callback(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api

#include <scapix/java_api/android/location/GnssMeasurementsEvent.h>

namespace scapix::java_api {
namespace android::location {

inline jint GnssMeasurementsEvent_Callback::STATUS_LOCATION_DISABLED_() { return get_static_field<SCAPIX_META_STRING("STATUS_LOCATION_DISABLED"), jint>(); }
inline jint GnssMeasurementsEvent_Callback::STATUS_NOT_ALLOWED_() { return get_static_field<SCAPIX_META_STRING("STATUS_NOT_ALLOWED"), jint>(); }
inline jint GnssMeasurementsEvent_Callback::STATUS_NOT_SUPPORTED_() { return get_static_field<SCAPIX_META_STRING("STATUS_NOT_SUPPORTED"), jint>(); }
inline jint GnssMeasurementsEvent_Callback::STATUS_READY_() { return get_static_field<SCAPIX_META_STRING("STATUS_READY"), jint>(); }
inline ref<GnssMeasurementsEvent_Callback> GnssMeasurementsEvent_Callback::new_object() { return base_::new_object(); }
inline void GnssMeasurementsEvent_Callback::onGnssMeasurementsReceived(ref<android::location::GnssMeasurementsEvent> eventArgs) { return call_method<SCAPIX_META_STRING("onGnssMeasurementsReceived"), void>(eventArgs); }
inline void GnssMeasurementsEvent_Callback::onStatusChanged(jint status) { return call_method<SCAPIX_META_STRING("onStatusChanged"), void>(status); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_GNSSMEASUREMENTSEVENT_CALLBACK_H
