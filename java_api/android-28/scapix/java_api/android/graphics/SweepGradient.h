// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/Shader.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_SWEEPGRADIENT_H
#define SCAPIX_ANDROID_GRAPHICS_SWEEPGRADIENT_H

namespace scapix::java_api {
namespace android::graphics {

class SweepGradient : public object_base<SCAPIX_META_STRING("android/graphics/SweepGradient"),
	android::graphics::Shader>
{
public:

	static ref<SweepGradient> new_object(jfloat cx, jfloat cy, ref<link::java::array<jint>> colors, ref<link::java::array<jfloat>> positions);
	static ref<SweepGradient> new_object(jfloat cx, jfloat cy, jint color0, jint color1);

protected:

	SweepGradient(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::graphics {

inline ref<SweepGradient> SweepGradient::new_object(jfloat cx, jfloat cy, ref<link::java::array<jint>> colors, ref<link::java::array<jfloat>> positions) { return base_::new_object(cx, cy, colors, positions); }
inline ref<SweepGradient> SweepGradient::new_object(jfloat cx, jfloat cy, jint color0, jint color1) { return base_::new_object(cx, cy, color0, color1); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_SWEEPGRADIENT_H
