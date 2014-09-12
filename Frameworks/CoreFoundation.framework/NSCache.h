/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSString, <NSCacheDelegate>;

@interface NSCache : NSObject  {
    id _delegate;
    void *_private[5];
    void *_reserved;
}

@property(copy) NSString * name;
@property <NSCacheDelegate> * delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property bool evictsObjectsWithDiscardedContent;


- (void)setName:(id)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (void)setEvictsObjectsWithDiscardedContent:(bool)arg1;
- (id)init;
- (bool)evictsObjectsWhenApplicationEntersBackground;
- (unsigned long long)totalCostLimit;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (bool)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)delegate;
- (void)finalize;
- (void)dealloc;
- (id)CALobjectForKey:(id)arg1 calculatedWithBlock:(id)arg2;

@end
