/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, UIView;

@interface MPPlaybackTitlesView : UIControl  {
    UIView *_contentView;
    NSArray *_labels;
    NSArray *_titles;
    bool_showingLoadingUI;
    unsigned long long _marqueeScrollableIndex;
    bool_marqueeScrollingActive;
}

@property(retain) NSArray * titles;
@property bool showingLoadingUI;
@property bool marqueeScrollingActive;
@property unsigned long long marqueeScrollableIndex;
@property(readonly) UIView * contentView;


- (void)setShowingLoadingUI:(bool)arg1;
- (void)setMarqueeScrollableIndex:(unsigned long long)arg1;
- (void)setMarqueeScrollingActive:(bool)arg1;
- (bool)marqueeScrollingActive;
- (unsigned long long)marqueeScrollableIndex;
- (id)_addLoadingLabel;
- (bool)showingLoadingUI;
- (void)_tearDownLabels;
- (void)_updateLabelMarqueeScrolling;
- (void)_layoutLabels;
- (void)_layoutLoadingUI;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (id)_addLabel:(unsigned long long)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contentView;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titles;
- (void)setTitles:(id)arg1;
- (void)layoutSubviews;

@end
