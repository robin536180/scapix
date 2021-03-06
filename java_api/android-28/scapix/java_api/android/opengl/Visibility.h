// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OPENGL_VISIBILITY_H
#define SCAPIX_ANDROID_OPENGL_VISIBILITY_H

namespace scapix::java_api {
namespace android::opengl {

class Visibility : public object_base<SCAPIX_META_STRING("android/opengl/Visibility"),
	java::lang::Object>
{
public:

	static ref<Visibility> new_object();
	static jint visibilityTest(ref<link::java::array<jfloat>> p1, jint p2, ref<link::java::array<jfloat>> p3, jint p4, ref<link::java::array<jchar>> p5, jint p6, jint p7);
	static jint frustumCullSpheres(ref<link::java::array<jfloat>> p1, jint p2, ref<link::java::array<jfloat>> p3, jint p4, jint p5, ref<link::java::array<jint>> p6, jint p7, jint p8);
	static void computeBoundingSphere(ref<link::java::array<jfloat>> p1, jint p2, jint p3, ref<link::java::array<jfloat>> p4, jint p5);

protected:

	Visibility(handle_type h) : base_(h) {}

};

} // namespace android::opengl
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::opengl {

inline ref<Visibility> Visibility::new_object() { return base_::new_object(); }
inline jint Visibility::visibilityTest(ref<link::java::array<jfloat>> p1, jint p2, ref<link::java::array<jfloat>> p3, jint p4, ref<link::java::array<jchar>> p5, jint p6, jint p7) { return call_static_method<SCAPIX_META_STRING("visibilityTest"), jint>(p1, p2, p3, p4, p5, p6, p7); }
inline jint Visibility::frustumCullSpheres(ref<link::java::array<jfloat>> p1, jint p2, ref<link::java::array<jfloat>> p3, jint p4, jint p5, ref<link::java::array<jint>> p6, jint p7, jint p8) { return call_static_method<SCAPIX_META_STRING("frustumCullSpheres"), jint>(p1, p2, p3, p4, p5, p6, p7, p8); }
inline void Visibility::computeBoundingSphere(ref<link::java::array<jfloat>> p1, jint p2, jint p3, ref<link::java::array<jfloat>> p4, jint p5) { return call_static_method<SCAPIX_META_STRING("computeBoundingSphere"), void>(p1, p2, p3, p4, p5); }

} // namespace android::opengl
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OPENGL_VISIBILITY_H
