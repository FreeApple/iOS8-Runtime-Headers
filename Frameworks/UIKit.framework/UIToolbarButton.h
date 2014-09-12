/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIToolbarButtonBadge, UILabel, UIView, _UIPressedIndicatorView;

@interface UIToolbarButton : UIControl  {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _hitRect;
    UIView *_info;
    UILabel *_label;
    UIToolbarButtonBadge *_badge;
    _UIPressedIndicatorView *_pressedIndicator;
    long long _barStyle;
    long long _style;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _glowAdjust;
    bool_onState;
    bool_barHeight;
    bool_badgeAnimated;
    bool_bezel;
    double _minimumWidth;
    double _maximumWidth;
    float _labelHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _infoInsets;
    UIColor *_toolbarTintColor;
    bool_isAnimatedTrashButton;
    id _appearanceStorage;
    bool_isInTopBar;
    Class _appearanceGuideClass;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } __additionalSelectionInsets;
}

@property(setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property(getter=isAnimatedTrashButton) bool animatedTrashButton;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;
@property(setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property(setter=_setCreatedByBarButtonItem:) bool _createdByBarButtonItem;

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;

- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)_info;
- (void)setAnimatedTrashButton:(bool)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (bool)_useBarHeight;
- (void)_setBarHeight:(float)arg1;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2;
- (bool)_isOn;
- (void)_setOn:(bool)arg1;
- (double)_paddingForLeft:(bool)arg1;
- (bool)_canGetPadding;
- (void)_setInfoFlexibleWidth:(bool)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(bool)arg2;
- (void)_setInfoWidth:(float)arg1;
- (void)_setBadgeAnimated:(bool)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)setUseSelectedImage:(bool)arg1;
- (void)_showPressedIndicator:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_buttonBarHitRect;
- (void)_setButtonBarHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSizesToFitImage:(bool)arg1;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(bool)arg11 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg12 glowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg13 landscape:(bool)arg14;
- (void)_setInTopBar:(bool)arg1;
- (void)_updateInfoTextColorsForState:(unsigned long long)arg1;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(bool)arg1;
- (bool)_useSilverLook;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (bool)_shouldApplyPadding;
- (bool)_isBorderedOtherThanAccessibility;
- (bool)isAnimatedTrashButton;
- (void)_adjustToolbarButtonInfo;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_positionBadge;
- (bool)_infoIsButton;
- (void)_setPressed:(bool)arg1;
- (bool)_isBordered;
- (void)_adjustPushButtonForMiniBar:(bool)arg1 isChangingBarHeight:(bool)arg2;
- (id)_newButton;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (void)_setTouchHasHighlighted:(bool)arg1;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_setLastHighlightSuccessful:(bool)arg1;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setCreatedByBarButtonItem:(bool)arg1;
- (bool)_createdByBarButtonItem;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setWantsLetterpressContent;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3;
- (id)_tintColor;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_defaultTitleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (id)_defaultTitleColorForState:(unsigned long long)arg1;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1;
- (bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (bool)_wantsAccessibilityButtonShapes;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (Class)_appearanceGuideClass;
- (bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
