// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>
#include <scapix/java_api/java/util/NavigableSet.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTSET_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTSET_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Comparator; }
namespace java::util { class Iterator; }
namespace java::util { class SortedSet; }
namespace java::util { class Spliterator; }

namespace java::util::concurrent {

class ConcurrentSkipListSet : public object_base<SCAPIX_META_STRING("java/util/concurrent/ConcurrentSkipListSet"),
	java::util::AbstractSet,
	java::util::NavigableSet,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<ConcurrentSkipListSet> new_object();
	static ref<ConcurrentSkipListSet> new_object(ref<java::util::Comparator> comparator);
	static ref<ConcurrentSkipListSet> new_object(ref<java::util::Collection> c);
	static ref<ConcurrentSkipListSet> new_object(ref<java::util::SortedSet> s);
	ref<java::util::concurrent::ConcurrentSkipListSet> clone();
	jint size();
	jboolean isEmpty();
	jboolean contains(ref<java::lang::Object> o);
	jboolean add(ref<java::lang::Object> e);
	jboolean remove(ref<java::lang::Object> o);
	void clear();
	ref<java::util::Iterator> iterator();
	ref<java::util::Iterator> descendingIterator();
	jboolean equals(ref<java::lang::Object> o);
	jboolean removeAll(ref<java::util::Collection> c);
	ref<java::lang::Object> lower(ref<java::lang::Object> e);
	ref<java::lang::Object> floor(ref<java::lang::Object> e);
	ref<java::lang::Object> ceiling(ref<java::lang::Object> e);
	ref<java::lang::Object> higher(ref<java::lang::Object> e);
	ref<java::lang::Object> pollFirst();
	ref<java::lang::Object> pollLast();
	ref<java::util::Comparator> comparator();
	ref<java::lang::Object> first();
	ref<java::lang::Object> last();
	ref<java::util::NavigableSet> subSet(ref<java::lang::Object> fromElement, jboolean fromInclusive, ref<java::lang::Object> toElement, jboolean toInclusive);
	ref<java::util::NavigableSet> headSet(ref<java::lang::Object> toElement, jboolean inclusive);
	ref<java::util::NavigableSet> tailSet(ref<java::lang::Object> fromElement, jboolean inclusive);
	ref<java::util::NavigableSet> subSet(ref<java::lang::Object> fromElement, ref<java::lang::Object> toElement);
	ref<java::util::NavigableSet> headSet(ref<java::lang::Object> toElement);
	ref<java::util::NavigableSet> tailSet(ref<java::lang::Object> fromElement);
	ref<java::util::NavigableSet> descendingSet();
	ref<java::util::Spliterator> spliterator();

protected:

	ConcurrentSkipListSet(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/SortedSet.h>
#include <scapix/java_api/java/util/Spliterator.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<ConcurrentSkipListSet> ConcurrentSkipListSet::new_object() { return base_::new_object(); }
inline ref<ConcurrentSkipListSet> ConcurrentSkipListSet::new_object(ref<java::util::Comparator> comparator) { return base_::new_object(comparator); }
inline ref<ConcurrentSkipListSet> ConcurrentSkipListSet::new_object(ref<java::util::Collection> c) { return base_::new_object(c); }
inline ref<ConcurrentSkipListSet> ConcurrentSkipListSet::new_object(ref<java::util::SortedSet> s) { return base_::new_object(s); }
inline ref<java::util::concurrent::ConcurrentSkipListSet> ConcurrentSkipListSet::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::util::concurrent::ConcurrentSkipListSet>>(); }
inline jint ConcurrentSkipListSet::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean ConcurrentSkipListSet::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jboolean ConcurrentSkipListSet::contains(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(o); }
inline jboolean ConcurrentSkipListSet::add(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("add"), jboolean>(e); }
inline jboolean ConcurrentSkipListSet::remove(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(o); }
inline void ConcurrentSkipListSet::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline ref<java::util::Iterator> ConcurrentSkipListSet::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::Iterator> ConcurrentSkipListSet::descendingIterator() { return call_method<SCAPIX_META_STRING("descendingIterator"), ref<java::util::Iterator>>(); }
inline jboolean ConcurrentSkipListSet::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jboolean ConcurrentSkipListSet::removeAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(c); }
inline ref<java::lang::Object> ConcurrentSkipListSet::lower(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("lower"), ref<java::lang::Object>>(e); }
inline ref<java::lang::Object> ConcurrentSkipListSet::floor(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("floor"), ref<java::lang::Object>>(e); }
inline ref<java::lang::Object> ConcurrentSkipListSet::ceiling(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("ceiling"), ref<java::lang::Object>>(e); }
inline ref<java::lang::Object> ConcurrentSkipListSet::higher(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("higher"), ref<java::lang::Object>>(e); }
inline ref<java::lang::Object> ConcurrentSkipListSet::pollFirst() { return call_method<SCAPIX_META_STRING("pollFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentSkipListSet::pollLast() { return call_method<SCAPIX_META_STRING("pollLast"), ref<java::lang::Object>>(); }
inline ref<java::util::Comparator> ConcurrentSkipListSet::comparator() { return call_method<SCAPIX_META_STRING("comparator"), ref<java::util::Comparator>>(); }
inline ref<java::lang::Object> ConcurrentSkipListSet::first() { return call_method<SCAPIX_META_STRING("first"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ConcurrentSkipListSet::last() { return call_method<SCAPIX_META_STRING("last"), ref<java::lang::Object>>(); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::subSet(ref<java::lang::Object> fromElement, jboolean fromInclusive, ref<java::lang::Object> toElement, jboolean toInclusive) { return call_method<SCAPIX_META_STRING("subSet"), ref<java::util::NavigableSet>>(fromElement, fromInclusive, toElement, toInclusive); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::headSet(ref<java::lang::Object> toElement, jboolean inclusive) { return call_method<SCAPIX_META_STRING("headSet"), ref<java::util::NavigableSet>>(toElement, inclusive); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::tailSet(ref<java::lang::Object> fromElement, jboolean inclusive) { return call_method<SCAPIX_META_STRING("tailSet"), ref<java::util::NavigableSet>>(fromElement, inclusive); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::subSet(ref<java::lang::Object> fromElement, ref<java::lang::Object> toElement) { return call_method<SCAPIX_META_STRING("subSet"), ref<java::util::NavigableSet>>(fromElement, toElement); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::headSet(ref<java::lang::Object> toElement) { return call_method<SCAPIX_META_STRING("headSet"), ref<java::util::NavigableSet>>(toElement); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::tailSet(ref<java::lang::Object> fromElement) { return call_method<SCAPIX_META_STRING("tailSet"), ref<java::util::NavigableSet>>(fromElement); }
inline ref<java::util::NavigableSet> ConcurrentSkipListSet::descendingSet() { return call_method<SCAPIX_META_STRING("descendingSet"), ref<java::util::NavigableSet>>(); }
inline ref<java::util::Spliterator> ConcurrentSkipListSet::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTSET_H
