/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, GKSession, GKVoiceChatSession;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate> {
    NSArray *_players;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playerStateUpdateHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playerVoiceChatStateDidChangeHandler;

    GKSession *_gkSession;
    GKVoiceChatSession *_gkVoiceChatSession;
}

@property(copy) id playerVoiceChatStateDidChangeHandler;
@property(copy,readonly) NSString * name;
@property(getter=isActive) bool active;
@property float volume;
@property(retain) NSArray * players;
@property(retain) GKSession * gkSession;
@property(retain) GKVoiceChatSession * gkVoiceChatSession;
@property(copy) id playerStateUpdateHandler;

+ (bool)isVoIPAllowed;

- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3;
- (void)setPlayers:(id)arg1;
- (void)setGkVoiceChatSession:(id)arg1;
- (id)gkVoiceChatSession;
- (void)setGkSession:(id)arg1;
- (id)gkSession;
- (void)setPlayerVoiceChatStateDidChangeHandler:(id)arg1;
- (id)playerVoiceChatStateDidChangeHandler;
- (void)setPlayerStateUpdateHandler:(id)arg1;
- (id)playerStateUpdateHandler;
- (void)setLegacyMute:(bool)arg1 forPlayer:(id)arg2;
- (void)setPlayer:(id)arg1 muted:(bool)arg2;
- (id)playerIDs;
- (id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3;
- (id)players;
- (void)setVolume:(float)arg1;
- (float)volume;
- (bool)isActive;
- (void)stop;
- (id)name;
- (void)start;
- (void)dealloc;
- (void)setActive:(bool)arg1;

@end
