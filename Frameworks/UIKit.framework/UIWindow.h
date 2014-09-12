/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIResponder, UIScreen, _UIWindowAnimationController, _UISystemGestureGateGestureRecognizer, UIViewController, NSMutableArray, CALayer, UIView, UIColor, NSString, NSUndoManager, _UIViewControllerNullAnimationTransitionCoordinator, UITraitCollection, NSMutableSet, _UISimulatedApplicationResizeGestureRecognizerDelegate, _UIResponderSelectionCursor, NSArray, FBSScene;

@interface UIWindow : UIView <NSISEngineDelegate> {
    id _delegate;
    double _windowLevel;
    double _windowSublevel;
    id _layerContext;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    id _touchData;
    long long _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    UIScreen *_screen;
    CALayer *_transformLayer;
    NSMutableArray *_rotationViewControllers;
    UIViewController *_rootViewController;
    UIColor *_savedBackgroundColor;
    NSMutableSet *_subtreeMonitoringViews;
    NSMutableSet *_tintViews;
    id _currentTintView;
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int isHandlingContentRotation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
        unsigned int legacyOrientationChecks : 1; 
        unsigned int windowResizedToFullScreen : 1; 
        unsigned int statusBarFollowsOrientation : 1; 
        unsigned int secure : 1; 
        unsigned int isMainSceneSized : 1; 
    } _windowFlags;
    id _windowController;
    bool_attachable;
    NSString *_debugName;
    FBSScene *_scene;
    _UIResponderSelectionCursor *_responderSelectionCursor;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    struct __CFDictionary { } *_touchMap;
    long long _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    unsigned int _systemGesturesArePossible : 1;
    long long _verticalSizeClassStateRestorationOverride;
    long long _horizontalSizeClassStateRestorationOverride;
    bool_shouldDisableTransformLayerScalingForSnapshotting;
    bool__containedGestureRecognizersShouldRespectGestureServerInstructions;
    bool__usesLegacySupportedOrientationChecks;
    bool__shouldHitTestEntireScreen;
    _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
    NSArray *_windowInternalConstraints;
    NSArray *_rootViewConstraints;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deferredLaunchBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __rotationCompleteBlock;

    long long _toWindowOrientation;
    long long _fromWindowOrientation;
    _UIWindowAnimationController *__animationController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __shouldPreventRotationHook;

    _UISimulatedApplicationResizeGestureRecognizerDelegate *__simulatedApplicationResizeGestureRecognizerDelegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) UIScreen * screen;
@property double windowLevel;
@property(getter=isKeyWindow,readonly) bool keyWindow;
@property(retain) UIViewController * rootViewController;
@property(setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) bool _containedGestureRecognizersShouldRespectGestureServerInstructions;
@property(setter=_setShouldDisableTransformLayerScalingForSnapshotting:) bool _shouldDisableTransformLayerScalingForSnapshotting;
@property(setter=_setWindowInternalConstraints:,copy) NSArray * _windowInternalConstraints;
@property(readonly) bool _usesLegacySupportedOrientationChecks;
@property(setter=_setDeferredLaunchBlock:,copy) id _deferredLaunchBlock;
@property(setter=_setRotationCompleteBlock:,copy) id _rotationCompleteBlock;
@property(setter=_setLegacyOrientationChecks:) bool _legacyOrientationChecks;
@property(getter=_toWindowOrientation,readonly) long long toWindowOrientation;
@property(getter=_fromWindowOrientation,readonly) long long fromWindowOrientation;
@property(getter=_animationController,setter=_setAnimationController:,retain) _UIWindowAnimationController * _animationController;
@property(readonly) struct { long long x1; long long x2; } __sizeClassPair;
@property(setter=_setShouldPreventRotationHook:,copy) id _shouldPreventRotationHook;
@property(setter=_setRootViewConstraints:,copy) NSArray * _rootViewConstraints;
@property(setter=_setSimulatedApplicationResizeGestureRecognizerDelegate:,retain) _UISimulatedApplicationResizeGestureRecognizerDelegate * _simulatedApplicationResizeGestureRecognizerDelegate;
@property(setter=_setShouldHitTestEntireScreen:) bool _shouldHitTestEntireScreen;
@property(setter=_setTraitCollectionChangeTransitionCoordinator:,retain) _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;

+ (void)initialize;
+ (id)_findWithDisplayPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_statusBarControllingWindow;
+ (void*)createScreenIOSurface;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 usePurpleGfx:(bool)arg4 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg5;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_popKeyWindow;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(bool)arg1;
+ (void)_clearKeyWindowStack;
+ (void)_setTransformLayerRotationsAreEnabled:(bool)arg1;
+ (void)setAllWindowsKeepContextInBackground:(bool)arg1;
+ (Class)layerClass;
+ (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 withBlock:(id)arg3;
+ (id)_hitTestToPoint:(struct CGPoint { double x1; double x2; })arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceFromScreen:(id)arg1;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned long long)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 usePurpleGfx:(bool)arg5 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6;
+ (void)_popKeyWindow:(id)arg1;
+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(bool)arg2;
+ (unsigned long long)_keyWindowStackSize;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id)arg2;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)arg1;
+ (bool)_transformLayerRotationsAreEnabled;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)_isSecure;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (void)_prepareWindowsForAppResume;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (void)_prepareWindowsPassingTestForAppResume:(id)arg1;
+ (id)_externalKeyWindow;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 forScreen:(id)arg3;
+ (void)_prepareWindowsForAppSuspend;
+ (id)_topVisibleWindowPassingTest:(id)arg1;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2;
+ (void)_synchronizeDrawing;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(bool)arg3;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (id)keyWindow;
+ (void)_executeDeferredLaunchBlocks;
+ (id)allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
+ (bool)_isSystemWindow;

- (void)setHidden:(bool)arg1;
- (void)makeKeyAndVisible;
- (void)setRootViewController:(id)arg1;
- (void)sendEvent:(id)arg1;
- (bool)isKeyWindow;
- (bool)becomeFirstResponder;
- (id)nextResponder;
- (id)undoManager;
- (id)firstResponder;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLevel:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (double)level;
- (id)representation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)removeFromSuperview;
- (void)_commonInit;
- (id)screen;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (bool)_isLoweringAnchoringConstraints;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(bool)arg2 contentInsetScale:(double)arg3;
- (void)_setIsLoweringAnchoringConstraints:(bool)arg1;
- (void)_uiib_invalidateWindowInternalConstraints;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (bool)hasAmbiguousLayout;
- (id)_redundantConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)exerciseAmbiguityInLayout;
- (id)_descendantWithAmbiguousLayout;
- (id)_uiib_candidateRedundantConstraints;
- (void)_initializeLayoutEngine;
- (void)_invalidateWindowInternalConstraints;
- (id)_hostingHandle;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)matchDeviceOrientation:(id)arg1;
- (void)setupForOrientation:(long long)arg1;
- (bool)inhibitTextEffectsRotation;
- (void)keyboardDidHide;
- (void)_matchDeviceOrientation;
- (double)_classicOffset;
- (bool)inhibitManualTransform;
- (bool)inhibitSetupOrientation;
- (void)updateConstraints;
- (id)_layoutEngineIfAvailable;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (id)_responderWindow;
- (void)updateConstraintsIfNeeded;
- (void)_switchToLayoutEngine:(id)arg1;
- (id)_layoutEngineCreateIfNecessary;
- (void)_setShouldPreventRotationHook:(id)arg1;
- (void)_setAnimationController:(id)arg1;
- (long long)_fromWindowOrientation;
- (bool)_usesLegacySupportedOrientationChecks;
- (void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(bool)arg1;
- (bool)_containedGestureRecognizersShouldRespectGestureServerInstructions;
- (id)_windowInternalConstraints;
- (id)_traitCollectionChangeTransitionCoordinator;
- (bool)_appearsInLoupe;
- (id)_normalInheritedTintColor;
- (id)_rootLayer;
- (id)_directionalGestureRecognizers;
- (void)_geometryDidChangeForView:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (void)_writeLayerTreeToPath:(id)arg1;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (void)setKeepContextInBackground:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isInAWindow;
- (struct CGPoint { double x1; double x2; })_convertDoublePointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertDoublePointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void*)createIOSurface;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (bool)_becomeFirstResponderWhenPossible;
- (id)_firstResponder;
- (bool)_isSettingFirstResponder;
- (void)_setIsSettingFirstResponder:(bool)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_unregisterChargedView:(id)arg1;
- (void)_registerChargedView:(id)arg1;
- (void)_makeExternalKeyWindow;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (struct { long long x1; long long x2; })__sizeClassPair;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_traitCollectionWhenRotated;
- (bool)_shouldDelayTouchForSystemGestures:(id)arg1;
- (bool)_systemGestureRecognitionIsPossible;
- (id)_appearanceContainer;
- (void)synchronizeDrawingWithID:(int)arg1 count:(unsigned long long)arg2;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (bool)isUsingOnePartRotationAnimation;
- (bool)autorotates;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 force:(bool)arg4;
- (void)_forceTwoPartRotationAnimation:(bool)arg1;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAutorotates:(bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateToInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)_setWindowControlsStatusBarOrientation:(bool)arg1;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (void)_clearPendingKeyboardChanges;
- (void)_removeRotationViewController:(id)arg1;
- (void)_addRotationViewController:(id)arg1;
- (void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)setBecomeKeyOnOrderFront:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertDeviceToWindow:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertWindowToDevice:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_containedInAbsoluteResponderChain;
- (double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertOffsetFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertOffsetToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertOffset:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertOffset:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (bool)_disableAutomaticKeyboardUI;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (void)makeKey:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)_setLegacyOrientationChecks:(bool)arg1;
- (bool)_legacyOrientationChecks;
- (bool)_disableViewScaling;
- (void)_orderContextToFront;
- (bool)_hasContext;
- (void)_transformLayerShouldMaskToBounds:(bool)arg1;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2;
- (id)_debugName;
- (bool)_shouldHitTestEntireScreen;
- (id)_simulatedApplicationResizeGestureRecognizerDelegate;
- (void)_setSimulatedApplicationResizeGestureRecognizerDelegate:(id)arg1;
- (void)_scrollResponderToVisible:(id)arg1;
- (bool)_isPoint:(struct CGPoint { double x1; double x2; })arg1 relativeToPoint:(struct CGPoint { double x1; double x2; })arg2 inDirection:(long long)arg3;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)loadFirstResponderScrollViewContentInDirection:(struct CGSize { double x1; double x2; })arg1;
- (void)_moveResponderSelectionInDirection:(long long)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_moveWithEvent:(id)arg1;
- (void)moveToNextResponderInDirection:(long long)arg1;
- (bool)resizesToFullScreen;
- (void)_updateCurrentTintView;
- (void)_updateAppTintView;
- (bool)_shouldResizeWithScene;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (bool)_isStatusBarWindow;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (bool)_canPromoteFromKeyWindowStack;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint { double x1; double x2; })arg1;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateIsSceneSizedFlag;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screenCollection:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { double x1; double x2; })arg1 screen:(id)arg2;
- (void)_updateWindowTraitsAndNotify:(bool)arg1;
- (bool)_shouldPrepareScreenForWindow;
- (bool)_alwaysGetsContexts;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(bool)arg4;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)__clientsForRotationCallbacks;
- (void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3 skipCallbacks:(bool)arg4;
- (void)_rotateToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sendTraitNotifications:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 applyTransformToWindow:(bool)arg3 updateStatusBar:(bool)arg4 duration:(double)arg5 force:(bool)arg6 isRotating:(bool)arg7;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5 isRotating:(bool)arg6;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 fenceID:(int)arg3 animation:(int)arg4;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(bool)arg2 duration:(double)arg3 force:(bool)arg4;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (void)setAutorotates:(bool)arg1 forceUpdateInterfaceOrientation:(bool)arg2;
- (void)endDisablingInterfaceAutorotationAnimated:(bool)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (bool)isInterfaceAutorotationDisabled;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(bool)arg1;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(bool)arg3;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(bool)arg1;
- (void)_setShouldHitTestEntireScreen:(bool)arg1;
- (id)_rotationCompleteBlock;
- (void)_willChangeToSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
- (long long)_toWindowOrientation;
- (void)_setDeferredLaunchBlock:(id)arg1;
- (void)_updateSimulatedApplicationResizeGestureForInterfaceOrientationChange;
- (bool)_isAnyWindowRotating;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(bool)arg2 isRotationDisabled:(bool*)arg3;
- (id)_shouldPreventRotationHook;
- (bool)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)_clientsForRotation;
- (id)_rotationViewControllers;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (id)_rootForKeyResponderCycle;
- (struct CGPoint { double x1; double x2; })_convertPointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendButtonGesturesForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (bool)_isScrollingEnabledForView:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (double)_chargeMultiplicationFactor;
- (double)_touchSloppinessFactor;
- (void)_setHidden:(bool)arg1 forced:(bool)arg2;
- (void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(bool)arg3;
- (id)_deferredLaunchBlock;
- (void)addRootViewControllerViewIfPossible;
- (void)_resignKeyWindowStatus;
- (void)makeKeyWindow;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_setRootViewConstraints:(id)arg1;
- (id)_rootViewConstraints;
- (void)_beginKeyWindowDeferral;
- (void)_destroyContext;
- (bool)keepContextInBackground;
- (void)_createContext;
- (void)_destroyContextFromScreen:(id)arg1;
- (void)_updateSceneIfNecessary;
- (void)_configureContextOptions:(id)arg1;
- (bool)_shouldCreateContextAsSecure;
- (bool)_disableGroupOpacity;
- (bool)_ignoresHitTest;
- (int)windowOutput;
- (void)_createContextAttached:(bool)arg1;
- (bool)_isClippedByScreenJail;
- (void)_updateTransformLayerForClassicPresentation;
- (bool)_isOffsetByScreenJail;
- (bool)_shouldApplyHorizontalPixelScaleTransform;
- (bool)_isScaledByScreenJail;
- (bool)_isRotatedByScreenJail;
- (bool)_shouldDisableTransformLayerScalingForSnapshotting;
- (void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(bool)arg1;
- (void)_endKeyWindowDeferral;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setWindowInternalConstraints:(id)arg1;
- (void)awakeFromNib;
- (void)setScreen:(id)arg1;
- (void)_updateContextOrderingAndSetLayerHidden:(bool)arg1;
- (int)bitsPerComponent;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 scene:(id)arg3 attached:(bool)arg4;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 attached:(bool)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attached:(bool)arg2;
- (void)_commonInitAttachedWindow:(bool)arg1 debugName:(id)arg2 scene:(id)arg3;
- (void)_installSimulatedApplicationResizeGesture;
- (void)_createContextIfNecessaryForCurrentApplicationState;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)_sceneBoundsDidChange;
- (void)_updateTransformLayer;
- (bool)_isSecure;
- (void)_setScene:(id)arg1;
- (id)_window;
- (id)_window;
- (bool)isInternalWindow;
- (bool)_canBecomeKeyWindow;
- (bool)_canAffectStatusBarAppearance;
- (id)_targetWindowForPathIndex:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (bool)_usesWindowServerHitTesting;
- (void)endDisablingInterfaceAutorotation;
- (void)beginDisablingInterfaceAutorotation;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (bool)_isHostedInAnotherProcess;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneBounds;
- (bool)_isConstrainedByScreenJail;
- (void)_setExclusiveTouchView:(id)arg1;
- (id)_exclusiveTouchView;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })warpPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_clampPointToScreenJail:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSystemGestureRecognitionIsPossible:(bool)arg1 andTouchesAreCancelled:(bool)arg2;
- (void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2;
- (void)_setFirstResponder:(id)arg1;
- (void)_clearSizeClassesForStateRestoration;
- (void)_setShouldDisableTransformLayerScalingForSnapshotting:(bool)arg1;
- (double)windowLevel;
- (id)traitCollection;
- (bool)_isWindowServerHostingManaged;
- (void)_setSecure:(bool)arg1;
- (void)_endModalSession;
- (void)_beginModalSession;
- (id)_scene;
- (id)rootViewController;
- (void)_updateWindowTraits;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_windowInterfaceOrientation;
- (void)_willTransitionToVirtualHorizontalSizeClass:(long long)arg1 virtualVerticalSizeClass:(long long)arg2;
- (bool)_shouldParticipateInVirtualResizing;
- (id)_deepestUnambiguousResponder;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (id)_touchData;
- (void)synchronizeDrawingWithID:(int)arg1;
- (struct __CFDictionary { }*)_touchMap;
- (bool)_needsShakesWhenInactive;
- (bool)_includeInDefaultImageSnapshot;
- (bool)_shouldZoom;
- (void)_setRotationCompleteBlock:(id)arg1;
- (bool)isRotating;
- (id)_currentTintView;
- (bool)_windowControlsStatusBarOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneReferenceBounds;
- (unsigned int)_contextId;
- (void)_orderFrontWithoutMakingKey;
- (void)setWindowLevel:(double)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_resizeWindowToFullScreenIfNecessary;
- (void)setResizesToFullScreen:(bool)arg1;
- (id)_initWithOrientation:(long long)arg1;
- (bool)_isTextEffectsWindow;
- (bool)_clearMouseView;
- (id)_animationController;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_screen;
- (id)copyIOSurfaceSnapshotView:(long long)arg1;
- (id)removeTouchCaptureViewWithTag:(long long)arg1;
- (id)addTouchCaptureViewWithTag:(long long)arg1;

@end
