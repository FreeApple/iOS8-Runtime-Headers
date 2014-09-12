/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityLocation, NSString, NSRecursiveLock, NSPersistentStore, PFUbiquityKnowledgeVector, NSMutableDictionary, NSArray, NSPersistentStoreCoordinator, NSMutableArray, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionHistoryCache : NSObject  {
    NSString *_localPeerID;
    PFUbiquityLocation *_rootLocation;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    NSPersistentStoreCoordinator *_privatePSC;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    NSMutableArray *_entriesToWrite;
    PFUbiquityKnowledgeVector *_cacheKV;
    PFUbiquityKnowledgeVector *_minCacheKV;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    bool_hasScheduledWriteBlock;
}

@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(retain) PFUbiquityGlobalObjectIDCache * globalIDCache;
@property(readonly) PFUbiquityKnowledgeVector * cacheKV;
@property(readonly) PFUbiquityKnowledgeVector * minCacheKV;
@property(readonly) NSArray * cachedGlobalIDs;


- (void)setGlobalIDCache:(id)arg1;
- (id)cachedGlobalIDs;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 privateStore:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (bool)addTransactionEntry:(id)arg1 error:(id*)arg2;
- (id)describeCachesVerbose;
- (id)describeCaches;
- (id)globalIDCache;
- (bool)addTransactionEntryLights:(id)arg1 error:(id*)arg2;
- (bool)addTransactionEntryLight:(id)arg1 needsWrite:(bool)arg2 error:(id*)arg3;
- (id)cachedTransactionHistoryForGlobalID:(id)arg1;
- (bool)writePendingEntries:(id*)arg1;
- (bool)purgeCacheAndWritePendingEntries:(bool)arg1 error:(id*)arg2;
- (id)minCacheKV;
- (id)cacheKV;
- (bool)cacheTransactionHistory:(id*)arg1;
- (id)ubiquityRootLocation;
- (id)init;
- (void)dealloc;
- (id)description;

@end
