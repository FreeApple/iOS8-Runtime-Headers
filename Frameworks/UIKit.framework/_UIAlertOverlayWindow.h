/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertOverlayWindow : UIWindow  {
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)_isSystemWindow;

- (id)representation;
- (void)_handleMouseUp:(struct __GSEvent { }*)arg1;
- (int)textEffectsVisibilityLevel;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (void)_updateTransformLayerForClassicPresentation;
- (bool)isInternalWindow;
- (bool)_canAffectStatusBarAppearance;

@end
