/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarStyleAttributes, UIStatusBarCorners, UIImageView;

@interface UIStatusBarBackgroundView : UIView  {
    UIStatusBarStyleAttributes *_style;
    UIStatusBarCorners *_topCorners;
    UIImageView *_glowView;
    bool_glowEnabled;
    bool_suppressGlow;
}


- (id)style;
- (void)dealloc;
- (void)setSuppressesGlow:(bool)arg1;
- (void)setGlowAnimationEnabled:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(id)arg2 backgroundColor:(id)arg3;
- (id)_backgroundImageName;
- (id)_glowImage;
- (bool)_styleCanGlow;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(bool)arg1;
- (void)_setGlowAnimationEnabled:(bool)arg1 waitForNextCycle:(bool)arg2;
- (bool)_topCornersAreRounded;
- (id)_baseImage;

@end
