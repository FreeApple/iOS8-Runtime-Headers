/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, GKGameInternal, NSDate;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal  {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;

- (void)setLastPlayedGame:(id)arg1;
- (bool)isFriend;
- (int)defaultFamiliarity;
- (id)lastPlayedGame;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)dealloc;

@end
