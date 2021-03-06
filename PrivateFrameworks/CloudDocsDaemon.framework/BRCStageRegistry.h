/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, BRCAccountSession, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, BRCStagePersistedState;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate> {
    BRCAccountSession *_session;
    NSString *_stageDirectoryPath[7];
    unsigned long long _stageDirectoryFileID[7];
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_containersWithUnflushedFileIDs;
    NSMutableDictionary *_lockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    bool_lowDiskSpace;

  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;

    NSObject<OS_dispatch_queue> *_queue;
    int _deviceID;
}

@property(readonly) int deviceID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)purgeOldFiles;
- (long long)purgableSpace;
- (id)copyBundleIconsToStageWithDictionary:(id)arg1;
- (bool)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (bool)existsInOldVersionStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (id)pathInStage:(unsigned long long)arg1;
- (bool)existsInStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (bool)moveToGraveyardFromPath:(id)arg1 error:(id*)arg2;
- (bool)moveOldVersionFromPath:(id)arg1 error:(id*)arg2;
- (bool)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id*)arg4;
- (bool)finishStageOfPackageWithManifestID:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 documentID:(unsigned int*)arg4 inContainer:(id)arg5 error:(id*)arg6;
- (bool)manifestExistsInStageWithManifestID:(id)arg1 gatherPackageFileID:(unsigned long long*)arg2 gatherManifestFileID:(unsigned long long*)arg3;
- (bool)makeSideFaultInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 documentID:(unsigned int*)arg3 properties:(id)arg4 inContainer:(id)arg5 forCreation:(bool)arg6 error:(id*)arg7;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 container:(id)arg2 statInfo:(id)arg3 version:(id)arg4 error:(id*)arg5;
- (bool)makeDirectoryInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 inContainer:(id)arg3 error:(id*)arg4;
- (void)_watchLockedRelpath:(id)arg1;
- (bool)isItemInStageWithParentFileID:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 container:(id)arg3 statInfo:(id)arg4 version:(id)arg5;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (int)_openStageDirectory:(unsigned char)arg1;
- (long long)garbageCollect:(bool)arg1;
- (void)_testLockedFiles;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(id)arg2;
- (bool)movePackageFromStageToGraveyard:(id)arg1;
- (id)stagedManifestURLForManifestID:(id)arg1;
- (bool)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (bool)manifestFileIDsForManifestID:(id)arg1 manifestFileID:(unsigned long long*)arg2 stagingManifestFileID:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)beginStageOfPackageWithManifestID:(id)arg1 manifestPath:(id)arg2 error:(id*)arg3;
- (unsigned long long)packageRootFileIDForManifestID:(id)arg1 createIfMissing:(bool)arg2 error:(id*)arg3;
- (bool)mayLockFileID:(unsigned long long)arg1;
- (bool)didFlushStagedFileID:(unsigned long long)arg1;
- (void)forgetWatchedLockedFileIDsForContainer:(id)arg1;
- (id)stagedUploadAssetWithContainer:(id)arg1 itemID:(id)arg2 suffix:(id)arg3 kind:(unsigned long long)arg4 error:(id*)arg5;
- (bool)moveToStageFromTmp:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 documentID:(unsigned int*)arg4 inContainer:(id)arg5 error:(id*)arg6;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (bool)moveFromStageToGraveyard:(unsigned long long)arg1;
- (void)cleanupStagedUploadWithContainer:(id)arg1 itemID:(id)arg2;
- (id)stagedUploadURLWithContainer:(id)arg1 itemID:(id)arg2 suffix:(id)arg3 kind:(unsigned long long)arg4;
- (void)forgetWatchedLockedFileID:(unsigned long long)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)didFlushAllStagedFileIDs;
- (int)deviceID;
- (void)resume;
- (void)close;
- (void)open;
- (void)suspend;
- (void)dealloc;
- (void).cxx_destruct;

@end
