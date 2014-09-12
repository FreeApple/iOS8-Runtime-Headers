/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSObject<OS_dispatch_queue>, GKDiscoveryBonjour;

@interface GKDiscoveryManager : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playerFoundHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playerLostHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _receiveDataHandler;

    NSString *_playerID;
    NSString *_deviceID;
    NSMutableDictionary *_peers;
    GKDiscoveryBonjour *_bonjour;
    NSObject<OS_dispatch_queue> *_peersQueue;
}

@property(copy) id playerFoundHandler;
@property(copy) id playerLostHandler;
@property(copy) id receiveDataHandler;
@property(copy) NSString * playerID;
@property(copy) NSString * deviceID;
@property(retain) NSMutableDictionary * peers;
@property(retain) GKDiscoveryBonjour * bonjour;

+ (id)parseDeviceIDFromServiceName:(id)arg1;

- (void)setPeers:(id)arg1;
- (id)peers;
- (void)setBonjour:(id)arg1;
- (id)bonjour;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;
- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;
- (void)cleanUpPeersForBrowse;
- (id)peersList;
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;
- (void)connectToSockAddr:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;
- (void)resolveForPeer:(id)arg1;
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;
- (id)localServiceName;
- (void)didLosePeer:(id)arg1;
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;
- (id)generateDeviceID;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(id)arg4;
- (void)stopBrowsing;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)stopAdvertising;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (id)receiveDataHandler;
- (void)setPlayerLostHandler:(id)arg1;
- (id)playerLostHandler;
- (void)setPlayerFoundHandler:(id)arg1;
- (id)playerFoundHandler;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)setReceiveDataHandler:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (id)init;
- (void)dealloc;

@end
