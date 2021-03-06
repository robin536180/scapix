// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/CertPathChecker.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_H
#define SCAPIX_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_H

namespace scapix::java_api {

namespace java::security::cert { class Certificate; }
namespace java::util { class Collection; }
namespace java::util { class Set; }

namespace java::security::cert {

class PKIXCertPathChecker : public object_base<SCAPIX_META_STRING("java/security/cert/PKIXCertPathChecker"),
	java::lang::Object,
	java::security::cert::CertPathChecker,
	java::lang::Cloneable>
{
public:

	void init(jboolean p1);
	jboolean isForwardCheckingSupported();
	ref<java::util::Set> getSupportedExtensions();
	void check(ref<java::security::cert::Certificate> p1, ref<java::util::Collection> p2);
	void check(ref<java::security::cert::Certificate> cert);
	ref<java::lang::Object> clone();

protected:

	PKIXCertPathChecker(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::security::cert {

inline void PKIXCertPathChecker::init(jboolean p1) { return call_method<SCAPIX_META_STRING("init"), void>(p1); }
inline jboolean PKIXCertPathChecker::isForwardCheckingSupported() { return call_method<SCAPIX_META_STRING("isForwardCheckingSupported"), jboolean>(); }
inline ref<java::util::Set> PKIXCertPathChecker::getSupportedExtensions() { return call_method<SCAPIX_META_STRING("getSupportedExtensions"), ref<java::util::Set>>(); }
inline void PKIXCertPathChecker::check(ref<java::security::cert::Certificate> p1, ref<java::util::Collection> p2) { return call_method<SCAPIX_META_STRING("check"), void>(p1, p2); }
inline void PKIXCertPathChecker::check(ref<java::security::cert::Certificate> cert) { return call_method<SCAPIX_META_STRING("check"), void>(cert); }
inline ref<java::lang::Object> PKIXCertPathChecker::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER_H
