/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, <UIPageControllerDelegate>, UIViewController, UIScrollView, NSMutableArray, UIView;

@interface UIPageController : UIViewController  {
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    <UIPageControllerDelegate> *_delegate;
    int _pageSpacing;
    long long _visibleIndex;
    long long _pageCount;
    struct { 
        unsigned int delegateViewControllerAtIndex : 1; 
        unsigned int delegateWillBeginPaging : 1; 
        unsigned int delegateDidEndPaging : 1; 
        unsigned int displaysPageControl : 1; 
        unsigned int wraps : 1; 
    } _pageControllerFlags;
}

@property <UIPageControllerDelegate> * delegate;
@property double pageSpacing;
@property bool displaysPageControl;
@property(retain,readonly) UIViewController * visibleViewController;
@property long long pageCount;
@property long long visibleIndex;
@property bool wraps;


- (id)_scrollView;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)_pageControllerScrollView;
- (long long)indexOfViewController:(id)arg1;
- (void)setDisplaysPageControl:(bool)arg1;
- (bool)displaysPageControl;
- (void)setWraps:(bool)arg1;
- (bool)wraps;
- (void)setPageCount:(long long)arg1;
- (bool)_hasVisibleViewController;
- (bool)_needToLoadVisible;
- (double)pageSpacing;
- (void)setPageSpacing:(double)arg1;
- (bool)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1;
- (void)_pageChanged:(id)arg1;
- (void)setVisibleIndex:(long long)arg1 animated:(bool)arg2;
- (bool)_needToLoadNext;
- (bool)_needToLoadPrevious;
- (void)reloadViewControllerAtIndex:(long long)arg1;
- (void)setVisibleIndex:(long long)arg1;
- (void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(bool)arg2 animated:(bool)arg3;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (bool)_hasNextViewController;
- (bool)_hasPreviousViewController;
- (void)_notifyNextViewController:(int)arg1 animated:(bool)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(bool)arg2;
- (int)_nextViewControllerNotificationState;
- (int)_visibleViewControllerNotificationState;
- (int)_previousViewControllerNotificationState;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(bool)arg4;
- (id)_previousViewController;
- (id)_loadNextViewController;
- (id)_loadVisibleViewControllerAndNotify:(bool)arg1;
- (id)_loadPreviousViewController;
- (void)_setNextViewController:(id)arg1;
- (void)_notifyVisibleViewController:(int)arg1 animated:(bool)arg2;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (id)_visibleViewController;
- (void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (void)_adjustScrollViewContentInsets;
- (bool)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2;
- (void)_createPageControl;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollViewFrame;
- (long long)visibleIndex;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewWillBeginPaging;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(bool)arg2;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)pageCount;
- (id)visibleViewController;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (bool)_allowsAutorotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)_nextViewController;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (id)pl_existingViewControllerAtIndex:(unsigned long long)arg1;

@end
