/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIActivityIndicatorView;

@interface PLFilledActivityIndicator : UIView  {
    UIActivityIndicatorView *_indicatorView;
}


- (void)startAnimatingAfterDelay:(double)arg1;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)dealloc;
- (void)stopAnimating;
- (bool)isAnimating;
- (void)didMoveToWindow;

@end
