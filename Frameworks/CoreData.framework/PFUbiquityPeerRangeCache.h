/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSMutableDictionary, NSPersistentStore, NSDictionary;

@interface PFUbiquityPeerRangeCache : NSObject  {
    NSMutableDictionary *_cachedRanges;
    NSMutableDictionary *_allEntityRanges;
    NSMutableDictionary *_translatedGlobalIDs;
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    bool_cachedStorePeerRanges;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSString * storeName;
@property(readonly) NSPersistentStore * privateStore;
@property(readonly) NSDictionary * translatedGlobalIDs;

+ (unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)arg1;
+ (long long)integerFromPrimaryKeyString:(id)arg1;
+ (void)initialize;

- (id)translatedGlobalIDs;
- (id)describeCachesVerbose;
- (id)describeCaches;
- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3;
- (unsigned long long)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 count:(long long)arg2 error:(id*)arg3;
- (id)cachedRangeForLocalPrimaryKey:(unsigned long long)arg1 ofEntityNamed:(id)arg2;
- (id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;
- (bool)cacheSQLCorePeerRange:(id)arg1 error:(id*)arg2;
- (id)createGlobalObjectIDForManagedObjectID:(id)arg1;
- (bool)refreshPeerRangeCache:(id*)arg1;
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id*)arg2;
- (bool)cachePeerRanges:(id*)arg1;
- (id)localPeerID;
- (id)privateStore;
- (id)storeName;
- (void)dealloc;
- (id)description;

@end
