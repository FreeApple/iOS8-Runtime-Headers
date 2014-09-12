/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, <PSPINEntryViewDelegate>, UILabel, FailureBarView;

@interface PINView : UIView <PINEntryView> {
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    bool_error;
    <PSPINEntryViewDelegate> *_delegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)notifyDelegatePINEntered;
- (void)notifyDelegatePINChanged;
- (void)setBlocked:(bool)arg1;
- (void)hidePasscodeField:(bool)arg1;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)showError:(id)arg1 animate:(bool)arg2;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(bool)arg2;
- (void)hideError;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (bool)becomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (id)stringValue;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (void)deleteLastCharacter;

@end
