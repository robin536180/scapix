// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HEADER_H
#define SCAPIX_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HEADER_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::content::res { class Resources; }
namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::preference {

class PreferenceActivity_Header : public object_base<SCAPIX_META_STRING("android/preference/PreferenceActivity$Header"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	ref<java::lang::CharSequence> breadCrumbShortTitle();
	void breadCrumbShortTitle(ref<java::lang::CharSequence>);
	jint breadCrumbShortTitleRes();
	void breadCrumbShortTitleRes(jint);
	ref<java::lang::CharSequence> breadCrumbTitle();
	void breadCrumbTitle(ref<java::lang::CharSequence>);
	jint breadCrumbTitleRes();
	void breadCrumbTitleRes(jint);
	ref<android::os::Bundle> extras();
	void extras(ref<android::os::Bundle>);
	ref<java::lang::String> fragment();
	void fragment(ref<java::lang::String>);
	ref<android::os::Bundle> fragmentArguments();
	void fragmentArguments(ref<android::os::Bundle>);
	jint iconRes();
	void iconRes(jint);
	jlong id();
	void id(jlong);
	ref<android::content::Intent> intent();
	void intent(ref<android::content::Intent>);
	ref<java::lang::CharSequence> summary();
	void summary(ref<java::lang::CharSequence>);
	jint summaryRes();
	void summaryRes(jint);
	ref<java::lang::CharSequence> title();
	void title(ref<java::lang::CharSequence>);
	jint titleRes();
	void titleRes(jint);

	static ref<PreferenceActivity_Header> new_object();
	ref<java::lang::CharSequence> getTitle(ref<android::content::res::Resources> res);
	ref<java::lang::CharSequence> getSummary(ref<android::content::res::Resources> res);
	ref<java::lang::CharSequence> getBreadCrumbTitle(ref<android::content::res::Resources> res);
	ref<java::lang::CharSequence> getBreadCrumbShortTitle(ref<android::content::res::Resources> res);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	void readFromParcel(ref<android::os::Parcel> in);

protected:

	PreferenceActivity_Header(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::preference {

inline ref<android::os::Parcelable_Creator> PreferenceActivity_Header::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::breadCrumbShortTitle() { return get_field<SCAPIX_META_STRING("breadCrumbShortTitle"), ref<java::lang::CharSequence>>(); }
inline void PreferenceActivity_Header::breadCrumbShortTitle(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("breadCrumbShortTitle"), ref<java::lang::CharSequence>>(v); }
inline jint PreferenceActivity_Header::breadCrumbShortTitleRes() { return get_field<SCAPIX_META_STRING("breadCrumbShortTitleRes"), jint>(); }
inline void PreferenceActivity_Header::breadCrumbShortTitleRes(jint v) { set_field<SCAPIX_META_STRING("breadCrumbShortTitleRes"), jint>(v); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::breadCrumbTitle() { return get_field<SCAPIX_META_STRING("breadCrumbTitle"), ref<java::lang::CharSequence>>(); }
inline void PreferenceActivity_Header::breadCrumbTitle(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("breadCrumbTitle"), ref<java::lang::CharSequence>>(v); }
inline jint PreferenceActivity_Header::breadCrumbTitleRes() { return get_field<SCAPIX_META_STRING("breadCrumbTitleRes"), jint>(); }
inline void PreferenceActivity_Header::breadCrumbTitleRes(jint v) { set_field<SCAPIX_META_STRING("breadCrumbTitleRes"), jint>(v); }
inline ref<android::os::Bundle> PreferenceActivity_Header::extras() { return get_field<SCAPIX_META_STRING("extras"), ref<android::os::Bundle>>(); }
inline void PreferenceActivity_Header::extras(ref<android::os::Bundle> v) { set_field<SCAPIX_META_STRING("extras"), ref<android::os::Bundle>>(v); }
inline ref<java::lang::String> PreferenceActivity_Header::fragment() { return get_field<SCAPIX_META_STRING("fragment"), ref<java::lang::String>>(); }
inline void PreferenceActivity_Header::fragment(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("fragment"), ref<java::lang::String>>(v); }
inline ref<android::os::Bundle> PreferenceActivity_Header::fragmentArguments() { return get_field<SCAPIX_META_STRING("fragmentArguments"), ref<android::os::Bundle>>(); }
inline void PreferenceActivity_Header::fragmentArguments(ref<android::os::Bundle> v) { set_field<SCAPIX_META_STRING("fragmentArguments"), ref<android::os::Bundle>>(v); }
inline jint PreferenceActivity_Header::iconRes() { return get_field<SCAPIX_META_STRING("iconRes"), jint>(); }
inline void PreferenceActivity_Header::iconRes(jint v) { set_field<SCAPIX_META_STRING("iconRes"), jint>(v); }
inline jlong PreferenceActivity_Header::id() { return get_field<SCAPIX_META_STRING("id"), jlong>(); }
inline void PreferenceActivity_Header::id(jlong v) { set_field<SCAPIX_META_STRING("id"), jlong>(v); }
inline ref<android::content::Intent> PreferenceActivity_Header::intent() { return get_field<SCAPIX_META_STRING("intent"), ref<android::content::Intent>>(); }
inline void PreferenceActivity_Header::intent(ref<android::content::Intent> v) { set_field<SCAPIX_META_STRING("intent"), ref<android::content::Intent>>(v); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::summary() { return get_field<SCAPIX_META_STRING("summary"), ref<java::lang::CharSequence>>(); }
inline void PreferenceActivity_Header::summary(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("summary"), ref<java::lang::CharSequence>>(v); }
inline jint PreferenceActivity_Header::summaryRes() { return get_field<SCAPIX_META_STRING("summaryRes"), jint>(); }
inline void PreferenceActivity_Header::summaryRes(jint v) { set_field<SCAPIX_META_STRING("summaryRes"), jint>(v); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::title() { return get_field<SCAPIX_META_STRING("title"), ref<java::lang::CharSequence>>(); }
inline void PreferenceActivity_Header::title(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("title"), ref<java::lang::CharSequence>>(v); }
inline jint PreferenceActivity_Header::titleRes() { return get_field<SCAPIX_META_STRING("titleRes"), jint>(); }
inline void PreferenceActivity_Header::titleRes(jint v) { set_field<SCAPIX_META_STRING("titleRes"), jint>(v); }
inline ref<PreferenceActivity_Header> PreferenceActivity_Header::new_object() { return base_::new_object(); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::getTitle(ref<android::content::res::Resources> res) { return call_method<SCAPIX_META_STRING("getTitle"), ref<java::lang::CharSequence>>(res); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::getSummary(ref<android::content::res::Resources> res) { return call_method<SCAPIX_META_STRING("getSummary"), ref<java::lang::CharSequence>>(res); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::getBreadCrumbTitle(ref<android::content::res::Resources> res) { return call_method<SCAPIX_META_STRING("getBreadCrumbTitle"), ref<java::lang::CharSequence>>(res); }
inline ref<java::lang::CharSequence> PreferenceActivity_Header::getBreadCrumbShortTitle(ref<android::content::res::Resources> res) { return call_method<SCAPIX_META_STRING("getBreadCrumbShortTitle"), ref<java::lang::CharSequence>>(res); }
inline jint PreferenceActivity_Header::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void PreferenceActivity_Header::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline void PreferenceActivity_Header::readFromParcel(ref<android::os::Parcel> in) { return call_method<SCAPIX_META_STRING("readFromParcel"), void>(in); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_PREFERENCEACTIVITY_HEADER_H
