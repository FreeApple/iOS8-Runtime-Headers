/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSString, GKSessionInternal, GKVoiceChatSessionInternal, NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableDictionary;

@interface VoiceChatSessionRoster : NSObject  {
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } resMutex;
    bool_needsUpdateBeaconList;
    bool_waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    bool_isBeaconUp;
    bool_hasFocus;
}


- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)sendBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 ToPeer:(id)arg2;
- (void)calculateFocus:(id)arg1;
- (void)sendBeacons;
- (void)startBeacon;
- (void)configureDeviceRating;
- (void)updateBeacon;
- (bool)recalculateFocusRating;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (void)peer:(id)arg1 didChangeState:(int)arg2;
- (void)stopBeacon;
- (id)subscribedPeers;
- (unsigned int)focusID;
- (void)startBeaconWrapper:(id)arg1;
- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4;
- (bool)hasFocus;
- (void)cleanup;
- (void)dealloc;

@end
