/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UILabel, UIView;

@interface MPClosedCaptionDisplay : UIView  {
    UILabel *_label;
    UIView *_backgroundView;
    bool_hidden;
    bool_rotating;
}


- (void)_hidePanel;
- (void)_updatePositioning:(bool)arg1;
- (void)endLayoutChange;
- (void)startLayoutChange:(bool)arg1;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setText:(id)arg1;

@end
