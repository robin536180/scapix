// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/Telephony_BaseMmsColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_TELEPHONY_MMS_OUTBOX_H
#define SCAPIX_ANDROID_PROVIDER_TELEPHONY_MMS_OUTBOX_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class Telephony_Mms_Outbox : public object_base<SCAPIX_META_STRING("android/provider/Telephony$Mms$Outbox"),
	java::lang::Object,
	android::provider::Telephony_BaseMmsColumns>
{
public:

	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DEFAULT_SORT_ORDER_();


protected:

	Telephony_Mms_Outbox(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> Telephony_Mms_Outbox::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> Telephony_Mms_Outbox::DEFAULT_SORT_ORDER_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_SORT_ORDER"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_TELEPHONY_MMS_OUTBOX_H
