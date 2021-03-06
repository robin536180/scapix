// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION_H
#define SCAPIX_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION_H

namespace scapix::java_api {


namespace android::os {

class ParcelFileDescriptor_FileDescriptorDetachedException : public object_base<SCAPIX_META_STRING("android/os/ParcelFileDescriptor$FileDescriptorDetachedException"),
	java::io::IOException>
{
public:

	static ref<ParcelFileDescriptor_FileDescriptorDetachedException> new_object();

protected:

	ParcelFileDescriptor_FileDescriptorDetachedException(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::os {

inline ref<ParcelFileDescriptor_FileDescriptorDetachedException> ParcelFileDescriptor_FileDescriptorDetachedException::new_object() { return base_::new_object(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_PARCELFILEDESCRIPTOR_FILEDESCRIPTORDETACHEDEXCEPTION_H
