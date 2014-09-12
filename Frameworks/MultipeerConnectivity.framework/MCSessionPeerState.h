/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class MCPeerID, NSMutableDictionary, NSData;

@interface MCSessionPeerState : NSObject  {
    bool_connectPeerCalled;
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
    MCPeerID *_peerID;
    long long _state;
    NSMutableDictionary *_outgoingStreamRequests;
    NSMutableDictionary *_incomingStreams;
    NSMutableDictionary *_outgoingStreams;
    NSData *_nearbyConnectionData;
    long long _certificateDecision;
}

@property(copy,readonly) MCPeerID * peerID;
@property long long state;
@property bool connectPeerCalled;
@property(copy) NSData * nearbyConnectionData;
@property(retain) NSMutableDictionary * outgoingStreamRequests;
@property(retain) NSMutableDictionary * outgoingStreams;
@property(retain) NSMutableDictionary * incomingStreams;
@property(readonly) unsigned int newStreamOpenRequestID;
@property(readonly) unsigned int newStreamID;
@property long long certificateDecision;


- (void)setCertificateDecision:(long long)arg1;
- (long long)certificateDecision;
- (void)setConnectPeerCalled:(bool)arg1;
- (bool)connectPeerCalled;
- (void)setNearbyConnectionData:(id)arg1;
- (void)setOutgoingStreams:(id)arg1;
- (id)outgoingStreams;
- (void)setIncomingStreams:(id)arg1;
- (id)incomingStreams;
- (void)setOutgoingStreamRequests:(id)arg1;
- (id)outgoingStreamRequests;
- (unsigned int)newStreamOpenRequestID;
- (unsigned int)newStreamID;
- (id)initWithPeer:(id)arg1;
- (id)nearbyConnectionData;
- (id)peerID;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;

@end
