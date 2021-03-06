/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject  {
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}


- (id)imageDataForAdamID:(id)arg1;
- (bool)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3;
- (void)clearCacheForAdamID:(id)arg1;
- (id)allUncachedImages;
- (id)allUncachedImages:(id)arg1;
- (unsigned long long)purgeableSpace;
- (id)initWithAccount:(id)arg1;
- (unsigned long long)purge:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end
