// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTSTORE_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTSTORE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class Provider; }
namespace java::security::cert { class CRLSelector; }
namespace java::security::cert { class CertSelector; }
namespace java::security::cert { class CertStoreParameters; }
namespace java::util { class Collection; }

namespace java::security::cert {

class CertStore : public object_base<SCAPIX_META_STRING("java/security/cert/CertStore"),
	java::lang::Object>
{
public:

	ref<java::util::Collection> getCertificates(ref<java::security::cert::CertSelector> selector);
	ref<java::util::Collection> getCRLs(ref<java::security::cert::CRLSelector> selector);
	static ref<java::security::cert::CertStore> getInstance(ref<java::lang::String> type, ref<java::security::cert::CertStoreParameters> params);
	static ref<java::security::cert::CertStore> getInstance(ref<java::lang::String> type, ref<java::security::cert::CertStoreParameters> params, ref<java::lang::String> provider);
	static ref<java::security::cert::CertStore> getInstance(ref<java::lang::String> type, ref<java::security::cert::CertStoreParameters> params, ref<java::security::Provider> provider);
	ref<java::security::cert::CertStoreParameters> getCertStoreParameters();
	ref<java::lang::String> getType();
	ref<java::security::Provider> getProvider();
	static ref<java::lang::String> getDefaultType();

protected:

	CertStore(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/cert/CRLSelector.h>
#include <scapix/java_api/java/security/cert/CertSelector.h>
#include <scapix/java_api/java/security/cert/CertStoreParameters.h>
#include <scapix/java_api/java/util/Collection.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<java::util::Collection> CertStore::getCertificates(ref<java::security::cert::CertSelector> selector) { return call_method<SCAPIX_META_STRING("getCertificates"), ref<java::util::Collection>>(selector); }
inline ref<java::util::Collection> CertStore::getCRLs(ref<java::security::cert::CRLSelector> selector) { return call_method<SCAPIX_META_STRING("getCRLs"), ref<java::util::Collection>>(selector); }
inline ref<java::security::cert::CertStore> CertStore::getInstance(ref<java::lang::String> type, ref<java::security::cert::CertStoreParameters> params) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::cert::CertStore>>(type, params); }
inline ref<java::security::cert::CertStore> CertStore::getInstance(ref<java::lang::String> type, ref<java::security::cert::CertStoreParameters> params, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::cert::CertStore>>(type, params, provider); }
inline ref<java::security::cert::CertStore> CertStore::getInstance(ref<java::lang::String> type, ref<java::security::cert::CertStoreParameters> params, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::cert::CertStore>>(type, params, provider); }
inline ref<java::security::cert::CertStoreParameters> CertStore::getCertStoreParameters() { return call_method<SCAPIX_META_STRING("getCertStoreParameters"), ref<java::security::cert::CertStoreParameters>>(); }
inline ref<java::lang::String> CertStore::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }
inline ref<java::security::Provider> CertStore::getProvider() { return call_method<SCAPIX_META_STRING("getProvider"), ref<java::security::Provider>>(); }
inline ref<java::lang::String> CertStore::getDefaultType() { return call_static_method<SCAPIX_META_STRING("getDefaultType"), ref<java::lang::String>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTSTORE_H
