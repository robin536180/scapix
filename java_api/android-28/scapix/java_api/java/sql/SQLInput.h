// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SQL_SQLINPUT_H
#define SCAPIX_JAVA_SQL_SQLINPUT_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::io { class Reader; }
namespace java::lang { class String; }
namespace java::math { class BigDecimal; }
namespace java::net { class URL; }
namespace java::sql { class Array; }
namespace java::sql { class Blob; }
namespace java::sql { class Clob; }
namespace java::sql { class Date; }
namespace java::sql { class NClob; }
namespace java::sql { class Ref; }
namespace java::sql { class RowId; }
namespace java::sql { class SQLXML; }
namespace java::sql { class Time; }
namespace java::sql { class Timestamp; }

namespace java::sql {

class SQLInput : public object_base<SCAPIX_META_STRING("java/sql/SQLInput"),
	java::lang::Object>
{
public:

	ref<java::lang::String> readString();
	jboolean readBoolean();
	jbyte readByte();
	jshort readShort();
	jint readInt();
	jlong readLong();
	jfloat readFloat();
	jdouble readDouble();
	ref<java::math::BigDecimal> readBigDecimal();
	ref<link::java::array<jbyte>> readBytes();
	ref<java::sql::Date> readDate();
	ref<java::sql::Time> readTime();
	ref<java::sql::Timestamp> readTimestamp();
	ref<java::io::Reader> readCharacterStream();
	ref<java::io::InputStream> readAsciiStream();
	ref<java::io::InputStream> readBinaryStream();
	ref<java::lang::Object> readObject();
	ref<java::sql::Ref> readRef();
	ref<java::sql::Blob> readBlob();
	ref<java::sql::Clob> readClob();
	ref<java::sql::Array> readArray();
	jboolean wasNull();
	ref<java::net::URL> readURL();
	ref<java::sql::NClob> readNClob();
	ref<java::lang::String> readNString();
	ref<java::sql::SQLXML> readSQLXML();
	ref<java::sql::RowId> readRowId();

protected:

	SQLInput(handle_type h) : base_(h) {}

};

} // namespace java::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/sql/Array.h>
#include <scapix/java_api/java/sql/Blob.h>
#include <scapix/java_api/java/sql/Clob.h>
#include <scapix/java_api/java/sql/Date.h>
#include <scapix/java_api/java/sql/NClob.h>
#include <scapix/java_api/java/sql/Ref.h>
#include <scapix/java_api/java/sql/RowId.h>
#include <scapix/java_api/java/sql/SQLXML.h>
#include <scapix/java_api/java/sql/Time.h>
#include <scapix/java_api/java/sql/Timestamp.h>

namespace scapix::java_api {
namespace java::sql {

inline ref<java::lang::String> SQLInput::readString() { return call_method<SCAPIX_META_STRING("readString"), ref<java::lang::String>>(); }
inline jboolean SQLInput::readBoolean() { return call_method<SCAPIX_META_STRING("readBoolean"), jboolean>(); }
inline jbyte SQLInput::readByte() { return call_method<SCAPIX_META_STRING("readByte"), jbyte>(); }
inline jshort SQLInput::readShort() { return call_method<SCAPIX_META_STRING("readShort"), jshort>(); }
inline jint SQLInput::readInt() { return call_method<SCAPIX_META_STRING("readInt"), jint>(); }
inline jlong SQLInput::readLong() { return call_method<SCAPIX_META_STRING("readLong"), jlong>(); }
inline jfloat SQLInput::readFloat() { return call_method<SCAPIX_META_STRING("readFloat"), jfloat>(); }
inline jdouble SQLInput::readDouble() { return call_method<SCAPIX_META_STRING("readDouble"), jdouble>(); }
inline ref<java::math::BigDecimal> SQLInput::readBigDecimal() { return call_method<SCAPIX_META_STRING("readBigDecimal"), ref<java::math::BigDecimal>>(); }
inline ref<link::java::array<jbyte>> SQLInput::readBytes() { return call_method<SCAPIX_META_STRING("readBytes"), ref<link::java::array<jbyte>>>(); }
inline ref<java::sql::Date> SQLInput::readDate() { return call_method<SCAPIX_META_STRING("readDate"), ref<java::sql::Date>>(); }
inline ref<java::sql::Time> SQLInput::readTime() { return call_method<SCAPIX_META_STRING("readTime"), ref<java::sql::Time>>(); }
inline ref<java::sql::Timestamp> SQLInput::readTimestamp() { return call_method<SCAPIX_META_STRING("readTimestamp"), ref<java::sql::Timestamp>>(); }
inline ref<java::io::Reader> SQLInput::readCharacterStream() { return call_method<SCAPIX_META_STRING("readCharacterStream"), ref<java::io::Reader>>(); }
inline ref<java::io::InputStream> SQLInput::readAsciiStream() { return call_method<SCAPIX_META_STRING("readAsciiStream"), ref<java::io::InputStream>>(); }
inline ref<java::io::InputStream> SQLInput::readBinaryStream() { return call_method<SCAPIX_META_STRING("readBinaryStream"), ref<java::io::InputStream>>(); }
inline ref<java::lang::Object> SQLInput::readObject() { return call_method<SCAPIX_META_STRING("readObject"), ref<java::lang::Object>>(); }
inline ref<java::sql::Ref> SQLInput::readRef() { return call_method<SCAPIX_META_STRING("readRef"), ref<java::sql::Ref>>(); }
inline ref<java::sql::Blob> SQLInput::readBlob() { return call_method<SCAPIX_META_STRING("readBlob"), ref<java::sql::Blob>>(); }
inline ref<java::sql::Clob> SQLInput::readClob() { return call_method<SCAPIX_META_STRING("readClob"), ref<java::sql::Clob>>(); }
inline ref<java::sql::Array> SQLInput::readArray() { return call_method<SCAPIX_META_STRING("readArray"), ref<java::sql::Array>>(); }
inline jboolean SQLInput::wasNull() { return call_method<SCAPIX_META_STRING("wasNull"), jboolean>(); }
inline ref<java::net::URL> SQLInput::readURL() { return call_method<SCAPIX_META_STRING("readURL"), ref<java::net::URL>>(); }
inline ref<java::sql::NClob> SQLInput::readNClob() { return call_method<SCAPIX_META_STRING("readNClob"), ref<java::sql::NClob>>(); }
inline ref<java::lang::String> SQLInput::readNString() { return call_method<SCAPIX_META_STRING("readNString"), ref<java::lang::String>>(); }
inline ref<java::sql::SQLXML> SQLInput::readSQLXML() { return call_method<SCAPIX_META_STRING("readSQLXML"), ref<java::sql::SQLXML>>(); }
inline ref<java::sql::RowId> SQLInput::readRowId() { return call_method<SCAPIX_META_STRING("readRowId"), ref<java::sql::RowId>>(); }

} // namespace java::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SQL_SQLINPUT_H
