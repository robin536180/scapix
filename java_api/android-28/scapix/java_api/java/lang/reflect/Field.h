// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/reflect/AccessibleObject.h>
#include <scapix/java_api/java/lang/reflect/Member.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_FIELD_H
#define SCAPIX_JAVA_LANG_REFLECT_FIELD_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang::annotation { class Annotation; }
namespace java::lang::reflect { class Type; }

namespace java::lang::reflect {

class Field : public object_base<SCAPIX_META_STRING("java/lang/reflect/Field"),
	java::lang::reflect::AccessibleObject,
	java::lang::reflect::Member>
{
public:

	ref<java::lang::Class> getDeclaringClass();
	ref<java::lang::String> getName();
	jint getModifiers();
	jboolean isEnumConstant();
	jboolean isSynthetic();
	ref<java::lang::Class> getType();
	ref<java::lang::reflect::Type> getGenericType();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::lang::String> toGenericString();
	ref<java::lang::Object> get(ref<java::lang::Object> p1);
	jboolean getBoolean(ref<java::lang::Object> p1);
	jbyte getByte(ref<java::lang::Object> p1);
	jchar getChar(ref<java::lang::Object> p1);
	jshort getShort(ref<java::lang::Object> p1);
	jint getInt(ref<java::lang::Object> p1);
	jlong getLong(ref<java::lang::Object> p1);
	jfloat getFloat(ref<java::lang::Object> p1);
	jdouble getDouble(ref<java::lang::Object> p1);
	void set(ref<java::lang::Object> p1, ref<java::lang::Object> p2);
	void setBoolean(ref<java::lang::Object> p1, jboolean p2);
	void setByte(ref<java::lang::Object> p1, jbyte p2);
	void setChar(ref<java::lang::Object> p1, jchar p2);
	void setShort(ref<java::lang::Object> p1, jshort p2);
	void setInt(ref<java::lang::Object> p1, jint p2);
	void setLong(ref<java::lang::Object> p1, jlong p2);
	void setFloat(ref<java::lang::Object> p1, jfloat p2);
	void setDouble(ref<java::lang::Object> p1, jdouble p2);
	ref<java::lang::annotation::Annotation> getAnnotation(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getAnnotationsByType(ref<java::lang::Class> annotationClass);
	jboolean isAnnotationPresent(ref<java::lang::Class> annotationType);
	ref<link::java::array<java::lang::annotation::Annotation>> getDeclaredAnnotations();

protected:

	Field(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/reflect/Type.h>

namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<java::lang::Class> Field::getDeclaringClass() { return call_method<SCAPIX_META_STRING("getDeclaringClass"), ref<java::lang::Class>>(); }
inline ref<java::lang::String> Field::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline jint Field::getModifiers() { return call_method<SCAPIX_META_STRING("getModifiers"), jint>(); }
inline jboolean Field::isEnumConstant() { return call_method<SCAPIX_META_STRING("isEnumConstant"), jboolean>(); }
inline jboolean Field::isSynthetic() { return call_method<SCAPIX_META_STRING("isSynthetic"), jboolean>(); }
inline ref<java::lang::Class> Field::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::Class>>(); }
inline ref<java::lang::reflect::Type> Field::getGenericType() { return call_method<SCAPIX_META_STRING("getGenericType"), ref<java::lang::reflect::Type>>(); }
inline jboolean Field::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint Field::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Field::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Field::toGenericString() { return call_method<SCAPIX_META_STRING("toGenericString"), ref<java::lang::String>>(); }
inline ref<java::lang::Object> Field::get(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(p1); }
inline jboolean Field::getBoolean(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getBoolean"), jboolean>(p1); }
inline jbyte Field::getByte(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getByte"), jbyte>(p1); }
inline jchar Field::getChar(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getChar"), jchar>(p1); }
inline jshort Field::getShort(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getShort"), jshort>(p1); }
inline jint Field::getInt(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getInt"), jint>(p1); }
inline jlong Field::getLong(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(p1); }
inline jfloat Field::getFloat(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getFloat"), jfloat>(p1); }
inline jdouble Field::getDouble(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("getDouble"), jdouble>(p1); }
inline void Field::set(ref<java::lang::Object> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("set"), void>(p1, p2); }
inline void Field::setBoolean(ref<java::lang::Object> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setBoolean"), void>(p1, p2); }
inline void Field::setByte(ref<java::lang::Object> p1, jbyte p2) { return call_method<SCAPIX_META_STRING("setByte"), void>(p1, p2); }
inline void Field::setChar(ref<java::lang::Object> p1, jchar p2) { return call_method<SCAPIX_META_STRING("setChar"), void>(p1, p2); }
inline void Field::setShort(ref<java::lang::Object> p1, jshort p2) { return call_method<SCAPIX_META_STRING("setShort"), void>(p1, p2); }
inline void Field::setInt(ref<java::lang::Object> p1, jint p2) { return call_method<SCAPIX_META_STRING("setInt"), void>(p1, p2); }
inline void Field::setLong(ref<java::lang::Object> p1, jlong p2) { return call_method<SCAPIX_META_STRING("setLong"), void>(p1, p2); }
inline void Field::setFloat(ref<java::lang::Object> p1, jfloat p2) { return call_method<SCAPIX_META_STRING("setFloat"), void>(p1, p2); }
inline void Field::setDouble(ref<java::lang::Object> p1, jdouble p2) { return call_method<SCAPIX_META_STRING("setDouble"), void>(p1, p2); }
inline ref<java::lang::annotation::Annotation> Field::getAnnotation(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getAnnotation"), ref<java::lang::annotation::Annotation>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> Field::getAnnotationsByType(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getAnnotationsByType"), ref<link::java::array<java::lang::annotation::Annotation>>>(annotationClass); }
inline jboolean Field::isAnnotationPresent(ref<java::lang::Class> annotationType) { return call_method<SCAPIX_META_STRING("isAnnotationPresent"), jboolean>(annotationType); }
inline ref<link::java::array<java::lang::annotation::Annotation>> Field::getDeclaredAnnotations() { return call_method<SCAPIX_META_STRING("getDeclaredAnnotations"), ref<link::java::array<java::lang::annotation::Annotation>>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_FIELD_H
