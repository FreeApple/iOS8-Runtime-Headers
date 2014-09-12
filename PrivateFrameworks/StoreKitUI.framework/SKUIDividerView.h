/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUIDividerView : UIView  {
    long long _dividerOrientation;
    double _dividerSize;
}

@property(retain) UIColor * dividerColor;
@property long long dividerOrientation;
@property double dividerSize;


- (double)dividerSize;
- (long long)dividerOrientation;
- (void)setDividerColor:(id)arg1;
- (void)setDividerSize:(double)arg1;
- (void)setDividerOrientation:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)dividerColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
