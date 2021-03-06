// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE_H
#define SCAPIX_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE_H

namespace scapix::java_api {

namespace android::app::assist { class AssistStructure_ViewNode; }
namespace java::lang { class CharSequence; }

namespace android::app::assist {

class AssistStructure_WindowNode : public object_base<SCAPIX_META_STRING("android/app/assist/AssistStructure$WindowNode"),
	java::lang::Object>
{
public:

	jint getLeft();
	jint getTop();
	jint getWidth();
	jint getHeight();
	ref<java::lang::CharSequence> getTitle();
	jint getDisplayId();
	ref<android::app::assist::AssistStructure_ViewNode> getRootViewNode();

protected:

	AssistStructure_WindowNode(handle_type h) : base_(h) {}

};

} // namespace android::app::assist
} // namespace scapix::java_api

#include <scapix/java_api/android/app/assist/AssistStructure_ViewNode.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app::assist {

inline jint AssistStructure_WindowNode::getLeft() { return call_method<SCAPIX_META_STRING("getLeft"), jint>(); }
inline jint AssistStructure_WindowNode::getTop() { return call_method<SCAPIX_META_STRING("getTop"), jint>(); }
inline jint AssistStructure_WindowNode::getWidth() { return call_method<SCAPIX_META_STRING("getWidth"), jint>(); }
inline jint AssistStructure_WindowNode::getHeight() { return call_method<SCAPIX_META_STRING("getHeight"), jint>(); }
inline ref<java::lang::CharSequence> AssistStructure_WindowNode::getTitle() { return call_method<SCAPIX_META_STRING("getTitle"), ref<java::lang::CharSequence>>(); }
inline jint AssistStructure_WindowNode::getDisplayId() { return call_method<SCAPIX_META_STRING("getDisplayId"), jint>(); }
inline ref<android::app::assist::AssistStructure_ViewNode> AssistStructure_WindowNode::getRootViewNode() { return call_method<SCAPIX_META_STRING("getRootViewNode"), ref<android::app::assist::AssistStructure_ViewNode>>(); }

} // namespace android::app::assist
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_WINDOWNODE_H
