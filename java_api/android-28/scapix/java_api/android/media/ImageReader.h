// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_MEDIA_IMAGEREADER_H
#define SCAPIX_ANDROID_MEDIA_IMAGEREADER_H

namespace scapix::java_api {

namespace android::media { class Image; }
namespace android::media { class ImageReader_OnImageAvailableListener; }
namespace android::os { class Handler; }
namespace android::view { class Surface; }

namespace android::media {

class ImageReader : public object_base<SCAPIX_META_STRING("android/media/ImageReader"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using OnImageAvailableListener = ImageReader_OnImageAvailableListener;

	static ref<android::media::ImageReader> newInstance(jint width, jint height, jint format, jint maxImages);
	jint getWidth();
	jint getHeight();
	jint getImageFormat();
	jint getMaxImages();
	ref<android::view::Surface> getSurface();
	ref<android::media::Image> acquireLatestImage();
	ref<android::media::Image> acquireNextImage();
	void setOnImageAvailableListener(ref<android::media::ImageReader_OnImageAvailableListener> listener, ref<android::os::Handler> handler);
	void close();
	void discardFreeBuffers();

protected:

	ImageReader(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/Image.h>
#include <scapix/java_api/android/media/ImageReader_OnImageAvailableListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/Surface.h>

namespace scapix::java_api {
namespace android::media {

inline ref<android::media::ImageReader> ImageReader::newInstance(jint width, jint height, jint format, jint maxImages) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::media::ImageReader>>(width, height, format, maxImages); }
inline jint ImageReader::getWidth() { return call_method<SCAPIX_META_STRING("getWidth"), jint>(); }
inline jint ImageReader::getHeight() { return call_method<SCAPIX_META_STRING("getHeight"), jint>(); }
inline jint ImageReader::getImageFormat() { return call_method<SCAPIX_META_STRING("getImageFormat"), jint>(); }
inline jint ImageReader::getMaxImages() { return call_method<SCAPIX_META_STRING("getMaxImages"), jint>(); }
inline ref<android::view::Surface> ImageReader::getSurface() { return call_method<SCAPIX_META_STRING("getSurface"), ref<android::view::Surface>>(); }
inline ref<android::media::Image> ImageReader::acquireLatestImage() { return call_method<SCAPIX_META_STRING("acquireLatestImage"), ref<android::media::Image>>(); }
inline ref<android::media::Image> ImageReader::acquireNextImage() { return call_method<SCAPIX_META_STRING("acquireNextImage"), ref<android::media::Image>>(); }
inline void ImageReader::setOnImageAvailableListener(ref<android::media::ImageReader_OnImageAvailableListener> listener, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("setOnImageAvailableListener"), void>(listener, handler); }
inline void ImageReader::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void ImageReader::discardFreeBuffers() { return call_method<SCAPIX_META_STRING("discardFreeBuffers"), void>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_IMAGEREADER_H
