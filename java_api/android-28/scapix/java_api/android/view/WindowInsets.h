// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_WINDOWINSETS_H
#define SCAPIX_ANDROID_VIEW_WINDOWINSETS_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::view { class DisplayCutout; }
namespace java::lang { class String; }

namespace android::view {

class WindowInsets : public object_base<SCAPIX_META_STRING("android/view/WindowInsets"),
	java::lang::Object>
{
public:

	static ref<WindowInsets> new_object(ref<android::view::WindowInsets> src);
	jint getSystemWindowInsetLeft();
	jint getSystemWindowInsetTop();
	jint getSystemWindowInsetRight();
	jint getSystemWindowInsetBottom();
	jboolean hasSystemWindowInsets();
	jboolean hasInsets();
	ref<android::view::DisplayCutout> getDisplayCutout();
	ref<android::view::WindowInsets> consumeDisplayCutout();
	jboolean isConsumed();
	jboolean isRound();
	ref<android::view::WindowInsets> consumeSystemWindowInsets();
	ref<android::view::WindowInsets> replaceSystemWindowInsets(jint left, jint top, jint right, jint bottom);
	ref<android::view::WindowInsets> replaceSystemWindowInsets(ref<android::graphics::Rect> systemWindowInsets);
	jint getStableInsetTop();
	jint getStableInsetLeft();
	jint getStableInsetRight();
	jint getStableInsetBottom();
	jboolean hasStableInsets();
	ref<android::view::WindowInsets> consumeStableInsets();
	ref<java::lang::String> toString();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();

protected:

	WindowInsets(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/view/DisplayCutout.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view {

inline ref<WindowInsets> WindowInsets::new_object(ref<android::view::WindowInsets> src) { return base_::new_object(src); }
inline jint WindowInsets::getSystemWindowInsetLeft() { return call_method<SCAPIX_META_STRING("getSystemWindowInsetLeft"), jint>(); }
inline jint WindowInsets::getSystemWindowInsetTop() { return call_method<SCAPIX_META_STRING("getSystemWindowInsetTop"), jint>(); }
inline jint WindowInsets::getSystemWindowInsetRight() { return call_method<SCAPIX_META_STRING("getSystemWindowInsetRight"), jint>(); }
inline jint WindowInsets::getSystemWindowInsetBottom() { return call_method<SCAPIX_META_STRING("getSystemWindowInsetBottom"), jint>(); }
inline jboolean WindowInsets::hasSystemWindowInsets() { return call_method<SCAPIX_META_STRING("hasSystemWindowInsets"), jboolean>(); }
inline jboolean WindowInsets::hasInsets() { return call_method<SCAPIX_META_STRING("hasInsets"), jboolean>(); }
inline ref<android::view::DisplayCutout> WindowInsets::getDisplayCutout() { return call_method<SCAPIX_META_STRING("getDisplayCutout"), ref<android::view::DisplayCutout>>(); }
inline ref<android::view::WindowInsets> WindowInsets::consumeDisplayCutout() { return call_method<SCAPIX_META_STRING("consumeDisplayCutout"), ref<android::view::WindowInsets>>(); }
inline jboolean WindowInsets::isConsumed() { return call_method<SCAPIX_META_STRING("isConsumed"), jboolean>(); }
inline jboolean WindowInsets::isRound() { return call_method<SCAPIX_META_STRING("isRound"), jboolean>(); }
inline ref<android::view::WindowInsets> WindowInsets::consumeSystemWindowInsets() { return call_method<SCAPIX_META_STRING("consumeSystemWindowInsets"), ref<android::view::WindowInsets>>(); }
inline ref<android::view::WindowInsets> WindowInsets::replaceSystemWindowInsets(jint left, jint top, jint right, jint bottom) { return call_method<SCAPIX_META_STRING("replaceSystemWindowInsets"), ref<android::view::WindowInsets>>(left, top, right, bottom); }
inline ref<android::view::WindowInsets> WindowInsets::replaceSystemWindowInsets(ref<android::graphics::Rect> systemWindowInsets) { return call_method<SCAPIX_META_STRING("replaceSystemWindowInsets"), ref<android::view::WindowInsets>>(systemWindowInsets); }
inline jint WindowInsets::getStableInsetTop() { return call_method<SCAPIX_META_STRING("getStableInsetTop"), jint>(); }
inline jint WindowInsets::getStableInsetLeft() { return call_method<SCAPIX_META_STRING("getStableInsetLeft"), jint>(); }
inline jint WindowInsets::getStableInsetRight() { return call_method<SCAPIX_META_STRING("getStableInsetRight"), jint>(); }
inline jint WindowInsets::getStableInsetBottom() { return call_method<SCAPIX_META_STRING("getStableInsetBottom"), jint>(); }
inline jboolean WindowInsets::hasStableInsets() { return call_method<SCAPIX_META_STRING("hasStableInsets"), jboolean>(); }
inline ref<android::view::WindowInsets> WindowInsets::consumeStableInsets() { return call_method<SCAPIX_META_STRING("consumeStableInsets"), ref<android::view::WindowInsets>>(); }
inline ref<java::lang::String> WindowInsets::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean WindowInsets::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint WindowInsets::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_WINDOWINSETS_H
