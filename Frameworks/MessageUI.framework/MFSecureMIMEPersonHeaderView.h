/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSString, UILabel, UIView;

@interface MFSecureMIMEPersonHeaderView : UIView  {
    UIView *_backgroundView;
    UIView *_signedLabel;
    UIView *_secureLabel;
    UIView *_warningLabel;
    UILabel *_label;
    NSArray *_buttons;
    unsigned int _editing : 1;
}

@property(copy) NSString * signedLabelText;
@property(copy) NSString * secureLabelText;
@property(copy) NSString * warningLabelText;
@property(copy) NSString * explanationText;
@property(copy) NSArray * buttons;
@property bool editing;

+ (id)_explanationLabelDefaultAttributes;

- (id)warningLabelText;
- (id)secureLabelText;
- (id)signedLabelText;
- (void)setSignedLabelText:(id)arg1;
- (bool)showsButtons;
- (double)widthForSizingToFitSize:(struct CGSize { double x1; double x2; })arg1;
- (double)heightOfBottomMargin;
- (double)heightThatFitsButtons;
- (double)heightThatFitsMainLabel:(struct CGSize { double x1; double x2; })arg1;
- (double)heightThatFitsSubview:(id)arg1 padding:(double)arg2;
- (void)_insert:(bool)arg1 subview:(id)arg2;
- (id)_warningLabel;
- (id)_secureLabel;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (id)_signedLabel;
- (void)setExplanationText:(id)arg1;
- (void)setWarningLabelText:(id)arg1;
- (void)setSecureLabelText:(id)arg1;
- (id)explanationText;
- (void)setButtons:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)buttons;
- (void)setEditing:(bool)arg1;
- (bool)editing;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
