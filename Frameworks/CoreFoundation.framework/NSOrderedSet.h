/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}

@property(readonly) unsigned long long count;

+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSet;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)orderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (id)indexesOfObjectsPassingTest:(id)arg1;
- (unsigned long long)indexOfObjectPassingTest:(id)arg1;
- (id)reversedOrderedSet;
- (id)reverseObjectEnumerator;
- (bool)isSubsetOfOrderedSet:(id)arg1;
- (bool)intersectsOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)firstObject;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (bool)isEqualToOrderedSet:(id)arg1;
- (bool)isNSOrderedSet__;
- (id)set;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectEnumerator;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)objectPassingTest:(id)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)lastObject;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)allObjects;
- (id)array;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id)arg3;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)initWithArray:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)containsObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id)arg4;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)initWithSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (Class)classForCoder;
- (id)objectsPassingTest:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)_minForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (bool)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredOrderedSetUsingPredicate:(id)arg1;
- (bool)_gkIsEqualToOrderedSet:(id)arg1;
- (id)_gkFirstObject;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkFilteredOrderedSetUsingPredicate:(id)arg1;
- (id)_gkSortedOrderedSetUsingDescriptors:(id)arg1;
- (unsigned long long)pl_indexOfObjectIdenticalTo:(id)arg1;
- (id)pl_shortDescription;
- (bool)pl_isSortedUsingComparator:(id)arg1;

@end
