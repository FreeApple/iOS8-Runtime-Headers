/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, PQLConnection, BRCThrottle, APSConnection, BRCAccountSession, BRCContainerMetadataSyncPersistedState, BRCOperation, BRCCountedSet, NSObject<OS_dispatch_group>, NSString, BRCThrottledScheduler, BRCSyncBudgetThrottle, NSOperationQueue, BRCMinHeap, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, BRCRelativePath, CKContainer;

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate, BRCLowDiskDelegate> {
    BRCAccountSession *_session;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } _lock;
    NSMutableDictionary *_localContainersByID;
    NSMutableDictionary *_localContainersByMangledID;
    NSMutableDictionary *_serverContainersByID;
    BRCRelativePath *_root;
    PQLConnection *_clientDB;
    PQLConnection *_serverDB;
    BRCCountedSet *_coordinatedReaders;
    bool_readerCountReachedMax;
    BRCMinHeap *_lostHeap;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    NSObject<OS_dispatch_source> *_lostScanSource;
    NSObject<OS_dispatch_source> *_lostScanDelay;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _lostScanHandler;

    BRCCountedSet *_coordinatedWriters;
    bool_applyCountReachedMax;
    BRCMinHeap *_syncHeap;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_source> *_syncSource;
    NSObject<OS_dispatch_source> *_syncDelay;
    NSOperationQueue *_syncOperationQueue;
    NSObject<OS_dispatch_source> *_containersMetadataSyncSource;
    CKContainer *_ckContainerForContainersMetadataSync;
    NSObject<OS_dispatch_source> *_pushSource;
    NSString *_environmentName;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;

  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_uploadSuspendCount;


  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_downloadSuspendCount;

    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    unsigned int _containerMetadataSyncState;
    BRCOperation *_containerMetadataSyncOperation;
    BRCThrottle *_containerResetThrottle;
    unsigned long long _availableQuota;
    bool_isInLowDisk;
    BRCThrottledScheduler *_readerScheduler;
    BRCThrottledScheduler *_applyChangesScheduler;
    NSObject<OS_dispatch_group> *_lostScanGroup;
    NSObject<OS_dispatch_group> *_writerGroup;
    NSObject<OS_dispatch_group> *_uploadGroup;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCSyncBudgetThrottle *_syncUpBudget;
}

@property(readonly) BRCAccountSession * accountSession;
@property unsigned long long availableQuota;
@property(readonly) BRCThrottledScheduler * readerScheduler;
@property(readonly) NSObject<OS_dispatch_group> * lostScanGroup;
@property(readonly) NSObject<OS_dispatch_group> * writerGroup;
@property(readonly) BRCThrottledScheduler * applyChangesScheduler;
@property(readonly) NSObject<OS_dispatch_group> * initialSyncDownGroup;
@property(readonly) NSObject<OS_dispatch_group> * syncGroup;
@property(readonly) BRCSyncBudgetThrottle * syncUpBudget;
@property(readonly) NSObject<OS_dispatch_group> * uploadGroup;
@property(readonly) NSObject<OS_dispatch_group> * downloadGroup;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_containerMetadataRecordsToSave;
- (unsigned long long)availableQuota;
- (id)syncUpBudget;
- (id)syncGroup;
- (id)initialSyncDownGroup;
- (id)downloadGroup;
- (id)uploadGroup;
- (id)writerGroup;
- (id)lostScanGroup;
- (void)uploadResume;
- (void)uploadSuspend;
- (void)syncResume;
- (void)syncSuspend;
- (void)lostScanResume;
- (void)lostScanSuspend;
- (void)lostScanSetupTargetQueue:(id)arg1 handler:(id)arg2;
- (void)setAvailableQuota:(unsigned long long)arg1;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)setupWithRoot:(id)arg1;
- (void)resetContainerAsync:(id)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (void)containerDidBecomeBackground:(id)arg1;
- (void)containerDidBecomeForeground:(id)arg1;
- (void)didInitialSyncDownForContainer:(id)arg1;
- (void)willInitialSyncDownForContainer:(id)arg1;
- (bool)startWriteCoordinationInContainer:(id)arg1;
- (bool)startReadCoordinationInContainer:(id)arg1;
- (void)didMarkItemNeedsUploadInContainer:(id)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didMarkItemNeedsDownloadInContainer:(id)arg1 oldState:(unsigned int)arg2 newState:(unsigned int)arg3;
- (void)didChangeApplyChangesStatusForContainer:(id)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didChangeSyncStatusForContainer:(id)arg1;
- (void)didChangeReaderStatusForContainer:(id)arg1;
- (void)didChangeLostScanStatusForContainer:(id)arg1;
- (void)downloadResume;
- (void)downloadSuspend;
- (void)scheduleSyncDownContainerMetadata;
- (id)_containersMetadataSyncDatabase;
- (id)ckContainerForContainersMetadataSync;
- (void)_applyAdditionsInContainer:(id)arg1;
- (unsigned long long)_writeCoordinationCount;
- (unsigned long long)_readCoordinationCount;
- (bool)_createContainerOnDisk:(id)arg1 andDocumentsFolder:(bool)arg2 underRoot:(id)arg3;
- (void)_addContainerToScheduler:(id)arg1;
- (void)_signalContainersMetadataSync;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)activateLocalContainer:(id)arg1 withServerContainer:(id)arg2 creation:(bool)arg3;
- (id)removeAndReturnLocalContainers;
- (void)_unscheduleContainer:(id)arg1;
- (void)_removeContainerFromLostScanList:(id)arg1;
- (void)endWriteCoordinationInContainer:(id)arg1;
- (void)endReadCoordinationInContainer:(id)arg1;
- (void)_removeContainerFromSyncList:(id)arg1;
- (void)scheduleReset:(unsigned long long)arg1 forContainer:(id)arg2;
- (void)resetContainer:(id)arg1 resetType:(unsigned long long)arg2;
- (id)createContainerIfNeeded:(id)arg1;
- (void)_automaticSyncSchedule;
- (void)_updatePushTopicsRegistration;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncSchedule;
- (long long)_applyChangesScheduleContainer:(id)arg1;
- (void)_lostScanSchedule;
- (long long)_readerScheduleContainer:(id)arg1;
- (id)containerByMangledID:(id)arg1;
- (id)applyChangesScheduler;
- (id)readerScheduler;
- (id)initWithAccountSession:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)enumerateContainers:(id)arg1;
- (id)containerByID:(id)arg1;
- (id)accountSession;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)deactivate;
- (void)close;
- (void).cxx_destruct;

@end
