/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSMediaStreamDaemon, NSString, <MSSubscribeStorageProtocol>, MSSubscribeStreamsProtocol, NSMutableDictionary, MSObjectQueue, <MSSubscriberDelegate>, MSReauthorizationProtocol, NSMutableArray;

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
    <MSSubscriberDelegate> *_delegate;
    MSMediaStreamDaemon *_daemon;
    bool_checkOneMoreTime;
    int _state;
    MSSubscribeStreamsProtocol *_protocol;
    NSMutableDictionary *_newSubscriptionsByStreamID;
    int _retrievalState;
    <MSSubscribeStorageProtocol> *_storageProtocol;
    MSReauthorizationProtocol *_reauthProtocol;
    MSObjectQueue *_retrievalQueue;
    NSMutableArray *_assetsBeingRetrieved;
    long long _targetRetrievalByteCount;
    int _retrievalBatchSize;
    long long _maxErrorCount;
}

@property MSMediaStreamDaemon * daemon;
@property long long targetRetrievalByteCount;
@property int retrievalBatchSize;
@property <MSSubscriberDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_descriptionForRetrievalState:(int)arg1;
+ (id)_descriptionForState:(int)arg1;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)_clearInstantiatedSubscribersByPersonID;
+ (void)forgetPersonID:(id)arg1;
+ (void)stopAllActivities;
+ (id)existingSubscriberForPersonID:(id)arg1;
+ (id)subscriberForPersonID:(id)arg1;
+ (bool)isInRetryState;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDate;

- (void)setRetrievalBatchSize:(int)arg1;
- (int)retrievalBatchSize;
- (void)setTargetRetrievalByteCount:(long long)arg1;
- (long long)targetRetrievalByteCount;
- (void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1;
- (void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(bool)arg3 metadata:(id)arg4;
- (void)_finishedRetrievingAsset:(id)arg1;
- (void)retrieveAssets:(id)arg1;
- (void)_reauthorizeAssets;
- (void)_retrieveNextAssets;
- (void)_changeRetrievalStateTo:(int)arg1;
- (void)_retrieveAssets;
- (void)_didReceiveAuthenticationError:(id)arg1;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_setSubscriptionsByStreamID:(id)arg1;
- (void)_checkForNewAssetCollections;
- (void)_changeStateTo:(int)arg1;
- (bool)_isAllowedToDownload;
- (void)_setHasOutstandingPoll:(bool)arg1;
- (void)_stopOutSubscriberState:(int*)arg1 outRetrievalState:(int*)arg2;
- (bool)_hasOutstandingPoll;
- (void)_refreshServerSideConfigurationParameters;
- (id)_subscriptionsByStreamID;
- (void)_forget;
- (void)_abort;
- (void)_updateMasterManifest;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (bool)_isInRetryState;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)ownSubscribedStream;
- (id)subscribedStreams;
- (void)resetSync;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
- (void)setDaemon:(id)arg1;
- (id)daemon;
- (void)deactivate;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)abort;

@end
