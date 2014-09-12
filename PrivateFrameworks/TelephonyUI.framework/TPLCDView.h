/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar  {
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled : 1;
    bool_verticallyCenterTextViewIfLabelless;
}

@property bool verticallyCenterTextViewIfLabelless;

+ (double)defaultLabelFontSize;
+ (double)defaultTextFontSize;

- (void)setVerticallyCenterTextViewIfLabelless:(bool)arg1;
- (id)secondLineText;
- (void)setSecondLineText:(id)arg1;
- (void)setLayoutAsLabelled:(bool)arg1;
- (void)setSubImage:(id)arg1;
- (void)blinkLabel;
- (void)setLabelFontSize:(double)arg1;
- (void)setTextFontSize:(double)arg1;
- (void)setContentsAlpha:(double)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setLabel:(id)arg1 animate:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageViewFrame;
- (bool)shouldCenterText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_text1Frame;
- (bool)verticallyCenterTextViewIfLabelless;
- (bool)shouldCenterContentView;
- (double)_labelVInset;
- (double)_textVInset;
- (void)_resetContentViewFrame;
- (id)subImage;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullSizedContentViewFrame;
- (id)text;
- (id)label;
- (void)setShadowColor:(id)arg1;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
