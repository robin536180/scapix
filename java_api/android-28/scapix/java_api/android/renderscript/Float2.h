// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_FLOAT2_H
#define SCAPIX_ANDROID_RENDERSCRIPT_FLOAT2_H

namespace scapix::java_api {
namespace android::renderscript {

class Float2 : public object_base<SCAPIX_META_STRING("android/renderscript/Float2"),
	java::lang::Object>
{
public:

	jfloat x();
	void x(jfloat);
	jfloat y();
	void y(jfloat);

	static ref<Float2> new_object();
	static ref<Float2> new_object(jfloat x, jfloat y);

protected:

	Float2(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::renderscript {

inline jfloat Float2::x() { return get_field<SCAPIX_META_STRING("x"), jfloat>(); }
inline void Float2::x(jfloat v) { set_field<SCAPIX_META_STRING("x"), jfloat>(v); }
inline jfloat Float2::y() { return get_field<SCAPIX_META_STRING("y"), jfloat>(); }
inline void Float2::y(jfloat v) { set_field<SCAPIX_META_STRING("y"), jfloat>(v); }
inline ref<Float2> Float2::new_object() { return base_::new_object(); }
inline ref<Float2> Float2::new_object(jfloat x, jfloat y) { return base_::new_object(x, y); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_FLOAT2_H
