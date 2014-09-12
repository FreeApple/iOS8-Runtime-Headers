/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class NSData, NSString, <MCNearbyServiceAdvertiserDelegate>, NSMutableDictionary, NSDictionary, MCPeerID, NSNetService, NSObject<OS_dispatch_queue>;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {
    <MCNearbyServiceAdvertiserDelegate> *_delegate;
    bool_isAdvertising;
    bool_wasAdvertising;
    MCPeerID *_myPeerID;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    NSString *_formattedServiceType;
    NSNetService *_networkServer;
    NSData *_TXTRecordData;
    NSMutableDictionary *_peers;
    long long _outgoingInviteID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_invites;
}

@property <MCNearbyServiceAdvertiserDelegate> * delegate;
@property(readonly) MCPeerID * myPeerID;
@property(copy) NSDictionary * discoveryInfo;
@property(copy) NSString * serviceType;
@property(copy) NSString * formattedServiceType;
@property(retain) NSMutableDictionary * peers;
@property(retain) NSNetService * networkServer;
@property(retain) NSData * TXTRecordData;
@property long long outgoingInviteID;
@property(retain) NSObject<OS_dispatch_queue> * syncQueue;
@property(retain) NSMutableDictionary * invites;
@property bool isAdvertising;
@property bool wasAdvertising;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setSyncQueue:(id)arg1;
- (void)setInvites:(id)arg1;
- (void)setOutgoingInviteID:(long long)arg1;
- (long long)outgoingInviteID;
- (void)setFormattedServiceType:(id)arg1;
- (void)setDiscoveryInfo:(id)arg1;
- (void)startAdvertisingPeer;
- (id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3;
- (void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3;
- (void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2;
- (void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3;
- (bool)wasAdvertising;
- (void)stopAdvertisingPeer;
- (void)setWasAdvertising:(bool)arg1;
- (void)syncStopAdvertisingPeer;
- (void)syncStartAdvertisingPeer;
- (void)setNetworkServer:(id)arg1;
- (id)formattedServiceType;
- (id)networkServer;
- (bool)isAdvertising;
- (id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1;
- (id)discoveryInfo;
- (id)txtRecordDataWithDiscoveryInfo:(id)arg1;
- (id)myPeerID;
- (id)serviceType;
- (id)invites;
- (void)setPeers:(id)arg1;
- (id)peers;
- (id)syncQueue;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setServiceType:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)netServiceDidPublish:(id)arg1;
- (id)TXTRecordData;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (void)setTXTRecordData:(id)arg1;

@end
