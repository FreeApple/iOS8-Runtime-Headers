/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
    CALayer *_startSelectionGrabber;
    CALayer *_startBar;
    CALayer *_endSelectionGrabber;
    CALayer *_endBar;
    CALayer *_startHandle;
    CALayer *_endHandle;
    CALayer *_fixedSelectionGrabber;
    UIPDFPageView *_pageView;
    double _handleHeight;
    double _handleWidth;
    struct CGPoint { 
        double x; 
        double y; 
    } _initialSelectionPointOnPage;
    double _offsetX;
    double _offsetY;
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    struct CGColor { } *_grabberColor;
    long long _startRectangle;
    long long _endRectangle;
    bool_startLeft;
    bool_endRight;
    double _startX;
    double _endX;
}

@property UIPDFPageView * pageView;
@property(readonly) struct CGPoint { double x1; double x2; } initialSelectionPointOnPage;
@property(readonly) struct CGPoint { double x1; double x2; } currentSelectionPointOnPage;


- (void)layoutWidget;
- (void)layoutEndSelectionGrabber:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize { double x1; double x2; })arg5;
- (void)layoutStartSelectionGrabber:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize { double x1; double x2; })arg5;
- (void)setPageView:(id)arg1;
- (struct CGPoint { double x1; double x2; })currentSelectionPointOnPage;
- (struct CGPoint { double x1; double x2; })initialSelectionPointOnPage;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })viewOffset;
- (struct CGPoint { double x1; double x2; })selectedPointFor:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1 fixedPoint:(struct CGPoint { double x1; double x2; }*)arg2 preceeds:(bool*)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)layout;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)pageView;
- (void)remove;
- (void)setSelection:(id)arg1;
- (void)hide;

@end
