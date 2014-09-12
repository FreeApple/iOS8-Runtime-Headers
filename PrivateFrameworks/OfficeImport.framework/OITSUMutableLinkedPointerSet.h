/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}


- (void)insertFirstObject:(id)arg1;
- (bool)hasObjects;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (id)reverseObjectEnumerator;
- (id)firstObject;
- (id)init;
- (id)objectEnumerator;
- (id)array;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)removeObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;

@end
