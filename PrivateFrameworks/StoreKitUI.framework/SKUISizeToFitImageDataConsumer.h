/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer  {
    struct CGSize { 
        double width; 
        double height; 
    } _constraintSize;
    bool_custom;
    UIColor *_gradientEndColor;
    double _gradientHeight;
}

@property struct CGSize { double x1; double x2; } constraintSize;
@property(retain) UIColor * gradientEndColor;
@property double gradientHeight;

+ (id)consumerWithConstraintSize2:(struct CGSize { double x1; double x2; })arg1;
+ (id)consumerWithConstraintSize:(struct CGSize { double x1; double x2; })arg1;

- (double)gradientHeight;
- (id)gradientEndColor;
- (void)setConstraintSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_drawGradientWithContext:(struct CGContext { }*)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setGradientHeight:(double)arg1;
- (void)setGradientEndColor:(id)arg1;
- (struct CGSize { double x1; double x2; })constraintSize;
- (id)imageForImage:(id)arg1;
- (void).cxx_destruct;

@end
