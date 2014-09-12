/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject  {
    long long _accountIdentifier;
    SSSQLiteDatabase *_database;
}

@property(readonly) long long accountIdentifier;
@property(copy) NSNumber * lastSyncTime;

+ (bool)existsForAccountIdentifier:(long long)arg1;

- (id)lastSyncTime;
- (void)setLastSyncTime:(id)arg1;
- (bool)deleteBackingStore;
- (void)performTransactionWithBlock:(id)arg1;
- (id)initWithAccountIdentifier:(long long)arg1;
- (long long)accountIdentifier;
- (void)dealloc;

@end
