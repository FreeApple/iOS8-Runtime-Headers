/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSHashTable;

@interface NSKeyValueObservationInfo : NSObject  {
    int _retainCountMinusOne;
    NSArray *_observances;
    unsigned long long _cachedHash;
    bool_cachedIsShareable;
    NSHashTable *_observables;
}


- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2;

@end
