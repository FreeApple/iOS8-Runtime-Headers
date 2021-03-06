/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSArray, UITouch, UISelectionGrabber, UIResponder<UITextInput>, UITextSelectionView;

@interface UITextRangeView : UIView  {
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    int m_mode;
    NSArray *m_rects;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_startEdge;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_endEdge;
    struct CGPoint { 
        double x; 
        double y; 
    } m_basePoint;
    struct CGPoint { 
        double x; 
        double y; 
    } m_extentPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } m_initialBasePoint;
    struct CGPoint { 
        double x; 
        double y; 
    } m_initialExtentPoint;
    double m_initialDistance;
    struct CGPoint { 
        double x; 
        double y; 
    } m_touchOffset;
    double m_firstMovedTime;
    UISelectionGrabber *m_startGrabber;
    UISelectionGrabber *m_endGrabber;
    boolm_animateUpdate;
    boolm_baseIsStart;
    boolm_commandsWereShowing;
    boolm_inGesture;
    boolm_magnifying;
    boolm_scrolling;
    boolm_scaling;
    boolm_rotating;
    boolm_inputViewIsChanging;
}

@property(readonly) UITextSelectionView * selectionView;
@property(readonly) UIResponder<UITextInput> * container;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startEdge;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endEdge;
@property struct CGPoint { double x1; double x2; } basePoint;
@property struct CGPoint { double x1; double x2; } extentPoint;
@property int mode;
@property(retain) NSArray * rects;
@property(readonly) bool autoscrolled;
@property bool inGesture;
@property bool isScrolling;
@property bool rotating;
@property bool scaling;
@property bool inputViewIsChanging;
@property bool baseIsStart;
@property bool commandsWereShowing;
@property(retain) UISelectionGrabber * startGrabber;
@property(retain) UISelectionGrabber * endGrabber;
@property struct CGPoint { double x1; double x2; } initialExtentPoint;
@property bool animateUpdate;
@property(retain) UITouch * activeTouch;
@property struct CGPoint { double x1; double x2; } initialBasePoint;
@property double initialDistance;
@property struct CGPoint { double x1; double x2; } touchOffset;
@property double firstMovedTime;
@property bool magnifying;


- (void)removeFromSuperview;
- (void)setMode:(int)arg1;
- (id)container;
- (void)dealloc;
- (bool)inputViewIsChanging;
- (bool)rotating;
- (bool)scaling;
- (bool)isScrolling;
- (bool)magnifying;
- (bool)animateUpdate;
- (void)setEndGrabber:(id)arg1;
- (void)setStartGrabber:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertFromMagnifierPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMagnifierOrientation;
- (struct CGPoint { double x1; double x2; })touchOffset;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputViewIsChanging:(bool)arg1;
- (void)setRotating:(bool)arg1;
- (void)setScaling:(bool)arg1;
- (void)setMagnifying:(bool)arg1;
- (void)setEndEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateGrabbers;
- (void)updateRectViews;
- (double)initialDistance;
- (double)firstMovedTime;
- (void)setExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFirstMovedTime:(double)arg1;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1 touchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setInitialDistance:(double)arg1;
- (struct CGPoint { double x1; double x2; })initialBasePoint;
- (void)setInitialExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })basePoint;
- (bool)pointCloserToEnd:(struct CGPoint { double x1; double x2; })arg1 startEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 endEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)updateEdges;
- (void)setCommandsWereShowing:(bool)arg1;
- (bool)_startIsHorizontal;
- (bool)_endIsHorizontal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge;
- (void)setIsScrolling:(bool)arg1;
- (void)cancelDelayedActions;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (id)rects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionView:(id)arg2;
- (void)updateDots;
- (void)setRects:(id)arg1;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)didScroll;
- (void)willScroll;
- (struct CGPoint { double x1; double x2; })initialExtentPoint;
- (struct CGPoint { double x1; double x2; })magnifierPoint;
- (bool)commandsWereShowing;
- (void)beginMagnifying;
- (struct CGPoint { double x1; double x2; })applyTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })extentPoint;
- (void)updateBaseAndExtentPointsFromEdges;
- (id)endGrabber;
- (id)startGrabber;
- (void)setAnimateUpdate:(bool)arg1;
- (void)setBaseIsStart:(bool)arg1;
- (bool)baseIsStart;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)autoscrolled;
- (bool)inGesture;
- (void)setInGesture:(bool)arg1;
- (id)activeTouch;
- (void)setActiveTouch:(id)arg1;
- (void)didRotate;
- (void)willRotate;
- (int)mode;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (id)selectionView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
