/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIView, UIControl;

@interface _MKSmallCalloutPassthroughButton : UIControl  {
    UIControl *_targetControl;
    UIView *_highlightView;
    double _leftHighlightInset;
}

@property(retain) UIControl * targetControl;
@property double leftHighlightInset;


- (void)setLeftHighlightInset:(double)arg1;
- (double)leftHighlightInset;
- (id)targetControl;
- (void)handleTap:(id)arg1;
- (void)setTargetControl:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setHighlighted:(bool)arg1;

@end
