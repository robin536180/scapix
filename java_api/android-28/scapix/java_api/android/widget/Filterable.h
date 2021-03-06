// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_FILTERABLE_H
#define SCAPIX_ANDROID_WIDGET_FILTERABLE_H

namespace scapix::java_api {

namespace android::widget { class Filter; }

namespace android::widget {

class Filterable : public object_base<SCAPIX_META_STRING("android/widget/Filterable"),
	java::lang::Object>
{
public:

	ref<android::widget::Filter> getFilter();

protected:

	Filterable(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/widget/Filter.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<android::widget::Filter> Filterable::getFilter() { return call_method<SCAPIX_META_STRING("getFilter"), ref<android::widget::Filter>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_FILTERABLE_H
