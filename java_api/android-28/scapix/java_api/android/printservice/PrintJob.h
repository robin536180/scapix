// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PRINTSERVICE_PRINTJOB_H
#define SCAPIX_ANDROID_PRINTSERVICE_PRINTJOB_H

namespace scapix::java_api {

namespace android::print { class PrintJobId; }
namespace android::print { class PrintJobInfo; }
namespace android::printservice { class PrintDocument; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::printservice {

class PrintJob : public object_base<SCAPIX_META_STRING("android/printservice/PrintJob"),
	java::lang::Object>
{
public:

	ref<android::print::PrintJobId> getId();
	ref<android::print::PrintJobInfo> getInfo();
	ref<android::printservice::PrintDocument> getDocument();
	jboolean isQueued();
	jboolean isStarted();
	jboolean isBlocked();
	jboolean isCompleted();
	jboolean isFailed();
	jboolean isCancelled();
	jboolean start();
	jboolean block(ref<java::lang::String> reason);
	jboolean complete();
	jboolean fail(ref<java::lang::String> error);
	jboolean cancel();
	void setProgress(jfloat progress);
	void setStatus(ref<java::lang::CharSequence> status);
	void setStatus(jint statusResId);
	jboolean setTag(ref<java::lang::String> tag);
	ref<java::lang::String> getTag();
	ref<java::lang::String> getAdvancedStringOption(ref<java::lang::String> key);
	jboolean hasAdvancedOption(ref<java::lang::String> key);
	jint getAdvancedIntOption(ref<java::lang::String> key);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();

protected:

	PrintJob(handle_type h) : base_(h) {}

};

} // namespace android::printservice
} // namespace scapix::java_api

#include <scapix/java_api/android/print/PrintJobId.h>
#include <scapix/java_api/android/print/PrintJobInfo.h>
#include <scapix/java_api/android/printservice/PrintDocument.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::printservice {

inline ref<android::print::PrintJobId> PrintJob::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<android::print::PrintJobId>>(); }
inline ref<android::print::PrintJobInfo> PrintJob::getInfo() { return call_method<SCAPIX_META_STRING("getInfo"), ref<android::print::PrintJobInfo>>(); }
inline ref<android::printservice::PrintDocument> PrintJob::getDocument() { return call_method<SCAPIX_META_STRING("getDocument"), ref<android::printservice::PrintDocument>>(); }
inline jboolean PrintJob::isQueued() { return call_method<SCAPIX_META_STRING("isQueued"), jboolean>(); }
inline jboolean PrintJob::isStarted() { return call_method<SCAPIX_META_STRING("isStarted"), jboolean>(); }
inline jboolean PrintJob::isBlocked() { return call_method<SCAPIX_META_STRING("isBlocked"), jboolean>(); }
inline jboolean PrintJob::isCompleted() { return call_method<SCAPIX_META_STRING("isCompleted"), jboolean>(); }
inline jboolean PrintJob::isFailed() { return call_method<SCAPIX_META_STRING("isFailed"), jboolean>(); }
inline jboolean PrintJob::isCancelled() { return call_method<SCAPIX_META_STRING("isCancelled"), jboolean>(); }
inline jboolean PrintJob::start() { return call_method<SCAPIX_META_STRING("start"), jboolean>(); }
inline jboolean PrintJob::block(ref<java::lang::String> reason) { return call_method<SCAPIX_META_STRING("block"), jboolean>(reason); }
inline jboolean PrintJob::complete() { return call_method<SCAPIX_META_STRING("complete"), jboolean>(); }
inline jboolean PrintJob::fail(ref<java::lang::String> error) { return call_method<SCAPIX_META_STRING("fail"), jboolean>(error); }
inline jboolean PrintJob::cancel() { return call_method<SCAPIX_META_STRING("cancel"), jboolean>(); }
inline void PrintJob::setProgress(jfloat progress) { return call_method<SCAPIX_META_STRING("setProgress"), void>(progress); }
inline void PrintJob::setStatus(ref<java::lang::CharSequence> status) { return call_method<SCAPIX_META_STRING("setStatus"), void>(status); }
inline void PrintJob::setStatus(jint statusResId) { return call_method<SCAPIX_META_STRING("setStatus"), void>(statusResId); }
inline jboolean PrintJob::setTag(ref<java::lang::String> tag) { return call_method<SCAPIX_META_STRING("setTag"), jboolean>(tag); }
inline ref<java::lang::String> PrintJob::getTag() { return call_method<SCAPIX_META_STRING("getTag"), ref<java::lang::String>>(); }
inline ref<java::lang::String> PrintJob::getAdvancedStringOption(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getAdvancedStringOption"), ref<java::lang::String>>(key); }
inline jboolean PrintJob::hasAdvancedOption(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("hasAdvancedOption"), jboolean>(key); }
inline jint PrintJob::getAdvancedIntOption(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getAdvancedIntOption"), jint>(key); }
inline jboolean PrintJob::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint PrintJob::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::printservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PRINTSERVICE_PRINTJOB_H
