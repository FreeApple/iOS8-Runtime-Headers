/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, _UIBackdropView, UIControl, UIView, UISegmentedControl;

@interface SKUIProductPageHeaderFloatingView : UIView  {
    UISegmentedControl *_sectionControl;
    SKUIColorScheme *_colorScheme;
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    bool_isPad;
}

@property double backdropAlpha;
@property(retain) SKUIColorScheme * colorScheme;
@property(readonly) UIControl * sectionControl;
@property long long selectedSectionIndex;


- (double)backdropAlpha;
- (void)_reloadBackdropView;
- (void)setBackdropAlpha:(double)arg1;
- (void)setSelectedSectionIndex:(long long)arg1;
- (long long)selectedSectionIndex;
- (id)initWithSectionTitles:(id)arg1 isPad:(bool)arg2;
- (id)sectionControl;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
