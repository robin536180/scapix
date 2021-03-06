// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_JSON_JSONARRAY_H
#define SCAPIX_ORG_JSON_JSONARRAY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Collection; }
namespace org::json { class JSONObject; }
namespace org::json { class JSONTokener; }

namespace org::json {

class JSONArray : public object_base<SCAPIX_META_STRING("org/json/JSONArray"),
	java::lang::Object>
{
public:

	static ref<JSONArray> new_object();
	static ref<JSONArray> new_object(ref<java::util::Collection> copyFrom);
	static ref<JSONArray> new_object(ref<org::json::JSONTokener> readFrom);
	static ref<JSONArray> new_object(ref<java::lang::String> json);
	static ref<JSONArray> new_object(ref<java::lang::Object> array);
	jint length();
	ref<org::json::JSONArray> put(jboolean value);
	ref<org::json::JSONArray> put(jdouble value);
	ref<org::json::JSONArray> put(jint value);
	ref<org::json::JSONArray> put(jlong value);
	ref<org::json::JSONArray> put(ref<java::lang::Object> value);
	ref<org::json::JSONArray> put(jint index, jboolean value);
	ref<org::json::JSONArray> put(jint index, jdouble value);
	ref<org::json::JSONArray> put(jint index, jint value);
	ref<org::json::JSONArray> put(jint index, jlong value);
	ref<org::json::JSONArray> put(jint index, ref<java::lang::Object> value);
	jboolean isNull(jint index);
	ref<java::lang::Object> get(jint index);
	ref<java::lang::Object> opt(jint index);
	ref<java::lang::Object> remove(jint index);
	jboolean getBoolean(jint index);
	jboolean optBoolean(jint index);
	jboolean optBoolean(jint index, jboolean fallback);
	jdouble getDouble(jint index);
	jdouble optDouble(jint index);
	jdouble optDouble(jint index, jdouble fallback);
	jint getInt(jint index);
	jint optInt(jint index);
	jint optInt(jint index, jint fallback);
	jlong getLong(jint index);
	jlong optLong(jint index);
	jlong optLong(jint index, jlong fallback);
	ref<java::lang::String> getString(jint index);
	ref<java::lang::String> optString(jint index);
	ref<java::lang::String> optString(jint index, ref<java::lang::String> fallback);
	ref<org::json::JSONArray> getJSONArray(jint index);
	ref<org::json::JSONArray> optJSONArray(jint index);
	ref<org::json::JSONObject> getJSONObject(jint index);
	ref<org::json::JSONObject> optJSONObject(jint index);
	ref<org::json::JSONObject> toJSONObject(ref<org::json::JSONArray> names);
	ref<java::lang::String> join(ref<java::lang::String> separator);
	ref<java::lang::String> toString();
	ref<java::lang::String> toString(jint indentSpaces);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();

protected:

	JSONArray(handle_type h) : base_(h) {}

};

} // namespace org::json
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/org/json/JSONObject.h>
#include <scapix/java_api/org/json/JSONTokener.h>

namespace scapix::java_api {
namespace org::json {

inline ref<JSONArray> JSONArray::new_object() { return base_::new_object(); }
inline ref<JSONArray> JSONArray::new_object(ref<java::util::Collection> copyFrom) { return base_::new_object(copyFrom); }
inline ref<JSONArray> JSONArray::new_object(ref<org::json::JSONTokener> readFrom) { return base_::new_object(readFrom); }
inline ref<JSONArray> JSONArray::new_object(ref<java::lang::String> json) { return base_::new_object(json); }
inline ref<JSONArray> JSONArray::new_object(ref<java::lang::Object> array) { return base_::new_object(array); }
inline jint JSONArray::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline ref<org::json::JSONArray> JSONArray::put(jboolean value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(value); }
inline ref<org::json::JSONArray> JSONArray::put(jdouble value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(value); }
inline ref<org::json::JSONArray> JSONArray::put(jint value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(value); }
inline ref<org::json::JSONArray> JSONArray::put(jlong value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(value); }
inline ref<org::json::JSONArray> JSONArray::put(ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(value); }
inline ref<org::json::JSONArray> JSONArray::put(jint index, jboolean value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(index, value); }
inline ref<org::json::JSONArray> JSONArray::put(jint index, jdouble value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(index, value); }
inline ref<org::json::JSONArray> JSONArray::put(jint index, jint value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(index, value); }
inline ref<org::json::JSONArray> JSONArray::put(jint index, jlong value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(index, value); }
inline ref<org::json::JSONArray> JSONArray::put(jint index, ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("put"), ref<org::json::JSONArray>>(index, value); }
inline jboolean JSONArray::isNull(jint index) { return call_method<SCAPIX_META_STRING("isNull"), jboolean>(index); }
inline ref<java::lang::Object> JSONArray::get(jint index) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(index); }
inline ref<java::lang::Object> JSONArray::opt(jint index) { return call_method<SCAPIX_META_STRING("opt"), ref<java::lang::Object>>(index); }
inline ref<java::lang::Object> JSONArray::remove(jint index) { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(index); }
inline jboolean JSONArray::getBoolean(jint index) { return call_method<SCAPIX_META_STRING("getBoolean"), jboolean>(index); }
inline jboolean JSONArray::optBoolean(jint index) { return call_method<SCAPIX_META_STRING("optBoolean"), jboolean>(index); }
inline jboolean JSONArray::optBoolean(jint index, jboolean fallback) { return call_method<SCAPIX_META_STRING("optBoolean"), jboolean>(index, fallback); }
inline jdouble JSONArray::getDouble(jint index) { return call_method<SCAPIX_META_STRING("getDouble"), jdouble>(index); }
inline jdouble JSONArray::optDouble(jint index) { return call_method<SCAPIX_META_STRING("optDouble"), jdouble>(index); }
inline jdouble JSONArray::optDouble(jint index, jdouble fallback) { return call_method<SCAPIX_META_STRING("optDouble"), jdouble>(index, fallback); }
inline jint JSONArray::getInt(jint index) { return call_method<SCAPIX_META_STRING("getInt"), jint>(index); }
inline jint JSONArray::optInt(jint index) { return call_method<SCAPIX_META_STRING("optInt"), jint>(index); }
inline jint JSONArray::optInt(jint index, jint fallback) { return call_method<SCAPIX_META_STRING("optInt"), jint>(index, fallback); }
inline jlong JSONArray::getLong(jint index) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(index); }
inline jlong JSONArray::optLong(jint index) { return call_method<SCAPIX_META_STRING("optLong"), jlong>(index); }
inline jlong JSONArray::optLong(jint index, jlong fallback) { return call_method<SCAPIX_META_STRING("optLong"), jlong>(index, fallback); }
inline ref<java::lang::String> JSONArray::getString(jint index) { return call_method<SCAPIX_META_STRING("getString"), ref<java::lang::String>>(index); }
inline ref<java::lang::String> JSONArray::optString(jint index) { return call_method<SCAPIX_META_STRING("optString"), ref<java::lang::String>>(index); }
inline ref<java::lang::String> JSONArray::optString(jint index, ref<java::lang::String> fallback) { return call_method<SCAPIX_META_STRING("optString"), ref<java::lang::String>>(index, fallback); }
inline ref<org::json::JSONArray> JSONArray::getJSONArray(jint index) { return call_method<SCAPIX_META_STRING("getJSONArray"), ref<org::json::JSONArray>>(index); }
inline ref<org::json::JSONArray> JSONArray::optJSONArray(jint index) { return call_method<SCAPIX_META_STRING("optJSONArray"), ref<org::json::JSONArray>>(index); }
inline ref<org::json::JSONObject> JSONArray::getJSONObject(jint index) { return call_method<SCAPIX_META_STRING("getJSONObject"), ref<org::json::JSONObject>>(index); }
inline ref<org::json::JSONObject> JSONArray::optJSONObject(jint index) { return call_method<SCAPIX_META_STRING("optJSONObject"), ref<org::json::JSONObject>>(index); }
inline ref<org::json::JSONObject> JSONArray::toJSONObject(ref<org::json::JSONArray> names) { return call_method<SCAPIX_META_STRING("toJSONObject"), ref<org::json::JSONObject>>(names); }
inline ref<java::lang::String> JSONArray::join(ref<java::lang::String> separator) { return call_method<SCAPIX_META_STRING("join"), ref<java::lang::String>>(separator); }
inline ref<java::lang::String> JSONArray::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> JSONArray::toString(jint indentSpaces) { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(indentSpaces); }
inline jboolean JSONArray::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint JSONArray::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace org::json
} // namespace scapix::java_api

#endif // SCAPIX_ORG_JSON_JSONARRAY_H
