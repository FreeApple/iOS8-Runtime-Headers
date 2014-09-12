/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIScrollView, NSString, NSMutableArray, UIKeyboardEmojiInputController, UIKeyboardEmojiCategory, UIPageControl, UILabel;

@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiPressIndicationDelegate> {
    UIKeyboardEmojiInputController *_inputController;
    UIKeyboardEmojiCategory *_category;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    UILabel *_categoryLabel;
    UILabel *_optionalDescription;
    NSMutableArray *_pages;
    int _currentPage;
    UIView *_pressIndicator;
    bool_whiteText;
}

@property(retain) UIView * pressIndicator;
@property bool whiteText;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setScrollDelay:(double)arg1;
- (void)dealloc;
- (void)setWhiteText:(bool)arg1;
- (void)setPressIndicator:(id)arg1;
- (void)goToFirstPage;
- (bool)shouldCache;
- (void)reloadForCategory:(id)arg1;
- (void)saveFirstVisibleEmojiIndex;
- (long long)emojiCountPerPageForRotation;
- (void)interruptScrolling;
- (void)delayLayout;
- (void)ensureSurrounded;
- (void)clearPages;
- (void)layoutPages;
- (void)layoutRecents;
- (id)pressIndicator;
- (void)doLayout;
- (void)pageChanged;
- (void)removePressIndicator;
- (void)installPressIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)currentPage;
- (void)forceLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (bool)whiteText;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
