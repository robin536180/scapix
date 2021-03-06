// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/ClassLoader.h>

#ifndef SCAPIX_DALVIK_SYSTEM_BASEDEXCLASSLOADER_H
#define SCAPIX_DALVIK_SYSTEM_BASEDEXCLASSLOADER_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::lang { class String; }

namespace dalvik::system {

class BaseDexClassLoader : public object_base<SCAPIX_META_STRING("dalvik/system/BaseDexClassLoader"),
	java::lang::ClassLoader>
{
public:

	static ref<BaseDexClassLoader> new_object(ref<java::lang::String> dexPath, ref<java::io::File> optimizedDirectory, ref<java::lang::String> librarySearchPath, ref<java::lang::ClassLoader> parent);
	ref<java::lang::String> findLibrary(ref<java::lang::String> name);
	ref<java::lang::String> toString();

protected:

	BaseDexClassLoader(handle_type h) : base_(h) {}

};

} // namespace dalvik::system
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace dalvik::system {

inline ref<BaseDexClassLoader> BaseDexClassLoader::new_object(ref<java::lang::String> dexPath, ref<java::io::File> optimizedDirectory, ref<java::lang::String> librarySearchPath, ref<java::lang::ClassLoader> parent) { return base_::new_object(dexPath, optimizedDirectory, librarySearchPath, parent); }
inline ref<java::lang::String> BaseDexClassLoader::findLibrary(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("findLibrary"), ref<java::lang::String>>(name); }
inline ref<java::lang::String> BaseDexClassLoader::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace dalvik::system
} // namespace scapix::java_api

#endif // SCAPIX_DALVIK_SYSTEM_BASEDEXCLASSLOADER_H
