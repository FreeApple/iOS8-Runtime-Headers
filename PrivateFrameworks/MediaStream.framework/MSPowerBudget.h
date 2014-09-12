/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSString, MSPBTimerContext, <MSPowerBudgetDelegate>, NSObject<OS_dispatch_queue>;

@interface MSPowerBudget : NSObject  {
    bool_workQueueIsFileTransferAllowed;
    bool_workQueueIsExternalPowered;
    bool_workQueueIsForeground;
    <MSPowerBudgetDelegate> *_delegate;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSString *_personID;
    MSPBTimerContext *_workQueuePushTimerContext;
    MSPBTimerContext *_workQueuePostForegroundTimerContext;
    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property <MSPowerBudgetDelegate> * delegate;
@property double maxActiveTimeAfterPush;
@property double maxActiveTimeAfterLossOfForeground;
@property double maxActiveTimeAfterGlobalResetSync;
@property(retain) NSString * focusAlbumGUID;
@property(retain) NSString * focusAssetCollectionGUID;
@property(retain) NSString * personID;
@property(getter=isFileTransferAllowed,readonly) bool fileTransferAllowed;
@property(getter=hasForegroundFocus,readonly) bool foregroundFocus;
@property(readonly) bool hasActiveTimers;
@property(setter=workQueueSetFileTransferAllowed:) bool workQueueIsFileTransferAllowed;
@property(setter=workQueueSetExternalPowered:) bool workQueueIsExternalPowered;
@property(setter=workQueueSetForeground:) bool workQueueIsForeground;
@property(retain) MSPBTimerContext * workQueuePushTimerContext;
@property(retain) MSPBTimerContext * workQueuePostForegroundTimerContext;
@property(retain) MSPBTimerContext * workQueueGlobalResetSyncTimerContext;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;


- (void)workQueueSetFileTransferAllowed:(bool)arg1;
- (bool)workQueueIsFileTransferAllowed;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (void)didEndExternalPower;
- (void)didBeginExternalPower;
- (void)didReceiveGlobalResetSync;
- (void)didEndForegroundFocus;
- (void)didBeginForegroundFocus;
- (void)didReceivePushNotification;
- (void)workQueueSetIsFileTransferAllowed:(bool)arg1;
- (bool)hasActiveTimers;
- (bool)hasForegroundFocus;
- (bool)isFileTransferAllowed;
- (void)setMaxActiveTimeAfterLossOfForeground:(double)arg1;
- (double)maxActiveTimeAfterLossOfForeground;
- (void)setMaxActiveTimeAfterGlobalResetSync:(double)arg1;
- (double)maxActiveTimeAfterGlobalResetSync;
- (void)setMaxActiveTimeAfterPush:(double)arg1;
- (double)maxActiveTimeAfterPush;
- (void)workQueueSetExternalPowered:(bool)arg1;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (void)workQueueSetForeground:(bool)arg1;
- (double)workQueueMaxActiveTimeAfterPush;
- (void)setIsFileTransferAllowed:(bool)arg1;
- (bool)workQueueIsForeground;
- (bool)workQueueIsExternalPowered;
- (void)setWorkQueueGlobalResetSyncTimerContext:(id)arg1;
- (id)workQueueGlobalResetSyncTimerContext;
- (void)setWorkQueuePostForegroundTimerContext:(id)arg1;
- (id)workQueuePostForegroundTimerContext;
- (void)workQueueCommitPersistedValues;
- (void)setWorkQueuePushTimerContext:(id)arg1;
- (id)workQueuePushTimerContext;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;
- (id)focusAlbumGUID;
- (id)focusAssetCollectionGUID;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (void)shutDown;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)delegate;
- (id)workQueue;
- (void).cxx_destruct;

@end
