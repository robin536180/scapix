// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_MBMS_FILEINFO_H
#define SCAPIX_ANDROID_TELEPHONY_MBMS_FILEINFO_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::telephony::mbms {

class FileInfo : public object_base<SCAPIX_META_STRING("android/telephony/mbms/FileInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint describeContents();
	ref<android::net::Uri> getUri();
	ref<java::lang::String> getMimeType();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();

protected:

	FileInfo(handle_type h) : base_(h) {}

};

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telephony::mbms {

inline ref<android::os::Parcelable_Creator> FileInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline void FileInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint FileInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline ref<android::net::Uri> FileInfo::getUri() { return call_method<SCAPIX_META_STRING("getUri"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> FileInfo::getMimeType() { return call_method<SCAPIX_META_STRING("getMimeType"), ref<java::lang::String>>(); }
inline jboolean FileInfo::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint FileInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_MBMS_FILEINFO_H
