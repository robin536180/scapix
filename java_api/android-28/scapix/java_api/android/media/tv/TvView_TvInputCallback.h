// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVVIEW_TVINPUTCALLBACK_H
#define SCAPIX_ANDROID_MEDIA_TV_TVVIEW_TVINPUTCALLBACK_H

namespace scapix::java_api {

namespace android::media::tv { class TvContentRating; }
namespace android::net { class Uri; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::media::tv {

class TvView_TvInputCallback : public object_base<SCAPIX_META_STRING("android/media/tv/TvView$TvInputCallback"),
	java::lang::Object>
{
public:

	static ref<TvView_TvInputCallback> new_object();
	void onConnectionFailed(ref<java::lang::String> inputId);
	void onDisconnected(ref<java::lang::String> inputId);
	void onChannelRetuned(ref<java::lang::String> inputId, ref<android::net::Uri> channelUri);
	void onTracksChanged(ref<java::lang::String> inputId, ref<java::util::List> tracks);
	void onTrackSelected(ref<java::lang::String> inputId, jint type, ref<java::lang::String> trackId);
	void onVideoSizeChanged(ref<java::lang::String> inputId, jint width, jint height);
	void onVideoAvailable(ref<java::lang::String> inputId);
	void onVideoUnavailable(ref<java::lang::String> inputId, jint reason);
	void onContentAllowed(ref<java::lang::String> inputId);
	void onContentBlocked(ref<java::lang::String> inputId, ref<android::media::tv::TvContentRating> rating);
	void onTimeShiftStatusChanged(ref<java::lang::String> inputId, jint status);

protected:

	TvView_TvInputCallback(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/media/tv/TvContentRating.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<TvView_TvInputCallback> TvView_TvInputCallback::new_object() { return base_::new_object(); }
inline void TvView_TvInputCallback::onConnectionFailed(ref<java::lang::String> inputId) { return call_method<SCAPIX_META_STRING("onConnectionFailed"), void>(inputId); }
inline void TvView_TvInputCallback::onDisconnected(ref<java::lang::String> inputId) { return call_method<SCAPIX_META_STRING("onDisconnected"), void>(inputId); }
inline void TvView_TvInputCallback::onChannelRetuned(ref<java::lang::String> inputId, ref<android::net::Uri> channelUri) { return call_method<SCAPIX_META_STRING("onChannelRetuned"), void>(inputId, channelUri); }
inline void TvView_TvInputCallback::onTracksChanged(ref<java::lang::String> inputId, ref<java::util::List> tracks) { return call_method<SCAPIX_META_STRING("onTracksChanged"), void>(inputId, tracks); }
inline void TvView_TvInputCallback::onTrackSelected(ref<java::lang::String> inputId, jint type, ref<java::lang::String> trackId) { return call_method<SCAPIX_META_STRING("onTrackSelected"), void>(inputId, type, trackId); }
inline void TvView_TvInputCallback::onVideoSizeChanged(ref<java::lang::String> inputId, jint width, jint height) { return call_method<SCAPIX_META_STRING("onVideoSizeChanged"), void>(inputId, width, height); }
inline void TvView_TvInputCallback::onVideoAvailable(ref<java::lang::String> inputId) { return call_method<SCAPIX_META_STRING("onVideoAvailable"), void>(inputId); }
inline void TvView_TvInputCallback::onVideoUnavailable(ref<java::lang::String> inputId, jint reason) { return call_method<SCAPIX_META_STRING("onVideoUnavailable"), void>(inputId, reason); }
inline void TvView_TvInputCallback::onContentAllowed(ref<java::lang::String> inputId) { return call_method<SCAPIX_META_STRING("onContentAllowed"), void>(inputId); }
inline void TvView_TvInputCallback::onContentBlocked(ref<java::lang::String> inputId, ref<android::media::tv::TvContentRating> rating) { return call_method<SCAPIX_META_STRING("onContentBlocked"), void>(inputId, rating); }
inline void TvView_TvInputCallback::onTimeShiftStatusChanged(ref<java::lang::String> inputId, jint status) { return call_method<SCAPIX_META_STRING("onTimeShiftStatusChanged"), void>(inputId, status); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVVIEW_TVINPUTCALLBACK_H
