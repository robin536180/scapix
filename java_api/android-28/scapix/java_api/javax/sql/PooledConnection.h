// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_SQL_POOLEDCONNECTION_H
#define SCAPIX_JAVAX_SQL_POOLEDCONNECTION_H

namespace scapix::java_api {

namespace java::sql { class Connection; }
namespace javax::sql { class ConnectionEventListener; }
namespace javax::sql { class StatementEventListener; }

namespace javax::sql {

class PooledConnection : public object_base<SCAPIX_META_STRING("javax/sql/PooledConnection"),
	java::lang::Object>
{
public:

	ref<java::sql::Connection> getConnection();
	void close();
	void addConnectionEventListener(ref<javax::sql::ConnectionEventListener> p1);
	void removeConnectionEventListener(ref<javax::sql::ConnectionEventListener> p1);
	void addStatementEventListener(ref<javax::sql::StatementEventListener> p1);
	void removeStatementEventListener(ref<javax::sql::StatementEventListener> p1);

protected:

	PooledConnection(handle_type h) : base_(h) {}

};

} // namespace javax::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/sql/Connection.h>
#include <scapix/java_api/javax/sql/ConnectionEventListener.h>
#include <scapix/java_api/javax/sql/StatementEventListener.h>

namespace scapix::java_api {
namespace javax::sql {

inline ref<java::sql::Connection> PooledConnection::getConnection() { return call_method<SCAPIX_META_STRING("getConnection"), ref<java::sql::Connection>>(); }
inline void PooledConnection::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void PooledConnection::addConnectionEventListener(ref<javax::sql::ConnectionEventListener> p1) { return call_method<SCAPIX_META_STRING("addConnectionEventListener"), void>(p1); }
inline void PooledConnection::removeConnectionEventListener(ref<javax::sql::ConnectionEventListener> p1) { return call_method<SCAPIX_META_STRING("removeConnectionEventListener"), void>(p1); }
inline void PooledConnection::addStatementEventListener(ref<javax::sql::StatementEventListener> p1) { return call_method<SCAPIX_META_STRING("addStatementEventListener"), void>(p1); }
inline void PooledConnection::removeStatementEventListener(ref<javax::sql::StatementEventListener> p1) { return call_method<SCAPIX_META_STRING("removeStatementEventListener"), void>(p1); }

} // namespace javax::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SQL_POOLEDCONNECTION_H
