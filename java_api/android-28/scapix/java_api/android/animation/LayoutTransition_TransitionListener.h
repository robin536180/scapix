// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER_H
#define SCAPIX_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER_H

namespace scapix::java_api {

namespace android::animation { class LayoutTransition; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }

namespace android::animation {

class LayoutTransition_TransitionListener : public object_base<SCAPIX_META_STRING("android/animation/LayoutTransition$TransitionListener"),
	java::lang::Object>
{
public:

	void startTransition(ref<android::animation::LayoutTransition> p1, ref<android::view::ViewGroup> p2, ref<android::view::View> p3, jint p4);
	void endTransition(ref<android::animation::LayoutTransition> p1, ref<android::view::ViewGroup> p2, ref<android::view::View> p3, jint p4);

protected:

	LayoutTransition_TransitionListener(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/LayoutTransition.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>

namespace scapix::java_api {
namespace android::animation {

inline void LayoutTransition_TransitionListener::startTransition(ref<android::animation::LayoutTransition> p1, ref<android::view::ViewGroup> p2, ref<android::view::View> p3, jint p4) { return call_method<SCAPIX_META_STRING("startTransition"), void>(p1, p2, p3, p4); }
inline void LayoutTransition_TransitionListener::endTransition(ref<android::animation::LayoutTransition> p1, ref<android::view::ViewGroup> p2, ref<android::view::View> p3, jint p4) { return call_method<SCAPIX_META_STRING("endTransition"), void>(p1, p2, p3, p4); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_LAYOUTTRANSITION_TRANSITIONLISTENER_H
