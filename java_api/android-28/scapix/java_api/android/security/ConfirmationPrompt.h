// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SECURITY_CONFIRMATIONPROMPT_H
#define SCAPIX_ANDROID_SECURITY_CONFIRMATIONPROMPT_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::security { class ConfirmationCallback; }
namespace java::util::concurrent { class Executor; }
namespace android::security { class ConfirmationPrompt_Builder; }

namespace android::security {

class ConfirmationPrompt : public object_base<SCAPIX_META_STRING("android/security/ConfirmationPrompt"),
	java::lang::Object>
{
public:

	using Builder = ConfirmationPrompt_Builder;

	void presentPrompt(ref<java::util::concurrent::Executor> executor, ref<android::security::ConfirmationCallback> callback);
	void cancelPrompt();
	static jboolean isSupported(ref<android::content::Context> context);

protected:

	ConfirmationPrompt(handle_type h) : base_(h) {}

};

} // namespace android::security
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/security/ConfirmationCallback.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

namespace scapix::java_api {
namespace android::security {

inline void ConfirmationPrompt::presentPrompt(ref<java::util::concurrent::Executor> executor, ref<android::security::ConfirmationCallback> callback) { return call_method<SCAPIX_META_STRING("presentPrompt"), void>(executor, callback); }
inline void ConfirmationPrompt::cancelPrompt() { return call_method<SCAPIX_META_STRING("cancelPrompt"), void>(); }
inline jboolean ConfirmationPrompt::isSupported(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("isSupported"), jboolean>(context); }

} // namespace android::security
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SECURITY_CONFIRMATIONPROMPT_H
