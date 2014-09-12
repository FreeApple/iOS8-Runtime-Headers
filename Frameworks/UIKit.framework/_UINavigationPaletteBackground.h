/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIBackdropView, UIImageView, _UINavigationControllerPalette, UIView, UINavigationBar;

@interface _UINavigationPaletteBackground : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {
    UIColor *_barTintColor;
    UIImageView *_shadowView;
    _UINavigationControllerPalette *_palette;
    UINavigationBar *_bar;
    _UIBackdropView *_adaptiveBackdrop;
    struct { 
        unsigned int barTranslucence : 3; 
        unsigned int barStyle : 3; 
        unsigned int paletteWantsAdaptiveBackdrop : 1; 
    } _navbarFlags;
}

@property long long barStyle;
@property(retain) UIColor * barTintColor;
@property(getter=_shadowView,setter=_setShadowView:,retain) UIView * shadowView;
@property(getter=isTranslucent) bool translucent;
@property bool paletteWantsAdaptiveBackdrop;


- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setPaletteWantsAdaptiveBackdrop:(bool)arg1;
- (bool)paletteWantsAdaptiveBackdrop;
- (void)_syncWithBarStyles;
- (void)updateBackgroundView;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)_setShadowView:(id)arg1;
- (id)barTintColor;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(bool)arg2;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (long long)barStyle;
- (void)setBarStyle:(long long)arg1;
- (id)initWithNavigationBar:(id)arg1 forPalette:(id)arg2;
- (id)_shadowView;
- (void)didMoveToSuperview;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)isTranslucent;

@end
