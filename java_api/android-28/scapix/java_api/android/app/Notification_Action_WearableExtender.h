// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/app/Notification_Action_Extender.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_WEARABLEEXTENDER_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_WEARABLEEXTENDER_H

namespace scapix::java_api {

namespace android::app { class Notification_Action; }
namespace android::app { class Notification_Action_Builder; }
namespace java::lang { class CharSequence; }

namespace android::app {

class Notification_Action_WearableExtender : public object_base<SCAPIX_META_STRING("android/app/Notification$Action$WearableExtender"),
	java::lang::Object,
	android::app::Notification_Action_Extender>
{
public:

	static ref<Notification_Action_WearableExtender> new_object();
	static ref<Notification_Action_WearableExtender> new_object(ref<android::app::Notification_Action> action);
	ref<android::app::Notification_Action_Builder> extend(ref<android::app::Notification_Action_Builder> builder);
	ref<android::app::Notification_Action_WearableExtender> clone();
	ref<android::app::Notification_Action_WearableExtender> setAvailableOffline(jboolean availableOffline);
	jboolean isAvailableOffline();
	ref<android::app::Notification_Action_WearableExtender> setInProgressLabel(ref<java::lang::CharSequence> label);
	ref<java::lang::CharSequence> getInProgressLabel();
	ref<android::app::Notification_Action_WearableExtender> setConfirmLabel(ref<java::lang::CharSequence> label);
	ref<java::lang::CharSequence> getConfirmLabel();
	ref<android::app::Notification_Action_WearableExtender> setCancelLabel(ref<java::lang::CharSequence> label);
	ref<java::lang::CharSequence> getCancelLabel();
	ref<android::app::Notification_Action_WearableExtender> setHintLaunchesActivity(jboolean hintLaunchesActivity);
	jboolean getHintLaunchesActivity();
	ref<android::app::Notification_Action_WearableExtender> setHintDisplayActionInline(jboolean hintDisplayInline);
	jboolean getHintDisplayActionInline();

protected:

	Notification_Action_WearableExtender(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Notification_Action.h>
#include <scapix/java_api/android/app/Notification_Action_Builder.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Notification_Action_WearableExtender> Notification_Action_WearableExtender::new_object() { return base_::new_object(); }
inline ref<Notification_Action_WearableExtender> Notification_Action_WearableExtender::new_object(ref<android::app::Notification_Action> action) { return base_::new_object(action); }
inline ref<android::app::Notification_Action_Builder> Notification_Action_WearableExtender::extend(ref<android::app::Notification_Action_Builder> builder) { return call_method<SCAPIX_META_STRING("extend"), ref<android::app::Notification_Action_Builder>>(builder); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<android::app::Notification_Action_WearableExtender>>(); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::setAvailableOffline(jboolean availableOffline) { return call_method<SCAPIX_META_STRING("setAvailableOffline"), ref<android::app::Notification_Action_WearableExtender>>(availableOffline); }
inline jboolean Notification_Action_WearableExtender::isAvailableOffline() { return call_method<SCAPIX_META_STRING("isAvailableOffline"), jboolean>(); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::setInProgressLabel(ref<java::lang::CharSequence> label) { return call_method<SCAPIX_META_STRING("setInProgressLabel"), ref<android::app::Notification_Action_WearableExtender>>(label); }
inline ref<java::lang::CharSequence> Notification_Action_WearableExtender::getInProgressLabel() { return call_method<SCAPIX_META_STRING("getInProgressLabel"), ref<java::lang::CharSequence>>(); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::setConfirmLabel(ref<java::lang::CharSequence> label) { return call_method<SCAPIX_META_STRING("setConfirmLabel"), ref<android::app::Notification_Action_WearableExtender>>(label); }
inline ref<java::lang::CharSequence> Notification_Action_WearableExtender::getConfirmLabel() { return call_method<SCAPIX_META_STRING("getConfirmLabel"), ref<java::lang::CharSequence>>(); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::setCancelLabel(ref<java::lang::CharSequence> label) { return call_method<SCAPIX_META_STRING("setCancelLabel"), ref<android::app::Notification_Action_WearableExtender>>(label); }
inline ref<java::lang::CharSequence> Notification_Action_WearableExtender::getCancelLabel() { return call_method<SCAPIX_META_STRING("getCancelLabel"), ref<java::lang::CharSequence>>(); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::setHintLaunchesActivity(jboolean hintLaunchesActivity) { return call_method<SCAPIX_META_STRING("setHintLaunchesActivity"), ref<android::app::Notification_Action_WearableExtender>>(hintLaunchesActivity); }
inline jboolean Notification_Action_WearableExtender::getHintLaunchesActivity() { return call_method<SCAPIX_META_STRING("getHintLaunchesActivity"), jboolean>(); }
inline ref<android::app::Notification_Action_WearableExtender> Notification_Action_WearableExtender::setHintDisplayActionInline(jboolean hintDisplayInline) { return call_method<SCAPIX_META_STRING("setHintDisplayActionInline"), ref<android::app::Notification_Action_WearableExtender>>(hintDisplayInline); }
inline jboolean Notification_Action_WearableExtender::getHintDisplayActionInline() { return call_method<SCAPIX_META_STRING("getHintDisplayActionInline"), jboolean>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_WEARABLEEXTENDER_H
