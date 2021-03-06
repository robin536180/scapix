// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_GSM_SMSMANAGER_H
#define SCAPIX_ANDROID_TELEPHONY_GSM_SMSMANAGER_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace java::lang { class String; }
namespace java::util { class ArrayList; }

namespace android::telephony::gsm {

class SmsManager : public object_base<SCAPIX_META_STRING("android/telephony/gsm/SmsManager"),
	java::lang::Object>
{
public:

	static jint RESULT_ERROR_GENERIC_FAILURE_();
	static jint RESULT_ERROR_NO_SERVICE_();
	static jint RESULT_ERROR_NULL_PDU_();
	static jint RESULT_ERROR_RADIO_OFF_();
	static jint STATUS_ON_SIM_FREE_();
	static jint STATUS_ON_SIM_READ_();
	static jint STATUS_ON_SIM_SENT_();
	static jint STATUS_ON_SIM_UNREAD_();
	static jint STATUS_ON_SIM_UNSENT_();

	static ref<android::telephony::gsm::SmsManager> getDefault();
	void sendTextMessage(ref<java::lang::String> destinationAddress, ref<java::lang::String> scAddress, ref<java::lang::String> text, ref<android::app::PendingIntent> sentIntent, ref<android::app::PendingIntent> deliveryIntent);
	ref<java::util::ArrayList> divideMessage(ref<java::lang::String> text);
	void sendMultipartTextMessage(ref<java::lang::String> destinationAddress, ref<java::lang::String> scAddress, ref<java::util::ArrayList> parts, ref<java::util::ArrayList> sentIntents, ref<java::util::ArrayList> deliveryIntents);
	void sendDataMessage(ref<java::lang::String> destinationAddress, ref<java::lang::String> scAddress, jshort destinationPort, ref<link::java::array<jbyte>> data, ref<android::app::PendingIntent> sentIntent, ref<android::app::PendingIntent> deliveryIntent);

protected:

	SmsManager(handle_type h) : base_(h) {}

};

} // namespace android::telephony::gsm
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>

namespace scapix::java_api {
namespace android::telephony::gsm {

inline jint SmsManager::RESULT_ERROR_GENERIC_FAILURE_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_GENERIC_FAILURE"), jint>(); }
inline jint SmsManager::RESULT_ERROR_NO_SERVICE_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_NO_SERVICE"), jint>(); }
inline jint SmsManager::RESULT_ERROR_NULL_PDU_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_NULL_PDU"), jint>(); }
inline jint SmsManager::RESULT_ERROR_RADIO_OFF_() { return get_static_field<SCAPIX_META_STRING("RESULT_ERROR_RADIO_OFF"), jint>(); }
inline jint SmsManager::STATUS_ON_SIM_FREE_() { return get_static_field<SCAPIX_META_STRING("STATUS_ON_SIM_FREE"), jint>(); }
inline jint SmsManager::STATUS_ON_SIM_READ_() { return get_static_field<SCAPIX_META_STRING("STATUS_ON_SIM_READ"), jint>(); }
inline jint SmsManager::STATUS_ON_SIM_SENT_() { return get_static_field<SCAPIX_META_STRING("STATUS_ON_SIM_SENT"), jint>(); }
inline jint SmsManager::STATUS_ON_SIM_UNREAD_() { return get_static_field<SCAPIX_META_STRING("STATUS_ON_SIM_UNREAD"), jint>(); }
inline jint SmsManager::STATUS_ON_SIM_UNSENT_() { return get_static_field<SCAPIX_META_STRING("STATUS_ON_SIM_UNSENT"), jint>(); }
inline ref<android::telephony::gsm::SmsManager> SmsManager::getDefault() { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<android::telephony::gsm::SmsManager>>(); }
inline void SmsManager::sendTextMessage(ref<java::lang::String> destinationAddress, ref<java::lang::String> scAddress, ref<java::lang::String> text, ref<android::app::PendingIntent> sentIntent, ref<android::app::PendingIntent> deliveryIntent) { return call_method<SCAPIX_META_STRING("sendTextMessage"), void>(destinationAddress, scAddress, text, sentIntent, deliveryIntent); }
inline ref<java::util::ArrayList> SmsManager::divideMessage(ref<java::lang::String> text) { return call_method<SCAPIX_META_STRING("divideMessage"), ref<java::util::ArrayList>>(text); }
inline void SmsManager::sendMultipartTextMessage(ref<java::lang::String> destinationAddress, ref<java::lang::String> scAddress, ref<java::util::ArrayList> parts, ref<java::util::ArrayList> sentIntents, ref<java::util::ArrayList> deliveryIntents) { return call_method<SCAPIX_META_STRING("sendMultipartTextMessage"), void>(destinationAddress, scAddress, parts, sentIntents, deliveryIntents); }
inline void SmsManager::sendDataMessage(ref<java::lang::String> destinationAddress, ref<java::lang::String> scAddress, jshort destinationPort, ref<link::java::array<jbyte>> data, ref<android::app::PendingIntent> sentIntent, ref<android::app::PendingIntent> deliveryIntent) { return call_method<SCAPIX_META_STRING("sendDataMessage"), void>(destinationAddress, scAddress, destinationPort, data, sentIntent, deliveryIntent); }

} // namespace android::telephony::gsm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_GSM_SMSMANAGER_H
