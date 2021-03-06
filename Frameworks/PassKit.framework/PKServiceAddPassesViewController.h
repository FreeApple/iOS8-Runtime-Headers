/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UINavigationBar, PKGroupsController, NSArray, NSString, PKPassGroupStackView, NSMutableArray, NSMutableData, UIProgressView, NSURLConnection;

@interface PKServiceAddPassesViewController : UIViewController <PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol> {
    NSURLConnection *_downloadPassURLConnection;
    long long _downloadPassExpectedBytes;
    NSMutableData *_downloadPassData;
    bool_allowsPassIngestion;
    bool_alreadyAdding;
    long long _groupLoadState;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadedGroupsCallback;

    bool_haveStartedCardAnimation;
    bool_viewAppeared;
    NSMutableArray *_localPasses;
    NSArray *_localPassDatas;
    UINavigationBar *_navigationBar;
    PKPassGroupStackView *_cardStackView;
    PKGroupsController *_groupsController;
    NSMutableArray *_minimumCardHeightFromHereToTop;
    long long _presentationState;
    UIProgressView *_progressView;
}

@property(retain) UINavigationBar * navigationBar;
@property(retain) PKPassGroupStackView * cardStackView;
@property(retain) PKGroupsController * groupsController;
@property(retain) NSMutableArray * minimumCardHeightFromHereToTop;
@property(retain) NSMutableArray * localPasses;
@property(retain) NSArray * localPassDatas;
@property bool viewAppeared;
@property bool haveStartedCardAnimation;
@property long long presentationState;
@property(retain) UIProgressView * progressView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (bool)_preventsAppearanceProxyCustomization;

- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setViewAppeared:(bool)arg1;
- (bool)viewAppeared;
- (void)setMinimumCardHeightFromHereToTop:(id)arg1;
- (id)minimumCardHeightFromHereToTop;
- (void)setGroupsController:(id)arg1;
- (id)groupsController;
- (void)setCardStackView:(id)arg1;
- (id)cardStackView;
- (void)setHaveStartedCardAnimation:(bool)arg1;
- (bool)haveStartedCardAnimation;
- (id)localPassDatas;
- (void)setLocalPasses:(id)arg1;
- (id)localPasses;
- (void)animateInCardIfNeeded;
- (void)_acceptCard:(id)arg1;
- (void)loadGroups;
- (void)updateAddButtonAndSettings;
- (void)updateNavTitle;
- (void)setLocalPassDatas:(id)arg1;
- (void)showDownloadingPassUI;
- (void)acceptCard:(id)arg1;
- (void)cancelCard:(id)arg1;
- (id)genericTitleWithCount:(unsigned long long)arg1;
- (id)styleTitleUsingPass:(id)arg1 count:(unsigned long long)arg2;
- (void)updateAddButton;
- (void)tearDownDownloadConnection;
- (void)ingestCardAtURL:(id)arg1;
- (void)ingestPasses:(id)arg1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setAllowsPassIngestion:(bool)arg1;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(bool)arg3;
- (bool)passesGrowWhenFlipped;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)suppressedContent;
- (unsigned long long)numberOfGroups;
- (unsigned long long)indexOfGroup:(id)arg1;
- (void)tearDown;
- (void)setPresentationState:(long long)arg1;
- (long long)presentationState;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (void)updateCancelButton;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)shouldAutorotate;
- (id)navigationBar;

@end
