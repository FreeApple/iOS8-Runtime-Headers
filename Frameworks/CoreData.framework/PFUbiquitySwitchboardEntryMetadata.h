/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityRecordsImporterSchedulingContext, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, NSString, NSSet, PFUbiquityLocation, NSMutableSet, PFUbiquityBaselineHeuristics, _PFUbiquityRecordsImporter, NSPersistentStoreCoordinator, _PFUbiquityRecordsExporter, NSObject<OS_dispatch_queue>;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject  {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_activeModelVersionHash;
    NSMutableSet *_stores;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    bool_useLocalStorage;
    bool_useLocaAccount;
    NSObject<OS_dispatch_queue> *_privateQueue;
    PFUbiquityBaselineHeuristics *_baselineHeuristics;
}

@property(retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;
@property(readonly) _PFUbiquityRecordsImporter * importer;
@property(readonly) _PFUbiquityRecordsExporter * exporter;
@property(retain) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSSet * stores;
@property(readonly) NSString * activeModelVersionHash;
@property(readonly) NSPersistentStoreCoordinator * privatePSC;
@property(readonly) NSSQLCore * privateStore;
@property(readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;
@property bool useLocalStorage;
@property bool useLocalAccount;
@property(readonly) PFUbiquityBaselineHeuristics * baselineHeuristics;


- (bool)useLocalAccount;
- (id)activeModelVersionHash;
- (void)setUseLocalAccount:(bool)arg1;
- (id)exporter;
- (void)removePersistentStore:(id)arg1;
- (void)addPersistentStore:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;
- (id)privatePSC;
- (id)schedulingContext;
- (void)tearDown;
- (bool)useLocalStorage;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUseLocalStorage:(bool)arg1;
- (id)importer;
- (void)setCacheWrapper:(id)arg1;
- (id)baselineHeuristics;
- (id)cacheWrapper;
- (id)ubiquityRootLocation;
- (id)privateStore;
- (id)stores;
- (void)dealloc;

@end
