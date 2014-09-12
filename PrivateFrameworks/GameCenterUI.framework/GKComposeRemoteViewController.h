/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKUITheme, NSString;

@interface GKComposeRemoteViewController : GKRemoteViewController  {
    unsigned int _rid;
    GKUITheme *_theme;
    NSString *_defaultMessage;
}

@property(retain) GKUITheme * theme;
@property unsigned int rid;
@property(copy) NSString * defaultMessage;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)setDefaultMessage:(id)arg1;
- (id)defaultMessage;
- (unsigned int)rid;
- (void)didRequestFriends:(id)arg1;
- (id)observedKeyPaths;
- (void)sendFinishedMessageToDelegateCancelled:(bool)arg1;
- (void)addRecipientPlayerInternals:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)setRid:(unsigned int)arg1;
- (void)dealloc;

@end
