/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMElapsedTimeView, UIView, CAMExpandableMenuButton, <CAMTopBarDelegate>, CAMFlipButton, CAMHDRButton, CAMTimerButton, NSMutableArray, CAMFlashButton;

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate> {
    bool__flashButtonExpanded;
    bool__HDRButtonExpanded;
    bool__timerButtonExpanded;
    long long _style;
    long long _backgroundStyle;
    <CAMTopBarDelegate> *_delegate;
    CAMFlashButton *_flashButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    CAMFlipButton *_flipButton;
    CAMTimerButton *_timerButton;
    long long _orientation;
    UIView *__backgroundView;
    NSMutableArray *__allowedControls;
    CAMExpandableMenuButton *__expandedMenuButton;
    UIView *__flipButtonTopLayoutSpacer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } __expandedMenuButtonTappableInsets;
}

@property long long style;
@property long long backgroundStyle;
@property <CAMTopBarDelegate> * delegate;
@property(retain) CAMFlashButton * flashButton;
@property(retain) CAMElapsedTimeView * elapsedTimeView;
@property(retain) CAMHDRButton * HDRButton;
@property(retain) CAMFlipButton * flipButton;
@property(retain) CAMTimerButton * timerButton;
@property long long orientation;
@property(getter=isFloating,readonly) bool floating;
@property(readonly) UIView * _backgroundView;
@property(readonly) NSMutableArray * _allowedControls;
@property(getter=_isFlashButtonExpanded,setter=_setFlashButtonExpanded:) bool _flashButtonExpanded;
@property(getter=_isHDRButtonExpanded,setter=_setHDRButtonExpanded:) bool _HDRButtonExpanded;
@property(getter=_isTimerButtonExpanded,setter=_setTimerButtonExpanded:) bool _timerButtonExpanded;
@property(setter=_setExpandedMenuButton:,retain) CAMExpandableMenuButton * _expandedMenuButton;
@property(setter=_setExpandedMenuButtonTappableInsets:) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _expandedMenuButtonTappableInsets;
@property(readonly) UIView * _flipButtonTopLayoutSpacer;


- (void)_setExpandedMenuButtonTappableInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)flashButton;
- (void)_layoutFloatingRecordingStyle;
- (void)_layoutFloatingStyle;
- (void)_layoutDefaultStyle;
- (void)_setupConstraintsForFloatingRecordingStyle;
- (void)_setupConstraintsForFloatingStyle;
- (void)_setupConstraintsForDefaultStyle;
- (void)_setFlashButtonExpanded:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expandedMenuButtonTappableInsets;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForVideoMode;
- (id)_allowedControlsForStillImageMode;
- (void)_layoutControls:(id)arg1 apply:(bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (id)_allowedControls;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_backgroundEdgeInsetsForStyle:(long long)arg1;
- (void)_layoutDefaultMenuButton:(id)arg1;
- (void)_setupFloatingRecordingElapsedTimeViewConstraints;
- (void)_setupFloatingRecordingBackgroundConstraints;
- (void)_setupFloatingFlipButtonConstraints;
- (void)_setupFloatingBackgroundConstraints;
- (void)_setupDefaultElapsedTimeViewConstraints;
- (void)_setupDefaultFlipButtonConstraints;
- (void)_setupDefaultBackgroundConstraints;
- (id)_flipButtonTopLayoutSpacer;
- (bool)_buttonsExpandHorizontally;
- (bool)_isFlashButtonExpanded;
- (bool)_shouldHideFlashButton;
- (void)_updateStyleAnimated:(bool)arg1;
- (void)_commonCAMTopBarInitialization;
- (void)setFlashButton:(id)arg1;
- (void)configureForMode:(long long)arg1;
- (id)timerButton;
- (id)HDRButton;
- (void)setTimerButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(bool)arg2;
- (void)collapseMenuButton:(id)arg1 animated:(bool)arg2;
- (void)_setHDRButtonExpanded:(bool)arg1;
- (void)_setTimerButtonExpanded:(bool)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (bool)_isHDRButtonExpanded;
- (bool)_isTimerButtonExpanded;
- (bool)_shouldHideTimerButton;
- (bool)_shouldHideFlipButton;
- (bool)_shouldHideHDRButton;
- (bool)_shouldHideElapsedTimeView;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)_expandedMenuButton;
- (id)elapsedTimeView;
- (id)flipButton;
- (void)_updateBackgroundStyleAnimated:(bool)arg1;
- (bool)isFloating;
- (long long)orientation;
- (void)setStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)style;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (long long)backgroundStyle;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)_backgroundView;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
