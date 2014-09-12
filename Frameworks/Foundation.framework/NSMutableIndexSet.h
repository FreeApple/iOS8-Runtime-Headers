/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableIndexSet : NSIndexSet  {
    void *_reserved;
}


- (void)addIndex:(unsigned long long)arg1;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (void)removeIndexesPassingTest:(id)arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (void)removeIndexesFromIndexSet:(id)arg1;
- (void)addIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)addIndexesFromIndexSet:(id)arg1;
- (void)_removeAndDecrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)_incrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned long long)arg1;
- (void)_addRangeToArray:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArrayAtIndex:(unsigned long long)arg2;
- (void)_replaceRangeInArrayAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeIndexesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)removeIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeAllIndexes;
- (void)_removeRangeInArrayAtIndex:(unsigned long long)arg1;
- (void)_ensureRangeCapacity:(unsigned long long)arg1;
- (void)addIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addIndexes:(id)arg1;
- (Class)classForCoder;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)mf_intersectIndexes:(id)arg1;
- (void)pl_adjustIndexesForInsertions:(id)arg1;
- (void)pl_adjustIndexesForDeletions:(id)arg1;
- (void)intersectionWithIndexSet:(id)arg1;
- (void)moveIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toOffset:(unsigned long long)arg2;

@end
