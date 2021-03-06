// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION_H
#define SCAPIX_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::media {

class MediaDrm_MediaDrmStateException : public object_base<SCAPIX_META_STRING("android/media/MediaDrm$MediaDrmStateException"),
	java::lang::IllegalStateException>
{
public:

	ref<java::lang::String> getDiagnosticInfo();

protected:

	MediaDrm_MediaDrmStateException(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline ref<java::lang::String> MediaDrm_MediaDrmStateException::getDiagnosticInfo() { return call_method<SCAPIX_META_STRING("getDiagnosticInfo"), ref<java::lang::String>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION_H
