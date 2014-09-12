/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UICalloutView;

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController  {
    UICalloutView *_calloutView;
}


- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { double x1; double x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 animated:(bool)arg5;
- (void)hideCalloutAnimated:(bool)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(bool)arg2 scrollToFit:(bool)arg3 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)_isShowingCallout;
- (double)defaultCalloutHeight;
- (void)_setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)_setDetailAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(bool)arg2;
- (id)_subtitle;
- (bool)isCalloutExpanded;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (void).cxx_destruct;
- (void)_setTitle:(id)arg1;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;

@end
