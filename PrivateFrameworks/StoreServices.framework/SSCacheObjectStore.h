/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSDatabaseCache, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface SSCacheObjectStore : NSObject  {
    SSDatabaseCache *_databaseCache;
    NSMutableSet *_factories;
    NSString *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


- (void)removeCacheObjectFactory:(id)arg1;
- (void)addCacheObjectFactory:(id)arg1;
- (id)cacheObjectWithItemIdentifier:(id)arg1;
- (bool)removeObjectWithItemIdentifier:(id)arg1;
- (bool)addObject:(id)arg1 withItemIdentifier:(id)arg2;
- (void)clearSession;
- (id)_factoryForTypeIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSessionIdentifier:(id)arg1;

@end
