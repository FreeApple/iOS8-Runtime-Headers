/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView;

@interface SKUIIPhoneProductPageView : UIView  {
    UIView *_view;
    UIView *_bannerView;
    double _bannerOffset;
}

@property(retain) UIView * view;
@property(retain) UIView * bannerView;
@property double bannerOffset;


- (void)setBannerOffset:(double)arg1;
- (double)bannerOffset;
- (void)animateYPosition:(double)arg1;
- (void)setBannerView:(id)arg1;
- (id)bannerView;
- (id)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setView:(id)arg1;
- (void)layoutSubviews;

@end
