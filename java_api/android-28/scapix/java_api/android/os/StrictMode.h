// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_STRICTMODE_H
#define SCAPIX_ANDROID_OS_STRICTMODE_H

namespace scapix::java_api {

namespace android::os { class StrictMode_ThreadPolicy; }
namespace android::os { class StrictMode_VmPolicy; }
namespace java::lang { class String; }
namespace android::os { class StrictMode_OnVmViolationListener; }
namespace android::os { class StrictMode_OnThreadViolationListener; }

namespace android::os {

class StrictMode : public object_base<SCAPIX_META_STRING("android/os/StrictMode"),
	java::lang::Object>
{
public:

	using VmPolicy = StrictMode_VmPolicy;
	using ThreadPolicy = StrictMode_ThreadPolicy;
	using OnVmViolationListener = StrictMode_OnVmViolationListener;
	using OnThreadViolationListener = StrictMode_OnThreadViolationListener;

	static void setThreadPolicy(ref<android::os::StrictMode_ThreadPolicy> policy);
	static ref<android::os::StrictMode_ThreadPolicy> getThreadPolicy();
	static ref<android::os::StrictMode_ThreadPolicy> allowThreadDiskWrites();
	static ref<android::os::StrictMode_ThreadPolicy> allowThreadDiskReads();
	static void setVmPolicy(ref<android::os::StrictMode_VmPolicy> policy);
	static ref<android::os::StrictMode_VmPolicy> getVmPolicy();
	static void enableDefaults();
	static void noteSlowCall(ref<java::lang::String> name);

protected:

	StrictMode(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/StrictMode_ThreadPolicy.h>
#include <scapix/java_api/android/os/StrictMode_VmPolicy.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline void StrictMode::setThreadPolicy(ref<android::os::StrictMode_ThreadPolicy> policy) { return call_static_method<SCAPIX_META_STRING("setThreadPolicy"), void>(policy); }
inline ref<android::os::StrictMode_ThreadPolicy> StrictMode::getThreadPolicy() { return call_static_method<SCAPIX_META_STRING("getThreadPolicy"), ref<android::os::StrictMode_ThreadPolicy>>(); }
inline ref<android::os::StrictMode_ThreadPolicy> StrictMode::allowThreadDiskWrites() { return call_static_method<SCAPIX_META_STRING("allowThreadDiskWrites"), ref<android::os::StrictMode_ThreadPolicy>>(); }
inline ref<android::os::StrictMode_ThreadPolicy> StrictMode::allowThreadDiskReads() { return call_static_method<SCAPIX_META_STRING("allowThreadDiskReads"), ref<android::os::StrictMode_ThreadPolicy>>(); }
inline void StrictMode::setVmPolicy(ref<android::os::StrictMode_VmPolicy> policy) { return call_static_method<SCAPIX_META_STRING("setVmPolicy"), void>(policy); }
inline ref<android::os::StrictMode_VmPolicy> StrictMode::getVmPolicy() { return call_static_method<SCAPIX_META_STRING("getVmPolicy"), ref<android::os::StrictMode_VmPolicy>>(); }
inline void StrictMode::enableDefaults() { return call_static_method<SCAPIX_META_STRING("enableDefaults"), void>(); }
inline void StrictMode::noteSlowCall(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("noteSlowCall"), void>(name); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_STRICTMODE_H
