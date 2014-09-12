/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBRemoteDataProviderDelegate>, NSString, NSObject<OS_dispatch_queue>, <BBRemoteDataProviderClientProxy>;

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {
    NSString *_sectionID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    <BBRemoteDataProviderClientProxy> *_clientProxy;
    bool_connected;
    bool_serverIsReady;
    NSObject<OS_dispatch_queue> *_serverControlQueue;
    <BBRemoteDataProviderDelegate> *_delegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)calloutToServer:(id)arg1;
- (bool)checkResponds:(bool)arg1 forSelector:(SEL)arg2;
- (void)_sendClientRequest:(id)arg1;
- (void)_logDoesNotRespond:(SEL)arg1;
- (bool)canPerformMigration;
- (void)reloadIdentityWithCompletion:(id)arg1;
- (void)startWatchdog;
- (bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)setServerIsReady:(bool)arg1;
- (id)initWithSectionID:(id)arg1 delegate:(id)arg2;
- (void)setClientProxy:(id)arg1 completion:(id)arg2;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)setClearedInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)invalidateBulletins;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (id)sectionIdentifier;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (id)debugDescription;
- (void)dealloc;

@end
