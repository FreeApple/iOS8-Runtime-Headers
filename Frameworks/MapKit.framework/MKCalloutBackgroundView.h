/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIColor, UIImageView, _MKCalloutBackgroundMaskView, UIView, NSMutableArray;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView  {
    double _arrowOffset;
    unsigned long long _arrowDirection;
    UIView *_containerView;
    UIView *_baseBorderView;
    _MKCalloutBackgroundMaskView *_mainMaskView;
    NSMutableArray *_vendedMaskViews;
    unsigned long long _mapDisplayStyle;
    UIImageView *_currentArrowShadow;
}

@property unsigned long long mapDisplayStyle;
@property(readonly) UIColor * calloutBackgroundColor;

+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (double)arrowBase;
+ (double)arrowHeight;
+ (bool)wantsDefaultContentAppearance;

- (void)setMapDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)mapDisplayStyle;
- (void)_extendLeftRightArrow;
- (void)_retractUpDownArrow;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(bool)arg2;
- (void)_setupViews;
- (id)calloutBackgroundColor;
- (id)newMaskLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)_hideArrow;
- (void)_showArrow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInsets;
- (double)arrowOffset;
- (void)setArrowOffset:(double)arg1;
- (id)_shadowPath;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)layoutSubviews;

@end
