// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_CHARSET_CHARSETENCODER_H
#define SCAPIX_JAVA_NIO_CHARSET_CHARSETENCODER_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::nio { class ByteBuffer; }
namespace java::nio { class CharBuffer; }
namespace java::nio::charset { class Charset; }
namespace java::nio::charset { class CoderResult; }
namespace java::nio::charset { class CodingErrorAction; }

namespace java::nio::charset {

class CharsetEncoder : public object_base<SCAPIX_META_STRING("java/nio/charset/CharsetEncoder"),
	java::lang::Object>
{
public:

	ref<java::nio::charset::Charset> charset();
	ref<link::java::array<jbyte>> replacement();
	ref<java::nio::charset::CharsetEncoder> replaceWith(ref<link::java::array<jbyte>> newReplacement);
	jboolean isLegalReplacement(ref<link::java::array<jbyte>> repl);
	ref<java::nio::charset::CodingErrorAction> malformedInputAction();
	ref<java::nio::charset::CharsetEncoder> onMalformedInput(ref<java::nio::charset::CodingErrorAction> newAction);
	ref<java::nio::charset::CodingErrorAction> unmappableCharacterAction();
	ref<java::nio::charset::CharsetEncoder> onUnmappableCharacter(ref<java::nio::charset::CodingErrorAction> newAction);
	jfloat averageBytesPerChar();
	jfloat maxBytesPerChar();
	ref<java::nio::charset::CoderResult> encode(ref<java::nio::CharBuffer> in, ref<java::nio::ByteBuffer> out, jboolean endOfInput);
	ref<java::nio::charset::CoderResult> flush(ref<java::nio::ByteBuffer> out);
	ref<java::nio::charset::CharsetEncoder> reset();
	ref<java::nio::ByteBuffer> encode(ref<java::nio::CharBuffer> in);
	jboolean canEncode(jchar c);
	jboolean canEncode(ref<java::lang::CharSequence> cs);

protected:

	CharsetEncoder(handle_type h) : base_(h) {}

};

} // namespace java::nio::charset
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/nio/charset/CoderResult.h>
#include <scapix/java_api/java/nio/charset/CodingErrorAction.h>

namespace scapix::java_api {
namespace java::nio::charset {

inline ref<java::nio::charset::Charset> CharsetEncoder::charset() { return call_method<SCAPIX_META_STRING("charset"), ref<java::nio::charset::Charset>>(); }
inline ref<link::java::array<jbyte>> CharsetEncoder::replacement() { return call_method<SCAPIX_META_STRING("replacement"), ref<link::java::array<jbyte>>>(); }
inline ref<java::nio::charset::CharsetEncoder> CharsetEncoder::replaceWith(ref<link::java::array<jbyte>> newReplacement) { return call_method<SCAPIX_META_STRING("replaceWith"), ref<java::nio::charset::CharsetEncoder>>(newReplacement); }
inline jboolean CharsetEncoder::isLegalReplacement(ref<link::java::array<jbyte>> repl) { return call_method<SCAPIX_META_STRING("isLegalReplacement"), jboolean>(repl); }
inline ref<java::nio::charset::CodingErrorAction> CharsetEncoder::malformedInputAction() { return call_method<SCAPIX_META_STRING("malformedInputAction"), ref<java::nio::charset::CodingErrorAction>>(); }
inline ref<java::nio::charset::CharsetEncoder> CharsetEncoder::onMalformedInput(ref<java::nio::charset::CodingErrorAction> newAction) { return call_method<SCAPIX_META_STRING("onMalformedInput"), ref<java::nio::charset::CharsetEncoder>>(newAction); }
inline ref<java::nio::charset::CodingErrorAction> CharsetEncoder::unmappableCharacterAction() { return call_method<SCAPIX_META_STRING("unmappableCharacterAction"), ref<java::nio::charset::CodingErrorAction>>(); }
inline ref<java::nio::charset::CharsetEncoder> CharsetEncoder::onUnmappableCharacter(ref<java::nio::charset::CodingErrorAction> newAction) { return call_method<SCAPIX_META_STRING("onUnmappableCharacter"), ref<java::nio::charset::CharsetEncoder>>(newAction); }
inline jfloat CharsetEncoder::averageBytesPerChar() { return call_method<SCAPIX_META_STRING("averageBytesPerChar"), jfloat>(); }
inline jfloat CharsetEncoder::maxBytesPerChar() { return call_method<SCAPIX_META_STRING("maxBytesPerChar"), jfloat>(); }
inline ref<java::nio::charset::CoderResult> CharsetEncoder::encode(ref<java::nio::CharBuffer> in, ref<java::nio::ByteBuffer> out, jboolean endOfInput) { return call_method<SCAPIX_META_STRING("encode"), ref<java::nio::charset::CoderResult>>(in, out, endOfInput); }
inline ref<java::nio::charset::CoderResult> CharsetEncoder::flush(ref<java::nio::ByteBuffer> out) { return call_method<SCAPIX_META_STRING("flush"), ref<java::nio::charset::CoderResult>>(out); }
inline ref<java::nio::charset::CharsetEncoder> CharsetEncoder::reset() { return call_method<SCAPIX_META_STRING("reset"), ref<java::nio::charset::CharsetEncoder>>(); }
inline ref<java::nio::ByteBuffer> CharsetEncoder::encode(ref<java::nio::CharBuffer> in) { return call_method<SCAPIX_META_STRING("encode"), ref<java::nio::ByteBuffer>>(in); }
inline jboolean CharsetEncoder::canEncode(jchar c) { return call_method<SCAPIX_META_STRING("canEncode"), jboolean>(c); }
inline jboolean CharsetEncoder::canEncode(ref<java::lang::CharSequence> cs) { return call_method<SCAPIX_META_STRING("canEncode"), jboolean>(cs); }

} // namespace java::nio::charset
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHARSET_CHARSETENCODER_H
