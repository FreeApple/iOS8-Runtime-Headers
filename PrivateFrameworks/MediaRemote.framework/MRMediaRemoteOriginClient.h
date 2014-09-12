/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSDictionary, NSData, NSArray;

@interface MRMediaRemoteOriginClient : NSObject  {
    bool_canBeNowPlayingApp;
    bool_isOverrideApp;
    bool_keepAlive;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _commandHandlerBlock;

    NSMutableDictionary *_commandHandlerBlocks;
    int _notifyRestoreClientStateForLaunch;
    int _notifyDidLaunchToken;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
    struct _MROrigin { } *_origin;
    unsigned int _routeDiscoveryMode;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playbackStateRequestHandler;

}

@property(readonly) struct _MROrigin { }* origin;
@property bool canBeNowPlayingApp;
@property bool isOverrideApp;
@property bool keepAlive;
@property(retain) NSData * nowPlayingArtworkData;
@property(retain) NSDictionary * nowPlayingInfo;
@property unsigned int routeDiscoveryMode;
@property(copy,readonly) NSArray * commandHandlerBlocks;
@property(copy) id playbackStateRequestHandler;


- (bool)keepAlive;
- (void)setRouteDiscoveryMode:(unsigned int)arg1;
- (bool)canBeNowPlayingApp;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (id)commandHandlerBlocks;
- (id)playbackStateRequestHandler;
- (void)addCommandHandlerBlock:(id)arg1 forKey:(id)arg2;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)setPlaybackStateRequestHandler:(id)arg1;
- (void)setNowPlayingArtworkData:(id)arg1;
- (id)nowPlayingInfo;
- (id)nowPlayingArtworkData;
- (void)setKeepAlive:(bool)arg1;
- (void)setIsOverrideApp:(bool)arg1;
- (bool)isOverrideApp;
- (void)setCanBeNowPlayingApp:(bool)arg1;
- (unsigned int)routeDiscoveryMode;
- (void)setNowPlayingInfo:(id)arg1;
- (id)initWithOrigin:(struct _MROrigin { }*)arg1;
- (void)dealloc;
- (struct _MROrigin { }*)origin;

@end
