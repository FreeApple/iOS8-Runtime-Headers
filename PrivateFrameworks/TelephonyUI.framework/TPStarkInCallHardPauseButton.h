/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPStarkHardPauseButtonDelegate>;

@interface TPStarkInCallHardPauseButton : UIButton  {
    <TPStarkHardPauseButtonDelegate> *_delegate;
}

@property <TPStarkHardPauseButtonDelegate> * delegate;


- (void)hardPauseControllerChangedNotification:(id)arg1;
- (void)hardPausePressed;
- (void)updateHardPauseButtonState;
- (void)setHidden:(bool)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setHighlighted:(bool)arg1;

@end
