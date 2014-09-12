/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIBarButtonItem, NSCache, UITableView, <PLCommentsViewControllerDelegate>, _UIBackdropView, UIView, CAGradientLayer, NSString, PLCloudSharedComment, PLManagedAsset, PLPhotoCommentEntryView, UIImageView;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    UIView *_tableContainerView;
    PLManagedAsset *_asset;
    CAGradientLayer *_maskLayer;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    bool_justTappedSmileButton;
    bool_editMode;
    bool_temporaryKeyboardHideReshow;
    bool_shouldAdjustInitialScrollPosition;
    double _keyboardOverlap;
    <PLCommentsViewControllerDelegate> *_commentsControllerDelegate;
    UIView *_containerView;
    NSCache *_commentsHeightCache;
    UIImageView *_gradientView;
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_cancelButton;
    bool_isCompact;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _availableBounds;
}

@property(retain) PLManagedAsset * asset;
@property bool isCompact;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableBounds;
@property bool editMode;
@property(readonly) UIBarButtonItem * cancelButton;
@property <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property(retain) PLCloudSharedComment * justInsertedComment;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)prepareForDismissingForced:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableBounds;
- (id)commentsControllerDelegate;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (id)justInsertedComment;
- (bool)checkAndAlertMaxLikesReached;
- (void)setEditMode:(bool)arg1;
- (bool)_checkAndAlertMaxCommentsReachedWhenFinalizing:(bool)arg1;
- (void)_addCommentButtonTapped:(id)arg1;
- (void)_smileButtonTapped:(id)arg1;
- (long long)textCommentSection;
- (long long)assetOwnerCommentSection;
- (long long)smileCommentSection;
- (bool)shouldShowCommentPostingUI;
- (id)_firstUnreadCloudComment;
- (void)_postCommentValidated:(id)arg1;
- (long long)postCommentSection;
- (struct CGSize { double x1; double x2; })_preferredViewSizeInContainerSize:(struct CGSize { double x1; double x2; })arg1 forInterfaceOrientation:(long long)arg2 tableViewSize:(struct CGSize { double x1; double x2; }*)arg3;
- (void)_stopWatchingKeyboard;
- (void)_startWatchingKeyboard;
- (void)_adjustInitialScrollPosition:(bool)arg1;
- (void)_updateLayerMaskWithBoundsChange;
- (bool)_adjustTextEntrySize;
- (double)_tableViewHeightForWidth:(double)arg1 interfaceOrientation:(long long)arg2;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (bool)showAssetOwnerSection;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (void)setCommentsControllerDelegate:(id)arg1;
- (void)setAvailableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsCompact:(bool)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (void)setRasterization:(bool)arg1;
- (void)cancelCurrentAction:(id)arg1;
- (bool)editMode;
- (void)scrollToComment:(id)arg1 animated:(bool)arg2;
- (bool)isCompact;
- (void)cloudCommentsDidChange:(id)arg1;
- (id)asset;
- (void)dealloc;
- (void)setAsset:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)cancelButton;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
