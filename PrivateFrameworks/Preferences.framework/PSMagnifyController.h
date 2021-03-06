/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIView, NSString, NSURL, UISegmentedControl, NSMutableDictionary, <PSMagnifyControllerDelegate>, PSMagnifyMode, NSObject<OS_dispatch_semaphore>, UIPageControl, UIScrollView;

@interface PSMagnifyController : PSListController <UIScrollViewDelegate, UIWebViewDelegate> {
    PSMagnifyMode *_originalMagnifyMode;
    PSMagnifyMode *_selectedMagnifyMode;
    UISegmentedControl *_magnifyModePicker;
    UIScrollView *_previewsScroller;
    UIPageControl *_pageControl;
    UIView *_dividerLine;
    NSURL *_HTMLResourceBaseURL;
    NSMutableDictionary *_webViewsForMagnifyMode;
    NSObject<OS_dispatch_semaphore> *_firstLoadSemaphore;
    bool_loaded;
    PSMagnifyMode *_initialMagnifyMode;
    bool_doneButtonCommits;
    <PSMagnifyControllerDelegate> *_delegate;
}

@property bool doneButtonCommits;
@property <PSMagnifyControllerDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)currentMagnifyMode;
+ (void)commitMagnifyMode:(id)arg1;
+ (id)localizedMagnifyModeName;
+ (bool)shouldShowMagnify;
+ (void)commitMagnifyMode:(id)arg1 withRelaunchURL:(id)arg2;

- (void)setDoneButtonCommits:(bool)arg1;
- (void)finishCancel:(id)arg1;
- (void)finishDone:(id)arg1;
- (void)magnifyModeConfirmed:(id)arg1;
- (bool)doneButtonCommits;
- (void)updateNavigationButtons;
- (id)currentWebViewSet;
- (void)setSelectedMagnifyMode:(id)arg1;
- (void)magnifyModeSelectionChanged:(id)arg1;
- (id)localizedCSSStringFromUnlocalizedCSSString:(id)arg1;
- (id)arrayOfWebViewsWithCount:(unsigned long long)arg1;
- (id)initWithZoomedSelected:(bool)arg1;
- (id)specifiers;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;

@end
