/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, NSString, UIKBThemedView;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {
    bool_beginsFirstPage;
    bool_endsLastPage;
    bool_isAtLeftEdge;
    UIKBThemedView *_themedView;
    UILabel *_label;
    NSString *_candidateText;
}

@property(retain) UIKBThemedView * themedView;
@property(retain) UILabel * label;
@property(copy) NSString * candidateText;
@property bool beginsFirstPage;
@property bool endsLastPage;
@property bool isAtLeftEdge;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * cacheKey;
@property(readonly) bool cacheDeferable;
@property(readonly) double cachedWidth;
@property(readonly) bool keepNonPersistent;

+ (id)font;
+ (bool)highlightAffectsBackground;
+ (id)textColorWithHighlight:(bool)arg1 whiteText:(bool)arg2;
+ (bool)drawsSideBorders;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cacheInsets;
+ (double)widthForCandidateText:(id)arg1;
+ (id)reuseIdentifier;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCandidate:(id)arg1;
- (id)label;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setIsAtLeftEdge:(bool)arg1;
- (bool)isAtLeftEdge;
- (id)candidateText;
- (void)setCandidateText:(id)arg1;
- (bool)endsLastPage;
- (bool)beginsFirstPage;
- (void)setEndsLastPage:(bool)arg1;
- (void)setBeginsFirstPage:(bool)arg1;
- (void)updateIsAtLeftEdgeState;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateLabels;
- (id)themedView;
- (void)setThemedView:(id)arg1;
- (bool)keepNonPersistent;
- (bool)cacheDeferable;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (id)cacheKey;
- (void)_setRenderConfig:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)didMoveToWindow;

@end
