/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UISwappableImageViewAnimationProxy, UIToolbar;

@interface UISwappableImageView : UIImageView  {
    id _value;
    id _alternate;
    double _scale;
    bool_showAlternate;
    bool_flipped;
    bool_updateImage;
    bool_bezel;
    int _bezelStyle;
    int _currentAnimation;
    UIToolbar *_buttonBar;
    int _buttonTag;
    _UISwappableImageViewAnimationProxy *_proxy;
    long long _barButtonItemStyle;
    bool_didDisableWindowAutorotation;
    id _didFinishTarget;
    SEL _didFinishSelector;
}


- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)animateImage:(float)arg1 withButtonBar:(id)arg2 withTag:(int)arg3 target:(id)arg4 didFinishSelector:(SEL)arg5;
- (void)setFlipped:(bool)arg1;
- (void)showAlternateImage:(bool)arg1;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(long long)arg3 barButtonItemStyle:(long long)arg4 tintColor:(id)arg5 bezel:(bool)arg6;
- (void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 iconTintColor:(id)arg3 iconTintColorDidChange:(bool)arg4;
- (void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2;
- (void)updateImageIfNeeded;
- (void)updateImageIfNeededWithTintColor:(id)arg1;
- (void)_willMoveToWindow:(id)arg1;

@end
