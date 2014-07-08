/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMapTable, NSMutableArray;

@interface BRCRRQueue : NSEnumerator  {
    NSMapTable *_objects;
    NSMutableArray *_array;
    unsigned long long _pos;
}

@property(readonly) unsigned long long count;


- (id)init;
- (id)nextObject;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void).cxx_destruct;

@end