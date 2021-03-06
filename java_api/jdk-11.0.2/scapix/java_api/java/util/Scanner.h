// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_UTIL_SCANNER_H
#define SCAPIX_JAVA_UTIL_SCANNER_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::io { class IOException; }
namespace java::io { class InputStream; }
namespace java::lang { class Readable; }
namespace java::lang { class String; }
namespace java::math { class BigDecimal; }
namespace java::math { class BigInteger; }
namespace java::nio::channels { class ReadableByteChannel; }
namespace java::nio::charset { class Charset; }
namespace java::nio::file { class Path; }
namespace java::util { class Locale; }
namespace java::util::regex { class MatchResult; }
namespace java::util::regex { class Pattern; }
namespace java::util::stream { class Stream; }

namespace java::util {

class Scanner : public object_base<SCAPIX_META_STRING("java/util/Scanner"),
	java::lang::Object,
	java::util::Iterator,
	java::io::Closeable>
{
public:

	static ref<Scanner> new_object(ref<java::lang::Readable> source);
	static ref<Scanner> new_object(ref<java::io::InputStream> source);
	static ref<Scanner> new_object(ref<java::io::InputStream> source, ref<java::lang::String> charsetName);
	static ref<Scanner> new_object(ref<java::io::InputStream> source, ref<java::nio::charset::Charset> charset);
	static ref<Scanner> new_object(ref<java::io::File> source);
	static ref<Scanner> new_object(ref<java::io::File> source, ref<java::lang::String> charsetName);
	static ref<Scanner> new_object(ref<java::io::File> source, ref<java::nio::charset::Charset> charset);
	static ref<Scanner> new_object(ref<java::nio::file::Path> source);
	static ref<Scanner> new_object(ref<java::nio::file::Path> source, ref<java::lang::String> charsetName);
	static ref<Scanner> new_object(ref<java::nio::file::Path> source, ref<java::nio::charset::Charset> charset);
	static ref<Scanner> new_object(ref<java::lang::String> source);
	static ref<Scanner> new_object(ref<java::nio::channels::ReadableByteChannel> source);
	static ref<Scanner> new_object(ref<java::nio::channels::ReadableByteChannel> source, ref<java::lang::String> charsetName);
	static ref<Scanner> new_object(ref<java::nio::channels::ReadableByteChannel> source, ref<java::nio::charset::Charset> charset);
	void close();
	ref<java::io::IOException> ioException();
	ref<java::util::regex::Pattern> delimiter();
	ref<java::util::Scanner> useDelimiter(ref<java::util::regex::Pattern> pattern);
	ref<java::util::Scanner> useDelimiter(ref<java::lang::String> pattern);
	ref<java::util::Locale> locale();
	ref<java::util::Scanner> useLocale(ref<java::util::Locale> locale);
	jint radix();
	ref<java::util::Scanner> useRadix(jint radix);
	ref<java::util::regex::MatchResult> match();
	ref<java::lang::String> toString();
	jboolean hasNext();
	ref<java::lang::String> next();
	void remove();
	jboolean hasNext(ref<java::lang::String> pattern);
	ref<java::lang::String> next(ref<java::lang::String> pattern);
	jboolean hasNext(ref<java::util::regex::Pattern> pattern);
	ref<java::lang::String> next(ref<java::util::regex::Pattern> pattern);
	jboolean hasNextLine();
	ref<java::lang::String> nextLine();
	ref<java::lang::String> findInLine(ref<java::lang::String> pattern);
	ref<java::lang::String> findInLine(ref<java::util::regex::Pattern> pattern);
	ref<java::lang::String> findWithinHorizon(ref<java::lang::String> pattern, jint horizon);
	ref<java::lang::String> findWithinHorizon(ref<java::util::regex::Pattern> pattern, jint horizon);
	ref<java::util::Scanner> skip(ref<java::util::regex::Pattern> pattern);
	ref<java::util::Scanner> skip(ref<java::lang::String> pattern);
	jboolean hasNextBoolean();
	jboolean nextBoolean();
	jboolean hasNextByte();
	jboolean hasNextByte(jint radix);
	jbyte nextByte();
	jbyte nextByte(jint radix);
	jboolean hasNextShort();
	jboolean hasNextShort(jint radix);
	jshort nextShort();
	jshort nextShort(jint radix);
	jboolean hasNextInt();
	jboolean hasNextInt(jint radix);
	jint nextInt();
	jint nextInt(jint radix);
	jboolean hasNextLong();
	jboolean hasNextLong(jint radix);
	jlong nextLong();
	jlong nextLong(jint radix);
	jboolean hasNextFloat();
	jfloat nextFloat();
	jboolean hasNextDouble();
	jdouble nextDouble();
	jboolean hasNextBigInteger();
	jboolean hasNextBigInteger(jint radix);
	ref<java::math::BigInteger> nextBigInteger();
	ref<java::math::BigInteger> nextBigInteger(jint radix);
	jboolean hasNextBigDecimal();
	ref<java::math::BigDecimal> nextBigDecimal();
	ref<java::util::Scanner> reset();
	ref<java::util::stream::Stream> tokens();
	ref<java::util::stream::Stream> findAll(ref<java::util::regex::Pattern> pattern);
	ref<java::util::stream::Stream> findAll(ref<java::lang::String> patString);

protected:

	Scanner(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Readable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/nio/channels/ReadableByteChannel.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/regex/MatchResult.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#include <scapix/java_api/java/util/stream/Stream.h>

namespace scapix::java_api {
namespace java::util {

inline ref<Scanner> Scanner::new_object(ref<java::lang::Readable> source) { return base_::new_object(source); }
inline ref<Scanner> Scanner::new_object(ref<java::io::InputStream> source) { return base_::new_object(source); }
inline ref<Scanner> Scanner::new_object(ref<java::io::InputStream> source, ref<java::lang::String> charsetName) { return base_::new_object(source, charsetName); }
inline ref<Scanner> Scanner::new_object(ref<java::io::InputStream> source, ref<java::nio::charset::Charset> charset) { return base_::new_object(source, charset); }
inline ref<Scanner> Scanner::new_object(ref<java::io::File> source) { return base_::new_object(source); }
inline ref<Scanner> Scanner::new_object(ref<java::io::File> source, ref<java::lang::String> charsetName) { return base_::new_object(source, charsetName); }
inline ref<Scanner> Scanner::new_object(ref<java::io::File> source, ref<java::nio::charset::Charset> charset) { return base_::new_object(source, charset); }
inline ref<Scanner> Scanner::new_object(ref<java::nio::file::Path> source) { return base_::new_object(source); }
inline ref<Scanner> Scanner::new_object(ref<java::nio::file::Path> source, ref<java::lang::String> charsetName) { return base_::new_object(source, charsetName); }
inline ref<Scanner> Scanner::new_object(ref<java::nio::file::Path> source, ref<java::nio::charset::Charset> charset) { return base_::new_object(source, charset); }
inline ref<Scanner> Scanner::new_object(ref<java::lang::String> source) { return base_::new_object(source); }
inline ref<Scanner> Scanner::new_object(ref<java::nio::channels::ReadableByteChannel> source) { return base_::new_object(source); }
inline ref<Scanner> Scanner::new_object(ref<java::nio::channels::ReadableByteChannel> source, ref<java::lang::String> charsetName) { return base_::new_object(source, charsetName); }
inline ref<Scanner> Scanner::new_object(ref<java::nio::channels::ReadableByteChannel> source, ref<java::nio::charset::Charset> charset) { return base_::new_object(source, charset); }
inline void Scanner::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline ref<java::io::IOException> Scanner::ioException() { return call_method<SCAPIX_META_STRING("ioException"), ref<java::io::IOException>>(); }
inline ref<java::util::regex::Pattern> Scanner::delimiter() { return call_method<SCAPIX_META_STRING("delimiter"), ref<java::util::regex::Pattern>>(); }
inline ref<java::util::Scanner> Scanner::useDelimiter(ref<java::util::regex::Pattern> pattern) { return call_method<SCAPIX_META_STRING("useDelimiter"), ref<java::util::Scanner>>(pattern); }
inline ref<java::util::Scanner> Scanner::useDelimiter(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("useDelimiter"), ref<java::util::Scanner>>(pattern); }
inline ref<java::util::Locale> Scanner::locale() { return call_method<SCAPIX_META_STRING("locale"), ref<java::util::Locale>>(); }
inline ref<java::util::Scanner> Scanner::useLocale(ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("useLocale"), ref<java::util::Scanner>>(locale); }
inline jint Scanner::radix() { return call_method<SCAPIX_META_STRING("radix"), jint>(); }
inline ref<java::util::Scanner> Scanner::useRadix(jint radix) { return call_method<SCAPIX_META_STRING("useRadix"), ref<java::util::Scanner>>(radix); }
inline ref<java::util::regex::MatchResult> Scanner::match() { return call_method<SCAPIX_META_STRING("match"), ref<java::util::regex::MatchResult>>(); }
inline ref<java::lang::String> Scanner::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean Scanner::hasNext() { return call_method<SCAPIX_META_STRING("hasNext"), jboolean>(); }
inline ref<java::lang::String> Scanner::next() { return call_method<SCAPIX_META_STRING("next"), ref<java::lang::String>>(); }
inline void Scanner::remove() { return call_method<SCAPIX_META_STRING("remove"), void>(); }
inline jboolean Scanner::hasNext(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("hasNext"), jboolean>(pattern); }
inline ref<java::lang::String> Scanner::next(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("next"), ref<java::lang::String>>(pattern); }
inline jboolean Scanner::hasNext(ref<java::util::regex::Pattern> pattern) { return call_method<SCAPIX_META_STRING("hasNext"), jboolean>(pattern); }
inline ref<java::lang::String> Scanner::next(ref<java::util::regex::Pattern> pattern) { return call_method<SCAPIX_META_STRING("next"), ref<java::lang::String>>(pattern); }
inline jboolean Scanner::hasNextLine() { return call_method<SCAPIX_META_STRING("hasNextLine"), jboolean>(); }
inline ref<java::lang::String> Scanner::nextLine() { return call_method<SCAPIX_META_STRING("nextLine"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Scanner::findInLine(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("findInLine"), ref<java::lang::String>>(pattern); }
inline ref<java::lang::String> Scanner::findInLine(ref<java::util::regex::Pattern> pattern) { return call_method<SCAPIX_META_STRING("findInLine"), ref<java::lang::String>>(pattern); }
inline ref<java::lang::String> Scanner::findWithinHorizon(ref<java::lang::String> pattern, jint horizon) { return call_method<SCAPIX_META_STRING("findWithinHorizon"), ref<java::lang::String>>(pattern, horizon); }
inline ref<java::lang::String> Scanner::findWithinHorizon(ref<java::util::regex::Pattern> pattern, jint horizon) { return call_method<SCAPIX_META_STRING("findWithinHorizon"), ref<java::lang::String>>(pattern, horizon); }
inline ref<java::util::Scanner> Scanner::skip(ref<java::util::regex::Pattern> pattern) { return call_method<SCAPIX_META_STRING("skip"), ref<java::util::Scanner>>(pattern); }
inline ref<java::util::Scanner> Scanner::skip(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("skip"), ref<java::util::Scanner>>(pattern); }
inline jboolean Scanner::hasNextBoolean() { return call_method<SCAPIX_META_STRING("hasNextBoolean"), jboolean>(); }
inline jboolean Scanner::nextBoolean() { return call_method<SCAPIX_META_STRING("nextBoolean"), jboolean>(); }
inline jboolean Scanner::hasNextByte() { return call_method<SCAPIX_META_STRING("hasNextByte"), jboolean>(); }
inline jboolean Scanner::hasNextByte(jint radix) { return call_method<SCAPIX_META_STRING("hasNextByte"), jboolean>(radix); }
inline jbyte Scanner::nextByte() { return call_method<SCAPIX_META_STRING("nextByte"), jbyte>(); }
inline jbyte Scanner::nextByte(jint radix) { return call_method<SCAPIX_META_STRING("nextByte"), jbyte>(radix); }
inline jboolean Scanner::hasNextShort() { return call_method<SCAPIX_META_STRING("hasNextShort"), jboolean>(); }
inline jboolean Scanner::hasNextShort(jint radix) { return call_method<SCAPIX_META_STRING("hasNextShort"), jboolean>(radix); }
inline jshort Scanner::nextShort() { return call_method<SCAPIX_META_STRING("nextShort"), jshort>(); }
inline jshort Scanner::nextShort(jint radix) { return call_method<SCAPIX_META_STRING("nextShort"), jshort>(radix); }
inline jboolean Scanner::hasNextInt() { return call_method<SCAPIX_META_STRING("hasNextInt"), jboolean>(); }
inline jboolean Scanner::hasNextInt(jint radix) { return call_method<SCAPIX_META_STRING("hasNextInt"), jboolean>(radix); }
inline jint Scanner::nextInt() { return call_method<SCAPIX_META_STRING("nextInt"), jint>(); }
inline jint Scanner::nextInt(jint radix) { return call_method<SCAPIX_META_STRING("nextInt"), jint>(radix); }
inline jboolean Scanner::hasNextLong() { return call_method<SCAPIX_META_STRING("hasNextLong"), jboolean>(); }
inline jboolean Scanner::hasNextLong(jint radix) { return call_method<SCAPIX_META_STRING("hasNextLong"), jboolean>(radix); }
inline jlong Scanner::nextLong() { return call_method<SCAPIX_META_STRING("nextLong"), jlong>(); }
inline jlong Scanner::nextLong(jint radix) { return call_method<SCAPIX_META_STRING("nextLong"), jlong>(radix); }
inline jboolean Scanner::hasNextFloat() { return call_method<SCAPIX_META_STRING("hasNextFloat"), jboolean>(); }
inline jfloat Scanner::nextFloat() { return call_method<SCAPIX_META_STRING("nextFloat"), jfloat>(); }
inline jboolean Scanner::hasNextDouble() { return call_method<SCAPIX_META_STRING("hasNextDouble"), jboolean>(); }
inline jdouble Scanner::nextDouble() { return call_method<SCAPIX_META_STRING("nextDouble"), jdouble>(); }
inline jboolean Scanner::hasNextBigInteger() { return call_method<SCAPIX_META_STRING("hasNextBigInteger"), jboolean>(); }
inline jboolean Scanner::hasNextBigInteger(jint radix) { return call_method<SCAPIX_META_STRING("hasNextBigInteger"), jboolean>(radix); }
inline ref<java::math::BigInteger> Scanner::nextBigInteger() { return call_method<SCAPIX_META_STRING("nextBigInteger"), ref<java::math::BigInteger>>(); }
inline ref<java::math::BigInteger> Scanner::nextBigInteger(jint radix) { return call_method<SCAPIX_META_STRING("nextBigInteger"), ref<java::math::BigInteger>>(radix); }
inline jboolean Scanner::hasNextBigDecimal() { return call_method<SCAPIX_META_STRING("hasNextBigDecimal"), jboolean>(); }
inline ref<java::math::BigDecimal> Scanner::nextBigDecimal() { return call_method<SCAPIX_META_STRING("nextBigDecimal"), ref<java::math::BigDecimal>>(); }
inline ref<java::util::Scanner> Scanner::reset() { return call_method<SCAPIX_META_STRING("reset"), ref<java::util::Scanner>>(); }
inline ref<java::util::stream::Stream> Scanner::tokens() { return call_method<SCAPIX_META_STRING("tokens"), ref<java::util::stream::Stream>>(); }
inline ref<java::util::stream::Stream> Scanner::findAll(ref<java::util::regex::Pattern> pattern) { return call_method<SCAPIX_META_STRING("findAll"), ref<java::util::stream::Stream>>(pattern); }
inline ref<java::util::stream::Stream> Scanner::findAll(ref<java::lang::String> patString) { return call_method<SCAPIX_META_STRING("findAll"), ref<java::util::stream::Stream>>(patString); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SCANNER_H
