// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_TOUCHDELEGATE_H
#define SCAPIX_ANDROID_VIEW_TOUCHDELEGATE_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::view { class MotionEvent; }
namespace android::view { class View; }

namespace android::view {

class TouchDelegate : public object_base<SCAPIX_META_STRING("android/view/TouchDelegate"),
	java::lang::Object>
{
public:

	static jint ABOVE_();
	static jint BELOW_();
	static jint TO_LEFT_();
	static jint TO_RIGHT_();

	static ref<TouchDelegate> new_object(ref<android::graphics::Rect> bounds, ref<android::view::View> delegateView);
	jboolean onTouchEvent(ref<android::view::MotionEvent> event);

protected:

	TouchDelegate(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::view {

inline jint TouchDelegate::ABOVE_() { return get_static_field<SCAPIX_META_STRING("ABOVE"), jint>(); }
inline jint TouchDelegate::BELOW_() { return get_static_field<SCAPIX_META_STRING("BELOW"), jint>(); }
inline jint TouchDelegate::TO_LEFT_() { return get_static_field<SCAPIX_META_STRING("TO_LEFT"), jint>(); }
inline jint TouchDelegate::TO_RIGHT_() { return get_static_field<SCAPIX_META_STRING("TO_RIGHT"), jint>(); }
inline ref<TouchDelegate> TouchDelegate::new_object(ref<android::graphics::Rect> bounds, ref<android::view::View> delegateView) { return base_::new_object(bounds, delegateView); }
inline jboolean TouchDelegate::onTouchEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onTouchEvent"), jboolean>(event); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TOUCHDELEGATE_H
