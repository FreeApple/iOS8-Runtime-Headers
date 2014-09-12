/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSString, UIFont, UIImage;

@interface CertInfoGradientLabel : UIView  {
    NSString *_text;
    UIFont *_font;
    UIImage *_gradient;
    struct CGColor { } *_patternColor;
}

@property(retain) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIImage * gradient;


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)text;
- (id)font;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGColor { }*)_patternColor;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
