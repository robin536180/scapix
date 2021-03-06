// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_H
#define SCAPIX_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_H

namespace scapix::java_api {

namespace java::nio::channels { class AsynchronousChannelGroup; }
namespace java::nio::channels { class AsynchronousServerSocketChannel; }
namespace java::nio::channels { class AsynchronousSocketChannel; }
namespace java::util::concurrent { class ExecutorService; }
namespace java::util::concurrent { class ThreadFactory; }

namespace java::nio::channels::spi {

class AsynchronousChannelProvider : public object_base<SCAPIX_META_STRING("java/nio/channels/spi/AsynchronousChannelProvider"),
	java::lang::Object>
{
public:

	static ref<java::nio::channels::spi::AsynchronousChannelProvider> provider();
	ref<java::nio::channels::AsynchronousChannelGroup> openAsynchronousChannelGroup(jint p1, ref<java::util::concurrent::ThreadFactory> p2);
	ref<java::nio::channels::AsynchronousChannelGroup> openAsynchronousChannelGroup(ref<java::util::concurrent::ExecutorService> p1, jint p2);
	ref<java::nio::channels::AsynchronousServerSocketChannel> openAsynchronousServerSocketChannel(ref<java::nio::channels::AsynchronousChannelGroup> p1);
	ref<java::nio::channels::AsynchronousSocketChannel> openAsynchronousSocketChannel(ref<java::nio::channels::AsynchronousChannelGroup> p1);

protected:

	AsynchronousChannelProvider(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels::spi
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/channels/AsynchronousChannelGroup.h>
#include <scapix/java_api/java/nio/channels/AsynchronousServerSocketChannel.h>
#include <scapix/java_api/java/nio/channels/AsynchronousSocketChannel.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>

namespace scapix::java_api {
namespace java::nio::channels::spi {

inline ref<java::nio::channels::spi::AsynchronousChannelProvider> AsynchronousChannelProvider::provider() { return call_static_method<SCAPIX_META_STRING("provider"), ref<java::nio::channels::spi::AsynchronousChannelProvider>>(); }
inline ref<java::nio::channels::AsynchronousChannelGroup> AsynchronousChannelProvider::openAsynchronousChannelGroup(jint p1, ref<java::util::concurrent::ThreadFactory> p2) { return call_method<SCAPIX_META_STRING("openAsynchronousChannelGroup"), ref<java::nio::channels::AsynchronousChannelGroup>>(p1, p2); }
inline ref<java::nio::channels::AsynchronousChannelGroup> AsynchronousChannelProvider::openAsynchronousChannelGroup(ref<java::util::concurrent::ExecutorService> p1, jint p2) { return call_method<SCAPIX_META_STRING("openAsynchronousChannelGroup"), ref<java::nio::channels::AsynchronousChannelGroup>>(p1, p2); }
inline ref<java::nio::channels::AsynchronousServerSocketChannel> AsynchronousChannelProvider::openAsynchronousServerSocketChannel(ref<java::nio::channels::AsynchronousChannelGroup> p1) { return call_method<SCAPIX_META_STRING("openAsynchronousServerSocketChannel"), ref<java::nio::channels::AsynchronousServerSocketChannel>>(p1); }
inline ref<java::nio::channels::AsynchronousSocketChannel> AsynchronousChannelProvider::openAsynchronousSocketChannel(ref<java::nio::channels::AsynchronousChannelGroup> p1) { return call_method<SCAPIX_META_STRING("openAsynchronousSocketChannel"), ref<java::nio::channels::AsynchronousSocketChannel>>(p1); }

} // namespace java::nio::channels::spi
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_SPI_ASYNCHRONOUSCHANNELPROVIDER_H
