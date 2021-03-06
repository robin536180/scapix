// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_COLLECTIONS_H
#define SCAPIX_JAVA_UTIL_COLLECTIONS_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::util { class ArrayList; }
namespace java::util { class Collection; }
namespace java::util { class Comparator; }
namespace java::util { class Deque; }
namespace java::util { class Enumeration; }
namespace java::util { class Iterator; }
namespace java::util { class List; }
namespace java::util { class ListIterator; }
namespace java::util { class Map; }
namespace java::util { class NavigableMap; }
namespace java::util { class NavigableSet; }
namespace java::util { class Queue; }
namespace java::util { class Random; }
namespace java::util { class Set; }
namespace java::util { class SortedMap; }
namespace java::util { class SortedSet; }

namespace java::util {

class Collections : public object_base<SCAPIX_META_STRING("java/util/Collections"),
	java::lang::Object>
{
public:

	static ref<java::util::Set> EMPTY_SET_();
	static ref<java::util::List> EMPTY_LIST_();
	static ref<java::util::Map> EMPTY_MAP_();

	static void sort(ref<java::util::List> list);
	static void sort(ref<java::util::List> list, ref<java::util::Comparator> c);
	static jint binarySearch(ref<java::util::List> list, ref<java::lang::Object> key);
	static jint binarySearch(ref<java::util::List> list, ref<java::lang::Object> key, ref<java::util::Comparator> c);
	static void reverse(ref<java::util::List> list);
	static void shuffle(ref<java::util::List> list);
	static void shuffle(ref<java::util::List> list, ref<java::util::Random> rnd);
	static void swap(ref<java::util::List> list, jint i, jint j);
	static void fill(ref<java::util::List> list, ref<java::lang::Object> obj);
	static void copy(ref<java::util::List> dest, ref<java::util::List> src);
	static ref<java::lang::Object> min(ref<java::util::Collection> coll);
	static ref<java::lang::Object> min(ref<java::util::Collection> coll, ref<java::util::Comparator> comp);
	static ref<java::lang::Object> max(ref<java::util::Collection> coll);
	static ref<java::lang::Object> max(ref<java::util::Collection> coll, ref<java::util::Comparator> comp);
	static void rotate(ref<java::util::List> list, jint distance);
	static jboolean replaceAll(ref<java::util::List> list, ref<java::lang::Object> oldVal, ref<java::lang::Object> newVal);
	static jint indexOfSubList(ref<java::util::List> source, ref<java::util::List> target);
	static jint lastIndexOfSubList(ref<java::util::List> source, ref<java::util::List> target);
	static ref<java::util::Collection> unmodifiableCollection(ref<java::util::Collection> c);
	static ref<java::util::Set> unmodifiableSet(ref<java::util::Set> s);
	static ref<java::util::SortedSet> unmodifiableSortedSet(ref<java::util::SortedSet> s);
	static ref<java::util::NavigableSet> unmodifiableNavigableSet(ref<java::util::NavigableSet> s);
	static ref<java::util::List> unmodifiableList(ref<java::util::List> list);
	static ref<java::util::Map> unmodifiableMap(ref<java::util::Map> m);
	static ref<java::util::SortedMap> unmodifiableSortedMap(ref<java::util::SortedMap> m);
	static ref<java::util::NavigableMap> unmodifiableNavigableMap(ref<java::util::NavigableMap> m);
	static ref<java::util::Collection> synchronizedCollection(ref<java::util::Collection> c);
	static ref<java::util::Set> synchronizedSet(ref<java::util::Set> s);
	static ref<java::util::SortedSet> synchronizedSortedSet(ref<java::util::SortedSet> s);
	static ref<java::util::NavigableSet> synchronizedNavigableSet(ref<java::util::NavigableSet> s);
	static ref<java::util::List> synchronizedList(ref<java::util::List> list);
	static ref<java::util::Map> synchronizedMap(ref<java::util::Map> m);
	static ref<java::util::SortedMap> synchronizedSortedMap(ref<java::util::SortedMap> m);
	static ref<java::util::NavigableMap> synchronizedNavigableMap(ref<java::util::NavigableMap> m);
	static ref<java::util::Collection> checkedCollection(ref<java::util::Collection> c, ref<java::lang::Class> type);
	static ref<java::util::Queue> checkedQueue(ref<java::util::Queue> queue, ref<java::lang::Class> type);
	static ref<java::util::Set> checkedSet(ref<java::util::Set> s, ref<java::lang::Class> type);
	static ref<java::util::SortedSet> checkedSortedSet(ref<java::util::SortedSet> s, ref<java::lang::Class> type);
	static ref<java::util::NavigableSet> checkedNavigableSet(ref<java::util::NavigableSet> s, ref<java::lang::Class> type);
	static ref<java::util::List> checkedList(ref<java::util::List> list, ref<java::lang::Class> type);
	static ref<java::util::Map> checkedMap(ref<java::util::Map> m, ref<java::lang::Class> keyType, ref<java::lang::Class> valueType);
	static ref<java::util::SortedMap> checkedSortedMap(ref<java::util::SortedMap> m, ref<java::lang::Class> keyType, ref<java::lang::Class> valueType);
	static ref<java::util::NavigableMap> checkedNavigableMap(ref<java::util::NavigableMap> m, ref<java::lang::Class> keyType, ref<java::lang::Class> valueType);
	static ref<java::util::Iterator> emptyIterator();
	static ref<java::util::ListIterator> emptyListIterator();
	static ref<java::util::Enumeration> emptyEnumeration();
	static ref<java::util::Set> emptySet();
	static ref<java::util::SortedSet> emptySortedSet();
	static ref<java::util::NavigableSet> emptyNavigableSet();
	static ref<java::util::List> emptyList();
	static ref<java::util::Map> emptyMap();
	static ref<java::util::SortedMap> emptySortedMap();
	static ref<java::util::NavigableMap> emptyNavigableMap();
	static ref<java::util::Set> singleton(ref<java::lang::Object> o);
	static ref<java::util::List> singletonList(ref<java::lang::Object> o);
	static ref<java::util::Map> singletonMap(ref<java::lang::Object> key, ref<java::lang::Object> value);
	static ref<java::util::List> nCopies(jint n, ref<java::lang::Object> o);
	static ref<java::util::Comparator> reverseOrder();
	static ref<java::util::Comparator> reverseOrder(ref<java::util::Comparator> cmp);
	static ref<java::util::Enumeration> enumeration(ref<java::util::Collection> c);
	static ref<java::util::ArrayList> list(ref<java::util::Enumeration> e);
	static jint frequency(ref<java::util::Collection> c, ref<java::lang::Object> o);
	static jboolean disjoint(ref<java::util::Collection> c1, ref<java::util::Collection> c2);
	static jboolean addAll(ref<java::util::Collection> c, ref<link::java::array<java::lang::Object>> elements);
	static ref<java::util::Set> newSetFromMap(ref<java::util::Map> map);
	static ref<java::util::Queue> asLifoQueue(ref<java::util::Deque> deque);

protected:

	Collections(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Deque.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/NavigableMap.h>
#include <scapix/java_api/java/util/NavigableSet.h>
#include <scapix/java_api/java/util/Queue.h>
#include <scapix/java_api/java/util/Random.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/SortedMap.h>
#include <scapix/java_api/java/util/SortedSet.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::Set> Collections::EMPTY_SET_() { return get_static_field<SCAPIX_META_STRING("EMPTY_SET"), ref<java::util::Set>>(); }
inline ref<java::util::List> Collections::EMPTY_LIST_() { return get_static_field<SCAPIX_META_STRING("EMPTY_LIST"), ref<java::util::List>>(); }
inline ref<java::util::Map> Collections::EMPTY_MAP_() { return get_static_field<SCAPIX_META_STRING("EMPTY_MAP"), ref<java::util::Map>>(); }
inline void Collections::sort(ref<java::util::List> list) { return call_static_method<SCAPIX_META_STRING("sort"), void>(list); }
inline void Collections::sort(ref<java::util::List> list, ref<java::util::Comparator> c) { return call_static_method<SCAPIX_META_STRING("sort"), void>(list, c); }
inline jint Collections::binarySearch(ref<java::util::List> list, ref<java::lang::Object> key) { return call_static_method<SCAPIX_META_STRING("binarySearch"), jint>(list, key); }
inline jint Collections::binarySearch(ref<java::util::List> list, ref<java::lang::Object> key, ref<java::util::Comparator> c) { return call_static_method<SCAPIX_META_STRING("binarySearch"), jint>(list, key, c); }
inline void Collections::reverse(ref<java::util::List> list) { return call_static_method<SCAPIX_META_STRING("reverse"), void>(list); }
inline void Collections::shuffle(ref<java::util::List> list) { return call_static_method<SCAPIX_META_STRING("shuffle"), void>(list); }
inline void Collections::shuffle(ref<java::util::List> list, ref<java::util::Random> rnd) { return call_static_method<SCAPIX_META_STRING("shuffle"), void>(list, rnd); }
inline void Collections::swap(ref<java::util::List> list, jint i, jint j) { return call_static_method<SCAPIX_META_STRING("swap"), void>(list, i, j); }
inline void Collections::fill(ref<java::util::List> list, ref<java::lang::Object> obj) { return call_static_method<SCAPIX_META_STRING("fill"), void>(list, obj); }
inline void Collections::copy(ref<java::util::List> dest, ref<java::util::List> src) { return call_static_method<SCAPIX_META_STRING("copy"), void>(dest, src); }
inline ref<java::lang::Object> Collections::min(ref<java::util::Collection> coll) { return call_static_method<SCAPIX_META_STRING("min"), ref<java::lang::Object>>(coll); }
inline ref<java::lang::Object> Collections::min(ref<java::util::Collection> coll, ref<java::util::Comparator> comp) { return call_static_method<SCAPIX_META_STRING("min"), ref<java::lang::Object>>(coll, comp); }
inline ref<java::lang::Object> Collections::max(ref<java::util::Collection> coll) { return call_static_method<SCAPIX_META_STRING("max"), ref<java::lang::Object>>(coll); }
inline ref<java::lang::Object> Collections::max(ref<java::util::Collection> coll, ref<java::util::Comparator> comp) { return call_static_method<SCAPIX_META_STRING("max"), ref<java::lang::Object>>(coll, comp); }
inline void Collections::rotate(ref<java::util::List> list, jint distance) { return call_static_method<SCAPIX_META_STRING("rotate"), void>(list, distance); }
inline jboolean Collections::replaceAll(ref<java::util::List> list, ref<java::lang::Object> oldVal, ref<java::lang::Object> newVal) { return call_static_method<SCAPIX_META_STRING("replaceAll"), jboolean>(list, oldVal, newVal); }
inline jint Collections::indexOfSubList(ref<java::util::List> source, ref<java::util::List> target) { return call_static_method<SCAPIX_META_STRING("indexOfSubList"), jint>(source, target); }
inline jint Collections::lastIndexOfSubList(ref<java::util::List> source, ref<java::util::List> target) { return call_static_method<SCAPIX_META_STRING("lastIndexOfSubList"), jint>(source, target); }
inline ref<java::util::Collection> Collections::unmodifiableCollection(ref<java::util::Collection> c) { return call_static_method<SCAPIX_META_STRING("unmodifiableCollection"), ref<java::util::Collection>>(c); }
inline ref<java::util::Set> Collections::unmodifiableSet(ref<java::util::Set> s) { return call_static_method<SCAPIX_META_STRING("unmodifiableSet"), ref<java::util::Set>>(s); }
inline ref<java::util::SortedSet> Collections::unmodifiableSortedSet(ref<java::util::SortedSet> s) { return call_static_method<SCAPIX_META_STRING("unmodifiableSortedSet"), ref<java::util::SortedSet>>(s); }
inline ref<java::util::NavigableSet> Collections::unmodifiableNavigableSet(ref<java::util::NavigableSet> s) { return call_static_method<SCAPIX_META_STRING("unmodifiableNavigableSet"), ref<java::util::NavigableSet>>(s); }
inline ref<java::util::List> Collections::unmodifiableList(ref<java::util::List> list) { return call_static_method<SCAPIX_META_STRING("unmodifiableList"), ref<java::util::List>>(list); }
inline ref<java::util::Map> Collections::unmodifiableMap(ref<java::util::Map> m) { return call_static_method<SCAPIX_META_STRING("unmodifiableMap"), ref<java::util::Map>>(m); }
inline ref<java::util::SortedMap> Collections::unmodifiableSortedMap(ref<java::util::SortedMap> m) { return call_static_method<SCAPIX_META_STRING("unmodifiableSortedMap"), ref<java::util::SortedMap>>(m); }
inline ref<java::util::NavigableMap> Collections::unmodifiableNavigableMap(ref<java::util::NavigableMap> m) { return call_static_method<SCAPIX_META_STRING("unmodifiableNavigableMap"), ref<java::util::NavigableMap>>(m); }
inline ref<java::util::Collection> Collections::synchronizedCollection(ref<java::util::Collection> c) { return call_static_method<SCAPIX_META_STRING("synchronizedCollection"), ref<java::util::Collection>>(c); }
inline ref<java::util::Set> Collections::synchronizedSet(ref<java::util::Set> s) { return call_static_method<SCAPIX_META_STRING("synchronizedSet"), ref<java::util::Set>>(s); }
inline ref<java::util::SortedSet> Collections::synchronizedSortedSet(ref<java::util::SortedSet> s) { return call_static_method<SCAPIX_META_STRING("synchronizedSortedSet"), ref<java::util::SortedSet>>(s); }
inline ref<java::util::NavigableSet> Collections::synchronizedNavigableSet(ref<java::util::NavigableSet> s) { return call_static_method<SCAPIX_META_STRING("synchronizedNavigableSet"), ref<java::util::NavigableSet>>(s); }
inline ref<java::util::List> Collections::synchronizedList(ref<java::util::List> list) { return call_static_method<SCAPIX_META_STRING("synchronizedList"), ref<java::util::List>>(list); }
inline ref<java::util::Map> Collections::synchronizedMap(ref<java::util::Map> m) { return call_static_method<SCAPIX_META_STRING("synchronizedMap"), ref<java::util::Map>>(m); }
inline ref<java::util::SortedMap> Collections::synchronizedSortedMap(ref<java::util::SortedMap> m) { return call_static_method<SCAPIX_META_STRING("synchronizedSortedMap"), ref<java::util::SortedMap>>(m); }
inline ref<java::util::NavigableMap> Collections::synchronizedNavigableMap(ref<java::util::NavigableMap> m) { return call_static_method<SCAPIX_META_STRING("synchronizedNavigableMap"), ref<java::util::NavigableMap>>(m); }
inline ref<java::util::Collection> Collections::checkedCollection(ref<java::util::Collection> c, ref<java::lang::Class> type) { return call_static_method<SCAPIX_META_STRING("checkedCollection"), ref<java::util::Collection>>(c, type); }
inline ref<java::util::Queue> Collections::checkedQueue(ref<java::util::Queue> queue, ref<java::lang::Class> type) { return call_static_method<SCAPIX_META_STRING("checkedQueue"), ref<java::util::Queue>>(queue, type); }
inline ref<java::util::Set> Collections::checkedSet(ref<java::util::Set> s, ref<java::lang::Class> type) { return call_static_method<SCAPIX_META_STRING("checkedSet"), ref<java::util::Set>>(s, type); }
inline ref<java::util::SortedSet> Collections::checkedSortedSet(ref<java::util::SortedSet> s, ref<java::lang::Class> type) { return call_static_method<SCAPIX_META_STRING("checkedSortedSet"), ref<java::util::SortedSet>>(s, type); }
inline ref<java::util::NavigableSet> Collections::checkedNavigableSet(ref<java::util::NavigableSet> s, ref<java::lang::Class> type) { return call_static_method<SCAPIX_META_STRING("checkedNavigableSet"), ref<java::util::NavigableSet>>(s, type); }
inline ref<java::util::List> Collections::checkedList(ref<java::util::List> list, ref<java::lang::Class> type) { return call_static_method<SCAPIX_META_STRING("checkedList"), ref<java::util::List>>(list, type); }
inline ref<java::util::Map> Collections::checkedMap(ref<java::util::Map> m, ref<java::lang::Class> keyType, ref<java::lang::Class> valueType) { return call_static_method<SCAPIX_META_STRING("checkedMap"), ref<java::util::Map>>(m, keyType, valueType); }
inline ref<java::util::SortedMap> Collections::checkedSortedMap(ref<java::util::SortedMap> m, ref<java::lang::Class> keyType, ref<java::lang::Class> valueType) { return call_static_method<SCAPIX_META_STRING("checkedSortedMap"), ref<java::util::SortedMap>>(m, keyType, valueType); }
inline ref<java::util::NavigableMap> Collections::checkedNavigableMap(ref<java::util::NavigableMap> m, ref<java::lang::Class> keyType, ref<java::lang::Class> valueType) { return call_static_method<SCAPIX_META_STRING("checkedNavigableMap"), ref<java::util::NavigableMap>>(m, keyType, valueType); }
inline ref<java::util::Iterator> Collections::emptyIterator() { return call_static_method<SCAPIX_META_STRING("emptyIterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::ListIterator> Collections::emptyListIterator() { return call_static_method<SCAPIX_META_STRING("emptyListIterator"), ref<java::util::ListIterator>>(); }
inline ref<java::util::Enumeration> Collections::emptyEnumeration() { return call_static_method<SCAPIX_META_STRING("emptyEnumeration"), ref<java::util::Enumeration>>(); }
inline ref<java::util::Set> Collections::emptySet() { return call_static_method<SCAPIX_META_STRING("emptySet"), ref<java::util::Set>>(); }
inline ref<java::util::SortedSet> Collections::emptySortedSet() { return call_static_method<SCAPIX_META_STRING("emptySortedSet"), ref<java::util::SortedSet>>(); }
inline ref<java::util::NavigableSet> Collections::emptyNavigableSet() { return call_static_method<SCAPIX_META_STRING("emptyNavigableSet"), ref<java::util::NavigableSet>>(); }
inline ref<java::util::List> Collections::emptyList() { return call_static_method<SCAPIX_META_STRING("emptyList"), ref<java::util::List>>(); }
inline ref<java::util::Map> Collections::emptyMap() { return call_static_method<SCAPIX_META_STRING("emptyMap"), ref<java::util::Map>>(); }
inline ref<java::util::SortedMap> Collections::emptySortedMap() { return call_static_method<SCAPIX_META_STRING("emptySortedMap"), ref<java::util::SortedMap>>(); }
inline ref<java::util::NavigableMap> Collections::emptyNavigableMap() { return call_static_method<SCAPIX_META_STRING("emptyNavigableMap"), ref<java::util::NavigableMap>>(); }
inline ref<java::util::Set> Collections::singleton(ref<java::lang::Object> o) { return call_static_method<SCAPIX_META_STRING("singleton"), ref<java::util::Set>>(o); }
inline ref<java::util::List> Collections::singletonList(ref<java::lang::Object> o) { return call_static_method<SCAPIX_META_STRING("singletonList"), ref<java::util::List>>(o); }
inline ref<java::util::Map> Collections::singletonMap(ref<java::lang::Object> key, ref<java::lang::Object> value) { return call_static_method<SCAPIX_META_STRING("singletonMap"), ref<java::util::Map>>(key, value); }
inline ref<java::util::List> Collections::nCopies(jint n, ref<java::lang::Object> o) { return call_static_method<SCAPIX_META_STRING("nCopies"), ref<java::util::List>>(n, o); }
inline ref<java::util::Comparator> Collections::reverseOrder() { return call_static_method<SCAPIX_META_STRING("reverseOrder"), ref<java::util::Comparator>>(); }
inline ref<java::util::Comparator> Collections::reverseOrder(ref<java::util::Comparator> cmp) { return call_static_method<SCAPIX_META_STRING("reverseOrder"), ref<java::util::Comparator>>(cmp); }
inline ref<java::util::Enumeration> Collections::enumeration(ref<java::util::Collection> c) { return call_static_method<SCAPIX_META_STRING("enumeration"), ref<java::util::Enumeration>>(c); }
inline ref<java::util::ArrayList> Collections::list(ref<java::util::Enumeration> e) { return call_static_method<SCAPIX_META_STRING("list"), ref<java::util::ArrayList>>(e); }
inline jint Collections::frequency(ref<java::util::Collection> c, ref<java::lang::Object> o) { return call_static_method<SCAPIX_META_STRING("frequency"), jint>(c, o); }
inline jboolean Collections::disjoint(ref<java::util::Collection> c1, ref<java::util::Collection> c2) { return call_static_method<SCAPIX_META_STRING("disjoint"), jboolean>(c1, c2); }
inline jboolean Collections::addAll(ref<java::util::Collection> c, ref<link::java::array<java::lang::Object>> elements) { return call_static_method<SCAPIX_META_STRING("addAll"), jboolean>(c, elements); }
inline ref<java::util::Set> Collections::newSetFromMap(ref<java::util::Map> map) { return call_static_method<SCAPIX_META_STRING("newSetFromMap"), ref<java::util::Set>>(map); }
inline ref<java::util::Queue> Collections::asLifoQueue(ref<java::util::Deque> deque) { return call_static_method<SCAPIX_META_STRING("asLifoQueue"), ref<java::util::Queue>>(deque); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_COLLECTIONS_H
