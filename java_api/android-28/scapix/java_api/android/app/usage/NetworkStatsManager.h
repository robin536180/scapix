// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_USAGE_NETWORKSTATSMANAGER_H
#define SCAPIX_ANDROID_APP_USAGE_NETWORKSTATSMANAGER_H

namespace scapix::java_api {

namespace android::app::usage { class NetworkStats; }
namespace android::app::usage { class NetworkStats_Bucket; }
namespace android::app::usage { class NetworkStatsManager_UsageCallback; }
namespace android::os { class Handler; }
namespace java::lang { class String; }

namespace android::app::usage {

class NetworkStatsManager : public object_base<SCAPIX_META_STRING("android/app/usage/NetworkStatsManager"),
	java::lang::Object>
{
public:

	using UsageCallback = NetworkStatsManager_UsageCallback;

	ref<android::app::usage::NetworkStats_Bucket> querySummaryForDevice(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4);
	ref<android::app::usage::NetworkStats_Bucket> querySummaryForUser(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4);
	ref<android::app::usage::NetworkStats> querySummary(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4);
	ref<android::app::usage::NetworkStats> queryDetailsForUid(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4, jint endTime);
	ref<android::app::usage::NetworkStats> queryDetailsForUidTag(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4, jint endTime, jint p6);
	ref<android::app::usage::NetworkStats> queryDetailsForUidTagState(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4, jint endTime, jint p6, jint uid);
	ref<android::app::usage::NetworkStats> queryDetails(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4);
	void registerUsageCallback(jint networkType, ref<java::lang::String> subscriberId, jlong thresholdBytes, ref<android::app::usage::NetworkStatsManager_UsageCallback> p4);
	void registerUsageCallback(jint networkType, ref<java::lang::String> subscriberId, jlong thresholdBytes, ref<android::app::usage::NetworkStatsManager_UsageCallback> p4, ref<android::os::Handler> callback);
	void unregisterUsageCallback(ref<android::app::usage::NetworkStatsManager_UsageCallback> callback);

protected:

	NetworkStatsManager(handle_type h) : base_(h) {}

};

} // namespace android::app::usage
} // namespace scapix::java_api

#include <scapix/java_api/android/app/usage/NetworkStats.h>
#include <scapix/java_api/android/app/usage/NetworkStats_Bucket.h>
#include <scapix/java_api/android/app/usage/NetworkStatsManager_UsageCallback.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app::usage {

inline ref<android::app::usage::NetworkStats_Bucket> NetworkStatsManager::querySummaryForDevice(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4) { return call_method<SCAPIX_META_STRING("querySummaryForDevice"), ref<android::app::usage::NetworkStats_Bucket>>(networkType, subscriberId, startTime, p4); }
inline ref<android::app::usage::NetworkStats_Bucket> NetworkStatsManager::querySummaryForUser(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4) { return call_method<SCAPIX_META_STRING("querySummaryForUser"), ref<android::app::usage::NetworkStats_Bucket>>(networkType, subscriberId, startTime, p4); }
inline ref<android::app::usage::NetworkStats> NetworkStatsManager::querySummary(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4) { return call_method<SCAPIX_META_STRING("querySummary"), ref<android::app::usage::NetworkStats>>(networkType, subscriberId, startTime, p4); }
inline ref<android::app::usage::NetworkStats> NetworkStatsManager::queryDetailsForUid(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4, jint endTime) { return call_method<SCAPIX_META_STRING("queryDetailsForUid"), ref<android::app::usage::NetworkStats>>(networkType, subscriberId, startTime, p4, endTime); }
inline ref<android::app::usage::NetworkStats> NetworkStatsManager::queryDetailsForUidTag(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4, jint endTime, jint p6) { return call_method<SCAPIX_META_STRING("queryDetailsForUidTag"), ref<android::app::usage::NetworkStats>>(networkType, subscriberId, startTime, p4, endTime, p6); }
inline ref<android::app::usage::NetworkStats> NetworkStatsManager::queryDetailsForUidTagState(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4, jint endTime, jint p6, jint uid) { return call_method<SCAPIX_META_STRING("queryDetailsForUidTagState"), ref<android::app::usage::NetworkStats>>(networkType, subscriberId, startTime, p4, endTime, p6, uid); }
inline ref<android::app::usage::NetworkStats> NetworkStatsManager::queryDetails(jint networkType, ref<java::lang::String> subscriberId, jlong startTime, jlong p4) { return call_method<SCAPIX_META_STRING("queryDetails"), ref<android::app::usage::NetworkStats>>(networkType, subscriberId, startTime, p4); }
inline void NetworkStatsManager::registerUsageCallback(jint networkType, ref<java::lang::String> subscriberId, jlong thresholdBytes, ref<android::app::usage::NetworkStatsManager_UsageCallback> p4) { return call_method<SCAPIX_META_STRING("registerUsageCallback"), void>(networkType, subscriberId, thresholdBytes, p4); }
inline void NetworkStatsManager::registerUsageCallback(jint networkType, ref<java::lang::String> subscriberId, jlong thresholdBytes, ref<android::app::usage::NetworkStatsManager_UsageCallback> p4, ref<android::os::Handler> callback) { return call_method<SCAPIX_META_STRING("registerUsageCallback"), void>(networkType, subscriberId, thresholdBytes, p4, callback); }
inline void NetworkStatsManager::unregisterUsageCallback(ref<android::app::usage::NetworkStatsManager_UsageCallback> callback) { return call_method<SCAPIX_META_STRING("unregisterUsageCallback"), void>(callback); }

} // namespace android::app::usage
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_USAGE_NETWORKSTATSMANAGER_H
