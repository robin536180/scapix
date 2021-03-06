// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_PERSON_H
#define SCAPIX_ANDROID_APP_PERSON_H

namespace scapix::java_api {

namespace android::app { class Person_Builder; }
namespace android::graphics::drawable { class Icon; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::app {

class Person : public object_base<SCAPIX_META_STRING("android/app/Person"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = Person_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<android::app::Person_Builder> toBuilder();
	ref<java::lang::String> getUri();
	ref<java::lang::CharSequence> getName();
	ref<android::graphics::drawable::Icon> getIcon();
	ref<java::lang::String> getKey();
	jboolean isBot();
	jboolean isImportant();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	Person(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Person_Builder.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<android::os::Parcelable_Creator> Person::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<android::app::Person_Builder> Person::toBuilder() { return call_method<SCAPIX_META_STRING("toBuilder"), ref<android::app::Person_Builder>>(); }
inline ref<java::lang::String> Person::getUri() { return call_method<SCAPIX_META_STRING("getUri"), ref<java::lang::String>>(); }
inline ref<java::lang::CharSequence> Person::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::CharSequence>>(); }
inline ref<android::graphics::drawable::Icon> Person::getIcon() { return call_method<SCAPIX_META_STRING("getIcon"), ref<android::graphics::drawable::Icon>>(); }
inline ref<java::lang::String> Person::getKey() { return call_method<SCAPIX_META_STRING("getKey"), ref<java::lang::String>>(); }
inline jboolean Person::isBot() { return call_method<SCAPIX_META_STRING("isBot"), jboolean>(); }
inline jboolean Person::isImportant() { return call_method<SCAPIX_META_STRING("isImportant"), jboolean>(); }
inline jint Person::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Person::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_PERSON_H
