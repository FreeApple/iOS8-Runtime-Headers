/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UITextField, UIImageView, UILabel, UIPasscodeField;

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {
    UILabel *_titleLabel;
    UILabel *_enterLabel;
    UIPasscodeField *_passcodeField;
    UITextField *_textEntryField;
    UILabel *_failedLabel;
    UIImageView *_failedBackground;
    long long _failedAttemptCount;
}

@property(retain) UILabel * titleLabel;
@property(retain) UILabel * enterLabel;
@property(retain) UIPasscodeField * passcodeField;
@property(retain) UITextField * textEntryField;
@property(retain) UILabel * failedLabel;
@property(retain) UIImageView * failedBackground;
@property long long failedAttemptCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)dealloc;
- (void)setFailedAttemptCount:(long long)arg1;
- (long long)failedAttemptCount;
- (id)failedBackground;
- (id)failedLabel;
- (id)textEntryField;
- (id)passcodeField;
- (id)enterLabel;
- (void)showSuccess:(bool)arg1;
- (id)PIN;
- (void)stopPINInput;
- (void)startPINInput;
- (id)initWithPrinterName:(id)arg1;
- (void)setFailedBackground:(id)arg1;
- (void)setFailedLabel:(id)arg1;
- (void)setTextEntryField:(id)arg1;
- (void)setPasscodeField:(id)arg1;
- (void)setEnterLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)titleLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
