#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001B System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000021 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000023 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000024 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000025 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000026 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000027 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002B System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000049 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004E System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004F System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000050 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000053 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000056 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000058 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000059 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005A System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005B System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x0000005F TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000060 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000061 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000062 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000063 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000064 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000065 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000066 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000067 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000068 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000069 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000006A System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000006B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006C System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006D System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000006E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000070 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000071 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000072 System.Void System.Linq.Set`1::Resize()
// 0x00000073 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000074 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000075 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000076 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000078 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000079 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000007A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000007B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000007C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000007D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000080 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000081 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000082 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000083 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000084 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000085 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000086 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000087 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000088 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000089 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000008A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000092 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000093 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000095 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000096 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000097 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000098 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A1 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A4 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A5 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000A6 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000000A8 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000000A9 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[169] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[169] = 
{
	6602,
	6602,
	6865,
	6865,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[59] = 
{
	{ 0x02000004, { 90, 4 } },
	{ 0x02000005, { 94, 9 } },
	{ 0x02000006, { 105, 7 } },
	{ 0x02000007, { 114, 10 } },
	{ 0x02000008, { 126, 11 } },
	{ 0x02000009, { 140, 9 } },
	{ 0x0200000A, { 152, 12 } },
	{ 0x0200000B, { 167, 1 } },
	{ 0x0200000C, { 168, 2 } },
	{ 0x0200000D, { 170, 12 } },
	{ 0x0200000E, { 182, 8 } },
	{ 0x0200000F, { 190, 11 } },
	{ 0x02000010, { 201, 2 } },
	{ 0x02000012, { 203, 8 } },
	{ 0x02000014, { 211, 3 } },
	{ 0x02000015, { 216, 5 } },
	{ 0x02000016, { 221, 7 } },
	{ 0x02000017, { 228, 3 } },
	{ 0x02000018, { 231, 7 } },
	{ 0x02000019, { 238, 4 } },
	{ 0x0200001A, { 242, 21 } },
	{ 0x0200001C, { 263, 2 } },
	{ 0x0200001D, { 265, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 3 } },
	{ 0x06000013, { 47, 2 } },
	{ 0x06000014, { 49, 4 } },
	{ 0x06000015, { 53, 4 } },
	{ 0x06000016, { 57, 3 } },
	{ 0x06000017, { 60, 4 } },
	{ 0x06000018, { 64, 3 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 1 } },
	{ 0x0600001B, { 71, 1 } },
	{ 0x0600001C, { 72, 3 } },
	{ 0x0600001D, { 75, 3 } },
	{ 0x0600001E, { 78, 2 } },
	{ 0x0600001F, { 80, 3 } },
	{ 0x06000020, { 83, 2 } },
	{ 0x06000021, { 85, 5 } },
	{ 0x06000031, { 103, 2 } },
	{ 0x06000036, { 112, 2 } },
	{ 0x0600003B, { 124, 2 } },
	{ 0x06000041, { 137, 3 } },
	{ 0x06000046, { 149, 3 } },
	{ 0x0600004B, { 164, 3 } },
	{ 0x06000077, { 214, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[267] = 
{
	{ (Il2CppRGCTXDataType)2, 3701 },
	{ (Il2CppRGCTXDataType)3, 15507 },
	{ (Il2CppRGCTXDataType)2, 6213 },
	{ (Il2CppRGCTXDataType)2, 5445 },
	{ (Il2CppRGCTXDataType)3, 29741 },
	{ (Il2CppRGCTXDataType)2, 3849 },
	{ (Il2CppRGCTXDataType)2, 5452 },
	{ (Il2CppRGCTXDataType)3, 29806 },
	{ (Il2CppRGCTXDataType)2, 5447 },
	{ (Il2CppRGCTXDataType)3, 29757 },
	{ (Il2CppRGCTXDataType)2, 3702 },
	{ (Il2CppRGCTXDataType)3, 15508 },
	{ (Il2CppRGCTXDataType)2, 6271 },
	{ (Il2CppRGCTXDataType)2, 5454 },
	{ (Il2CppRGCTXDataType)3, 29822 },
	{ (Il2CppRGCTXDataType)2, 3910 },
	{ (Il2CppRGCTXDataType)2, 5462 },
	{ (Il2CppRGCTXDataType)3, 30002 },
	{ (Il2CppRGCTXDataType)2, 5458 },
	{ (Il2CppRGCTXDataType)3, 29904 },
	{ (Il2CppRGCTXDataType)2, 1394 },
	{ (Il2CppRGCTXDataType)3, 152 },
	{ (Il2CppRGCTXDataType)3, 153 },
	{ (Il2CppRGCTXDataType)2, 2375 },
	{ (Il2CppRGCTXDataType)3, 11245 },
	{ (Il2CppRGCTXDataType)2, 1395 },
	{ (Il2CppRGCTXDataType)3, 170 },
	{ (Il2CppRGCTXDataType)3, 171 },
	{ (Il2CppRGCTXDataType)2, 2424 },
	{ (Il2CppRGCTXDataType)3, 11269 },
	{ (Il2CppRGCTXDataType)3, 34226 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)3, 267 },
	{ (Il2CppRGCTXDataType)3, 34232 },
	{ (Il2CppRGCTXDataType)2, 1406 },
	{ (Il2CppRGCTXDataType)3, 303 },
	{ (Il2CppRGCTXDataType)2, 4672 },
	{ (Il2CppRGCTXDataType)3, 23627 },
	{ (Il2CppRGCTXDataType)2, 4673 },
	{ (Il2CppRGCTXDataType)3, 23628 },
	{ (Il2CppRGCTXDataType)3, 12543 },
	{ (Il2CppRGCTXDataType)3, 34172 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 215 },
	{ (Il2CppRGCTXDataType)2, 1698 },
	{ (Il2CppRGCTXDataType)3, 2034 },
	{ (Il2CppRGCTXDataType)3, 2035 },
	{ (Il2CppRGCTXDataType)2, 3850 },
	{ (Il2CppRGCTXDataType)3, 16433 },
	{ (Il2CppRGCTXDataType)2, 3430 },
	{ (Il2CppRGCTXDataType)2, 2717 },
	{ (Il2CppRGCTXDataType)2, 2915 },
	{ (Il2CppRGCTXDataType)2, 3069 },
	{ (Il2CppRGCTXDataType)2, 3431 },
	{ (Il2CppRGCTXDataType)2, 2718 },
	{ (Il2CppRGCTXDataType)2, 2916 },
	{ (Il2CppRGCTXDataType)2, 3070 },
	{ (Il2CppRGCTXDataType)2, 2917 },
	{ (Il2CppRGCTXDataType)2, 3071 },
	{ (Il2CppRGCTXDataType)3, 11247 },
	{ (Il2CppRGCTXDataType)2, 3432 },
	{ (Il2CppRGCTXDataType)2, 2719 },
	{ (Il2CppRGCTXDataType)2, 2918 },
	{ (Il2CppRGCTXDataType)2, 3072 },
	{ (Il2CppRGCTXDataType)2, 2919 },
	{ (Il2CppRGCTXDataType)2, 3073 },
	{ (Il2CppRGCTXDataType)3, 11248 },
	{ (Il2CppRGCTXDataType)2, 3429 },
	{ (Il2CppRGCTXDataType)2, 2914 },
	{ (Il2CppRGCTXDataType)2, 3068 },
	{ (Il2CppRGCTXDataType)2, 2065 },
	{ (Il2CppRGCTXDataType)2, 2901 },
	{ (Il2CppRGCTXDataType)2, 2902 },
	{ (Il2CppRGCTXDataType)2, 3065 },
	{ (Il2CppRGCTXDataType)3, 11244 },
	{ (Il2CppRGCTXDataType)2, 2900 },
	{ (Il2CppRGCTXDataType)2, 3064 },
	{ (Il2CppRGCTXDataType)3, 11243 },
	{ (Il2CppRGCTXDataType)2, 2716 },
	{ (Il2CppRGCTXDataType)2, 2912 },
	{ (Il2CppRGCTXDataType)2, 2913 },
	{ (Il2CppRGCTXDataType)2, 3067 },
	{ (Il2CppRGCTXDataType)3, 11246 },
	{ (Il2CppRGCTXDataType)2, 2715 },
	{ (Il2CppRGCTXDataType)3, 34146 },
	{ (Il2CppRGCTXDataType)3, 10202 },
	{ (Il2CppRGCTXDataType)2, 2185 },
	{ (Il2CppRGCTXDataType)2, 2904 },
	{ (Il2CppRGCTXDataType)2, 3066 },
	{ (Il2CppRGCTXDataType)2, 3200 },
	{ (Il2CppRGCTXDataType)3, 15509 },
	{ (Il2CppRGCTXDataType)3, 15511 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)3, 15510 },
	{ (Il2CppRGCTXDataType)3, 15519 },
	{ (Il2CppRGCTXDataType)2, 3705 },
	{ (Il2CppRGCTXDataType)2, 5448 },
	{ (Il2CppRGCTXDataType)3, 29758 },
	{ (Il2CppRGCTXDataType)3, 15520 },
	{ (Il2CppRGCTXDataType)2, 2986 },
	{ (Il2CppRGCTXDataType)2, 3114 },
	{ (Il2CppRGCTXDataType)3, 11281 },
	{ (Il2CppRGCTXDataType)3, 34108 },
	{ (Il2CppRGCTXDataType)2, 5459 },
	{ (Il2CppRGCTXDataType)3, 29905 },
	{ (Il2CppRGCTXDataType)3, 15512 },
	{ (Il2CppRGCTXDataType)2, 3704 },
	{ (Il2CppRGCTXDataType)2, 5446 },
	{ (Il2CppRGCTXDataType)3, 29742 },
	{ (Il2CppRGCTXDataType)3, 11280 },
	{ (Il2CppRGCTXDataType)3, 15513 },
	{ (Il2CppRGCTXDataType)3, 34107 },
	{ (Il2CppRGCTXDataType)2, 5455 },
	{ (Il2CppRGCTXDataType)3, 29823 },
	{ (Il2CppRGCTXDataType)3, 15526 },
	{ (Il2CppRGCTXDataType)2, 3706 },
	{ (Il2CppRGCTXDataType)2, 5453 },
	{ (Il2CppRGCTXDataType)3, 29807 },
	{ (Il2CppRGCTXDataType)3, 16601 },
	{ (Il2CppRGCTXDataType)3, 8326 },
	{ (Il2CppRGCTXDataType)3, 11282 },
	{ (Il2CppRGCTXDataType)3, 8325 },
	{ (Il2CppRGCTXDataType)3, 15527 },
	{ (Il2CppRGCTXDataType)3, 34109 },
	{ (Il2CppRGCTXDataType)2, 5463 },
	{ (Il2CppRGCTXDataType)3, 30003 },
	{ (Il2CppRGCTXDataType)3, 15540 },
	{ (Il2CppRGCTXDataType)2, 3708 },
	{ (Il2CppRGCTXDataType)2, 5461 },
	{ (Il2CppRGCTXDataType)3, 29907 },
	{ (Il2CppRGCTXDataType)3, 15541 },
	{ (Il2CppRGCTXDataType)2, 2989 },
	{ (Il2CppRGCTXDataType)2, 3117 },
	{ (Il2CppRGCTXDataType)3, 11286 },
	{ (Il2CppRGCTXDataType)3, 11285 },
	{ (Il2CppRGCTXDataType)2, 5450 },
	{ (Il2CppRGCTXDataType)3, 29760 },
	{ (Il2CppRGCTXDataType)3, 34119 },
	{ (Il2CppRGCTXDataType)2, 5460 },
	{ (Il2CppRGCTXDataType)3, 29906 },
	{ (Il2CppRGCTXDataType)3, 15533 },
	{ (Il2CppRGCTXDataType)2, 3707 },
	{ (Il2CppRGCTXDataType)2, 5457 },
	{ (Il2CppRGCTXDataType)3, 29825 },
	{ (Il2CppRGCTXDataType)3, 11284 },
	{ (Il2CppRGCTXDataType)3, 11283 },
	{ (Il2CppRGCTXDataType)3, 15534 },
	{ (Il2CppRGCTXDataType)2, 5449 },
	{ (Il2CppRGCTXDataType)3, 29759 },
	{ (Il2CppRGCTXDataType)3, 34118 },
	{ (Il2CppRGCTXDataType)2, 5456 },
	{ (Il2CppRGCTXDataType)3, 29824 },
	{ (Il2CppRGCTXDataType)3, 15547 },
	{ (Il2CppRGCTXDataType)2, 3709 },
	{ (Il2CppRGCTXDataType)2, 5465 },
	{ (Il2CppRGCTXDataType)3, 30005 },
	{ (Il2CppRGCTXDataType)3, 16602 },
	{ (Il2CppRGCTXDataType)3, 8328 },
	{ (Il2CppRGCTXDataType)3, 11288 },
	{ (Il2CppRGCTXDataType)3, 11287 },
	{ (Il2CppRGCTXDataType)3, 8327 },
	{ (Il2CppRGCTXDataType)3, 15548 },
	{ (Il2CppRGCTXDataType)2, 5451 },
	{ (Il2CppRGCTXDataType)3, 29761 },
	{ (Il2CppRGCTXDataType)3, 34120 },
	{ (Il2CppRGCTXDataType)2, 5464 },
	{ (Il2CppRGCTXDataType)3, 30004 },
	{ (Il2CppRGCTXDataType)3, 11277 },
	{ (Il2CppRGCTXDataType)3, 11278 },
	{ (Il2CppRGCTXDataType)3, 11291 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)3, 269 },
	{ (Il2CppRGCTXDataType)2, 2978 },
	{ (Il2CppRGCTXDataType)2, 3108 },
	{ (Il2CppRGCTXDataType)3, 11279 },
	{ (Il2CppRGCTXDataType)2, 2996 },
	{ (Il2CppRGCTXDataType)2, 3135 },
	{ (Il2CppRGCTXDataType)3, 272 },
	{ (Il2CppRGCTXDataType)2, 1199 },
	{ (Il2CppRGCTXDataType)2, 1403 },
	{ (Il2CppRGCTXDataType)3, 268 },
	{ (Il2CppRGCTXDataType)3, 271 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)2, 2981 },
	{ (Il2CppRGCTXDataType)2, 3110 },
	{ (Il2CppRGCTXDataType)3, 307 },
	{ (Il2CppRGCTXDataType)2, 942 },
	{ (Il2CppRGCTXDataType)2, 1407 },
	{ (Il2CppRGCTXDataType)3, 304 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)3, 217 },
	{ (Il2CppRGCTXDataType)2, 5086 },
	{ (Il2CppRGCTXDataType)3, 27150 },
	{ (Il2CppRGCTXDataType)2, 2975 },
	{ (Il2CppRGCTXDataType)2, 3106 },
	{ (Il2CppRGCTXDataType)3, 27151 },
	{ (Il2CppRGCTXDataType)3, 219 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 216 },
	{ (Il2CppRGCTXDataType)3, 218 },
	{ (Il2CppRGCTXDataType)2, 6291 },
	{ (Il2CppRGCTXDataType)2, 2066 },
	{ (Il2CppRGCTXDataType)3, 10248 },
	{ (Il2CppRGCTXDataType)2, 2205 },
	{ (Il2CppRGCTXDataType)2, 6423 },
	{ (Il2CppRGCTXDataType)3, 27147 },
	{ (Il2CppRGCTXDataType)3, 27148 },
	{ (Il2CppRGCTXDataType)2, 3215 },
	{ (Il2CppRGCTXDataType)3, 27149 },
	{ (Il2CppRGCTXDataType)2, 853 },
	{ (Il2CppRGCTXDataType)2, 1400 },
	{ (Il2CppRGCTXDataType)3, 229 },
	{ (Il2CppRGCTXDataType)3, 23614 },
	{ (Il2CppRGCTXDataType)2, 4674 },
	{ (Il2CppRGCTXDataType)3, 23629 },
	{ (Il2CppRGCTXDataType)2, 1699 },
	{ (Il2CppRGCTXDataType)3, 2036 },
	{ (Il2CppRGCTXDataType)3, 23620 },
	{ (Il2CppRGCTXDataType)3, 8276 },
	{ (Il2CppRGCTXDataType)2, 996 },
	{ (Il2CppRGCTXDataType)3, 23615 },
	{ (Il2CppRGCTXDataType)2, 4669 },
	{ (Il2CppRGCTXDataType)3, 2499 },
	{ (Il2CppRGCTXDataType)2, 1723 },
	{ (Il2CppRGCTXDataType)2, 2124 },
	{ (Il2CppRGCTXDataType)3, 8282 },
	{ (Il2CppRGCTXDataType)3, 23616 },
	{ (Il2CppRGCTXDataType)3, 8271 },
	{ (Il2CppRGCTXDataType)3, 8272 },
	{ (Il2CppRGCTXDataType)3, 8270 },
	{ (Il2CppRGCTXDataType)3, 8273 },
	{ (Il2CppRGCTXDataType)2, 2120 },
	{ (Il2CppRGCTXDataType)2, 6371 },
	{ (Il2CppRGCTXDataType)3, 11273 },
	{ (Il2CppRGCTXDataType)3, 8275 },
	{ (Il2CppRGCTXDataType)2, 2870 },
	{ (Il2CppRGCTXDataType)3, 8274 },
	{ (Il2CppRGCTXDataType)2, 2730 },
	{ (Il2CppRGCTXDataType)2, 6280 },
	{ (Il2CppRGCTXDataType)2, 2940 },
	{ (Il2CppRGCTXDataType)2, 3081 },
	{ (Il2CppRGCTXDataType)3, 10229 },
	{ (Il2CppRGCTXDataType)2, 2198 },
	{ (Il2CppRGCTXDataType)3, 12255 },
	{ (Il2CppRGCTXDataType)3, 12256 },
	{ (Il2CppRGCTXDataType)3, 12261 },
	{ (Il2CppRGCTXDataType)2, 3209 },
	{ (Il2CppRGCTXDataType)3, 12258 },
	{ (Il2CppRGCTXDataType)3, 35200 },
	{ (Il2CppRGCTXDataType)2, 2134 },
	{ (Il2CppRGCTXDataType)3, 8312 },
	{ (Il2CppRGCTXDataType)1, 2863 },
	{ (Il2CppRGCTXDataType)2, 6299 },
	{ (Il2CppRGCTXDataType)3, 12257 },
	{ (Il2CppRGCTXDataType)1, 6299 },
	{ (Il2CppRGCTXDataType)1, 3209 },
	{ (Il2CppRGCTXDataType)2, 6421 },
	{ (Il2CppRGCTXDataType)2, 6299 },
	{ (Il2CppRGCTXDataType)3, 12262 },
	{ (Il2CppRGCTXDataType)3, 12260 },
	{ (Il2CppRGCTXDataType)3, 12259 },
	{ (Il2CppRGCTXDataType)2, 729 },
	{ (Il2CppRGCTXDataType)3, 8329 },
	{ (Il2CppRGCTXDataType)2, 954 },
	{ (Il2CppRGCTXDataType)2, 2736 },
	{ (Il2CppRGCTXDataType)2, 6301 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	169,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	59,
	s_rgctxIndices,
	267,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
