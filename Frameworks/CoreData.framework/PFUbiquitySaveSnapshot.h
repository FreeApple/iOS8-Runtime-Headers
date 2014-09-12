/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSMutableDictionary, NSArray, NSDate;

@interface PFUbiquitySaveSnapshot : NSObject  {
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

@property(retain) NSDate * transactionDate;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * exportingPeerID;
@property(readonly) NSArray * storeNames;
@property(readonly) NSString * localPeerID;


- (id)initWithTransactionLog:(id)arg1;
- (id)storeSaveSnapshotForStore:(id)arg1;
- (id)storeNames;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (id)exportingPeerID;
- (id)localPeerID;
- (id)modelVersionHash;
- (void)setTransactionDate:(id)arg1;
- (id)transactionDate;
- (id)storeSaveSnapshotForStoreName:(id)arg1;
- (void)dealloc;
- (id)description;

@end
