// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_INPUTQUEUE_CALLBACK_H
#define SCAPIX_ANDROID_VIEW_INPUTQUEUE_CALLBACK_H

namespace scapix::java_api {

namespace android::view { class InputQueue; }

namespace android::view {

class InputQueue_Callback : public object_base<SCAPIX_META_STRING("android/view/InputQueue$Callback"),
	java::lang::Object>
{
public:

	void onInputQueueCreated(ref<android::view::InputQueue> p1);
	void onInputQueueDestroyed(ref<android::view::InputQueue> p1);

protected:

	InputQueue_Callback(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/InputQueue.h>

namespace scapix::java_api {
namespace android::view {

inline void InputQueue_Callback::onInputQueueCreated(ref<android::view::InputQueue> p1) { return call_method<SCAPIX_META_STRING("onInputQueueCreated"), void>(p1); }
inline void InputQueue_Callback::onInputQueueDestroyed(ref<android::view::InputQueue> p1) { return call_method<SCAPIX_META_STRING("onInputQueueDestroyed"), void>(p1); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_INPUTQUEUE_CALLBACK_H
