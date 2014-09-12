/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSUndoManager, NSMutableArray, NSString, UIImage, UIPopoverController, NSTimer, NSArray, NSMutableDictionary, UIAlertView, UIView, PLEditOverlayTextView, EAGLContext, UIActionSheet, UIToolbar, PLImageAdjustmentView, UINavigationBar, NSObject<OS_dispatch_queue>, CIContext, CAMEffectSelectionViewController, UIScrollView, PLManagedAsset, CIFilter, PLProgressHUD;

@interface PLEditPhotoController : UIViewController <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, CAMEffectSelectionViewControllerDelegate> {
    UIScrollView *_scrollView;
    UIView *_zoomView;
    PLImageAdjustmentView *_editView;
    PLEditOverlayTextView *_messageView;
    UINavigationBar *_navigationBar;
    UIToolbar *_toolbar;
    CAMEffectSelectionViewController *_effectSelectionViewController;
    PLProgressHUD *_savingHUD;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    UIPopoverController *_popover;
    int _initialOrientation;
    NSDictionary *_initialAdjustmentState;
    NSUndoManager *_undoManager;
    NSDictionary *_previousAdjustmentState;
    NSUndoManager *_previousUndoManager;
    NSTimer *_messageTimer;
    NSMutableArray *_navBarItems;
    NSArray *_originalItems;
    PLManagedAsset *_editedPhoto;
    PLManagedAsset *_pendingPhoto;
    UIImage *_adjustedImage;
    NSArray *_autoAdjustmentFilters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _enhanceCalcRect;
    NSArray *_autoRedEyeCorrections;
    CIFilter *_autoRedEyeFilter;
    CIFilter *_redEyeFilter;
    NSArray *_effectFilters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _normalizedCropRect;
    double _straightenAngle;
    double _rotationAngle;
    NSDictionary *_cachedMetadata;
    UIImage *_scaledCachedImage;
    UIImage *_smallThumbnailImage;
    UIImage *_largeThumbnailImage;
    NSObject<OS_dispatch_queue> *_cachedImageQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didEndZoomingBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _editCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _actionCompletionBlock;

    unsigned int _redEyeCycleCount;
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
    unsigned int _isUserAction : 1;
    unsigned int _isCroppingImage : 1;
    unsigned int _didTapForRedEyeCorrection : 1;
    unsigned int _didEverTapForRedEyeCorrection : 1;
    unsigned int _isCanceling : 1;
    unsigned int _isOrderedOut : 1;
    unsigned int _autoAdjustmentEnabled : 1;
    unsigned int _preloadingEnhancementFilters : 1;
    unsigned int _applyingAutoEnhance : 1;
    unsigned int _modal : 1;
    unsigned int _isUsingProxyImage : 1;
    unsigned int _shouldPublishToPhotoStreams : 1;
    unsigned int _needsFilteredFullSizeImage : 1;
    unsigned int _preloadedEffectFilters : 1;
    unsigned int _stopPreloadEffectFilters : 1;
    bool_supportsEffects;
    unsigned long long _nextPreloadEffectFilterIndex;
    NSMutableDictionary *_thumbnailCache;
    NSDictionary *_thumbnailCacheAdjustmentState;
    CIContext *_ciContextThumbnails;
    CIContext *_ciContextFullSize;
    CIContext *_ciContextMainThread;
    EAGLContext *_glesContextThumbnails;
    EAGLContext *_glesContextFullSize;
    NSObject<OS_dispatch_queue> *_effectQueueThumbnails;
    NSObject<OS_dispatch_queue> *_effectQueueFullSize;
    int _currentMode;
    bool_savesAdjustmentsToCameraRoll;
    bool__toolbarHidden;
    long long __viewAnimationEnabledCount;
}

@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property(readonly) double straightenAngle;
@property double rotationAngle;
@property bool autoAdjustmentEnabled;
@property(retain) PLManagedAsset * editedPhoto;
@property(readonly) PLManagedAsset * pendingPhoto;
@property(retain) UINavigationBar * navigationBar;
@property(retain) UIToolbar * toolbar;
@property(readonly) UIScrollView * scrollView;
@property(copy) id actionCompletionBlock;
@property(setter=_setToolbarHidden:) bool _toolbarHidden;
@property(setter=_setViewAnimationEnabledCount:) long long _viewAnimationEnabledCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;

- (void)effectSelectionViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectSelectionViewController:(id)arg1 requestsThumbnailWithEffect:(id)arg2 completionBlock:(id)arg3;
- (bool)_toolbarHidden;
- (id)actionCompletionBlock;
- (void)updatePendingPhoto;
- (id)redEyePoints;
- (id)_autoAdjustmentFilters;
- (id)_masterImagePath;
- (void)editViewDidTouchImage:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)editViewWillCropImage:(id)arg1;
- (void)didRedoNotification:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)_computeFullSizeFilteredImageWithAdjustmentState:(id)arg1;
- (void)_thumbnailImageWithEffectFilters:(id)arg1 inputImage:(id)arg2 applyOrientation:(bool)arg3 forceSquareCrop:(bool)arg4 completionBlock:(id)arg5;
- (id)_smallThumbnailImage;
- (id)_largeThumbnailImage;
- (void)_fetchSmallThumbnailForEffectFilter:(id)arg1 completionBlock:(id)arg2;
- (void)_preloadNextEffectFilter;
- (void)_setToolbarHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })_editedImageFullSize;
- (bool)_adjustmentState:(id)arg1 isEqualTo:(id)arg2;
- (bool)_setRedEyeCorrections:(id)arg1 changedCorrections:(id*)arg2;
- (void)_updateSelectedEffect;
- (void)_cleanupFilters;
- (void)_dismissProgressAlertIfNeeded;
- (struct CGSize { double x1; double x2; })editedImageSize;
- (void)editViewDidCropImage:(id)arg1;
- (void)_displayRedEyeCorrections:(id)arg1;
- (void)_addRedEyeCorrections:(id)arg1 fromFilter:(id)arg2 isUserAction:(bool)arg3;
- (id)_calculateAutoFiltersWithFeatures:(int)arg1 includeGeometry:(bool)arg2;
- (void)_removeRedEyeCorrections:(id)arg1;
- (void)_autoAdjustImage;
- (void)_setAutoRedEyeFilterFromArray:(id)arg1;
- (id)_croppedStraightenedImage;
- (void)_saveAdjustmentsToCopy;
- (void)zoomToScale:(double)arg1 completionBlock:(id)arg2;
- (void)_updateAggregateInfoForCurrentAdjustmentState;
- (void)_saveFiltersToAsset:(id)arg1;
- (void)_saveXMPPropertiesToPhoto:(id)arg1;
- (void)_saveAdjustmentsToOriginal;
- (id)_currentNonGeometryFiltersWithEffectFilters:(id)arg1;
- (id)_newImageFromImage:(id)arg1 filters:(id)arg2 orientation:(int)arg3 ciContext:(id)arg4;
- (id)_cropAndStraightenFiltersForImageSize:(struct CGSize { double x1; double x2; })arg1 forceSquareCrop:(bool)arg2 forceUseGeometry:(bool)arg3;
- (id)_newCIImageFromUIImage:(id)arg1;
- (void)_preloadEffectFilters;
- (bool)hasRedEyeCorrections;
- (void)_setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)_computeFullSizeFilteredImage;
- (void)addRedEyePoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)removeRedEyePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStraightenAngle:(double)arg1 normalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_undoTransformImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (void)_setControlsEnabled:(bool)arg1 animated:(bool)arg2;
- (id)_currentToolbarItems;
- (id)_redEyeLabel;
- (void)_setViewAnimationsEnabled:(bool)arg1;
- (void)_setEditedImage:(id)arg1 isProxyImage:(bool)arg2 updateCropAndStraighten:(bool)arg3 forceAnimate:(bool)arg4;
- (void)_setViewAnimationEnabledCount:(long long)arg1;
- (long long)_viewAnimationEnabledCount;
- (void)_updateEnhanceButton;
- (void)orderOut:(bool)arg1 forceCompletion:(bool)arg2;
- (id)_buttonWithTag:(long long)arg1;
- (void)saveAdjustments;
- (void)_verifyProgress:(id)arg1 completion:(id)arg2;
- (id)_constrainActionSheet;
- (void)_setEditMode:(int)arg1;
- (void)_rotatePhotoByAngle:(double)arg1;
- (void)setAutoAdjustmentEnabled:(bool)arg1;
- (bool)autoAdjustmentEnabled;
- (void)_loadFiltersFromDatabase;
- (void)_setAutoAdjustmentFilters:(id)arg1;
- (id)_originalState;
- (void)_setAdjustmentState:(id)arg1;
- (void)_presentEffectSelection;
- (void)_updateModeButtons;
- (void)_updateToolbarSetHiddenState:(bool)arg1;
- (void)_pushModalState;
- (void)_popModalState;
- (void)_displayAllRedEyeCorrections;
- (void)_dismissEffectSelection;
- (void)setActionCompletionBlock:(id)arg1;
- (void)hideMessage:(id)arg1;
- (void)showMessage:(id)arg1 duration:(double)arg2;
- (void)applySubmode:(id)arg1;
- (void)revertToSaved:(id)arg1;
- (void)showConstraints:(id)arg1;
- (void)selectEditMode:(id)arg1;
- (void)enhancePhoto:(id)arg1;
- (id)_newButtonItemWithIcon:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tag:(long long)arg5;
- (void)rotatePhoto:(id)arg1;
- (id)_cropAndStraightenToolbarItems;
- (id)_startToolbarItems;
- (id)_rightButtonForMode:(int)arg1 enableDone:(bool)arg2 enableSave:(bool)arg3;
- (void)revertToOriginal:(id)arg1;
- (void)_layoutToolbar;
- (double)rotatedZoomToFitScale;
- (void)sizeToFit:(bool)arg1;
- (void)_updateMessageOverlayFrame;
- (void)_updateCropInsetsForOrientation:(long long)arg1;
- (void)_pushNewUndoManager;
- (bool)_isZoomedToScale:(double)arg1;
- (void)_displayAutoAdjustmentMessage;
- (void)_updateEditedImage:(bool)arg1;
- (void)_preloadEnhancementFilters;
- (bool)_currentStateIsEqualToAdjustmentState:(id)arg1;
- (id)newAdjustedImageWithoutGeometryUsingContext:(id)arg1;
- (id)_scaledCachedImage;
- (id)_adjustmentState;
- (void)setEditedPhoto:(id)arg1;
- (void)_startEditingWithAsset:(id)arg1;
- (void)_updateControls;
- (void)_presentSavingHUD;
- (void)_setEditedImage:(id)arg1 isProxyImage:(bool)arg2 updateCropAndStraighten:(bool)arg3;
- (void)_setEditedPhoto:(id)arg1 resetFilters:(bool)arg2;
- (bool)_dismissPopoverViews;
- (void)_dismissSavingHUD;
- (void)forceCompletion;
- (void)startEditingAsset:(id)arg1 proxyImage:(id)arg2 completion:(id)arg3;
- (bool)savesAdjustmentsToCameraRoll;
- (void)setMinimumZoom:(double)arg1 maximumZoom:(double)arg2;
- (double)zoomToFitScale;
- (id)pendingPhoto;
- (id)editedPhoto;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (double)straightenAngle;
- (void)assetContainerDidChange:(id)arg1;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (void)_updateToolbar;
- (bool)isEditing;
- (void)_setUndoManager:(id)arg1;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)_updateButtons;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setToolbar:(id)arg1;
- (id)scrollView;
- (id)toolbar;
- (void)setToolbarItems:(id)arg1 animated:(bool)arg2;
- (bool)hidesBottomBarWhenPushed;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setNavigationBar:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)undo:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (id)navigationItem;
- (id)navigationBar;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
