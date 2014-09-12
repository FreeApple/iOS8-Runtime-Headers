/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageContentDelegate, UIPDFSearchHighlightsController, UIPDFViewTouchHandler, NSMutableArray, CALayer, UIColor, UIPDFSelectionController, UIActivityIndicatorView, <NSObject><UIPDFPageViewDelegate>, UIPDFAnnotationController, UIPDFPage, UIPDFDocument, UIImage;

@interface UIPDFPageView : UIView  {
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIPDFViewTouchHandler *_touchHandler;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _pageToViewTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _viewToPageTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _cropBox;
    double _margin;
    bool_allowSelection;
    UIPDFSelectionController *_selectionController;
    <NSObject><UIPDFPageViewDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } zoomRect;
    bool_useBackingLayer;
    CALayer *_backingLayer;
    UIImage *_backgroundImage;
    bool_backgroundIsScheduled;
    unsigned long long _backgroundScheduleCount;
    bool_backgroundIsFullResolution;
    bool_boundsChanged;
    bool_useTiledContent;
    CALayer *_contentLayer;
    CALayer *_effectsLayer;
    UIPDFPageContentDelegate *_contentDelegate;
    UIPDFAnnotationController *_annotationController;
    bool_scalePageOnDraw;
    struct CGColor { } *_highLightColor;
    bool_animateSetFrame;
    UIActivityIndicatorView *_activityIndicator;
    bool_showActivityIndicator;
    UIColor *_backingLayerColor;
    int _lock;
    NSMutableArray *_highlights;
    double _cachedScale;
    bool_allowHighlighting;
    UIPDFSearchHighlightsController *_searchHighlightController;
    NSMutableArray *_searchHiglightLayers;
    UIPDFPage *_page;
    boolshowAnnotations;
    bool_allowTwoFingerSelection;
    bool_showTextAnnotations;
    bool_showLinkAnnotationUnderline;
}

@property(retain,readonly) UIPDFDocument * document;
@property(readonly) unsigned long long pageIndex;
@property UIPDFPage * page;
@property <NSObject><UIPDFPageViewDelegate> * delegate;
@property double margin;
@property(readonly) CALayer * contentLayer;
@property(readonly) CALayer * effectsLayer;
@property bool allowSelection;
@property bool useBackingLayer;
@property UIPDFSelectionController * selectionController;
@property(readonly) struct CGColor { }* highLightColor;
@property bool allowMenu;
@property bool animateSetFrame;
@property(retain) UIImage * backgroundImage;
@property(retain) UIColor * backingLayerColor;
@property bool showActivityIndicator;
@property bool showAnnotations;
@property bool allowHighlighting;
@property bool showTextAnnotations;
@property(readonly) UIPDFAnnotationController * annotationController;
@property bool showLinkAnnotationUnderline;
@property bool allowTwoFingerSelection;


- (struct CGPDFDictionary { }*)_annotForPoint:(struct CGPoint { double x1; double x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (bool)showLinkAnnotationUnderline;
- (bool)showTextAnnotations;
- (void)setAllowTwoFingerSelection:(bool)arg1;
- (bool)allowTwoFingerSelection;
- (bool)showActivityIndicator;
- (bool)useBackingLayer;
- (void)setAnimateSetFrame:(bool)arg1;
- (bool)animateSetFrame;
- (void)setSelectionController:(id)arg1;
- (id)selectionController;
- (bool)allowSelection;
- (void)suspendInstantTouchHighlighting;
- (void)addWidgetToSelection;
- (id)searchHighlightSelectionAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)highlightSearchSelection:(id)arg1 animated:(bool)arg2;
- (id)effectsLayer;
- (void)showSelection;
- (void)hideSelection;
- (void)displayContent;
- (void)singleTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)twoFingerDoubleTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)doubleTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)ignoreTouches:(bool)arg1;
- (void)layoutTextEffects;
- (void)removeBackingLayer;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (bool)allowMenu;
- (bool)hasSearchHighlights;
- (void)clearSearchHighlights;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fitWidth:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atVertical:(double)arg2;
- (struct CGPoint { double x1; double x2; })convertPointToPDFPageSpace:(struct CGPoint { double x1; double x2; })arg1;
- (bool)willDoSomethingWithTap:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangleOfInterestAt:(struct CGPoint { double x1; double x2; })arg1 kind:(int*)arg2;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (void)setTransforms;
- (void)showContent;
- (void)stopActivityIndicator;
- (bool)allowHighlighting;
- (void)scheduleBackgroundImage;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (id)backingLayerColor;
- (void)addLayers:(bool)arg1;
- (struct CGColor { }*)highLightColor;
- (void)setShowTextAnnotations:(bool)arg1;
- (void)setAllowHighlighting:(bool)arg1;
- (void)setAllowMenu:(bool)arg1;
- (void)setSelectionNeedsDisplay;
- (void)addPage:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromPDFPageSpace:(struct CGPoint { double x1; double x2; })arg1;
- (bool)showAnnotations;
- (id)contentLayer;
- (id)initWithPage:(id)arg1 tiledContent:(bool)arg2;
- (void)setMargin:(double)arg1;
- (double)margin;
- (id)document;
- (void)setNeedsDisplay;
- (id)page;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (unsigned long long)pageIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromPDFPageSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToPDFPageSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowLinkAnnotationUnderline:(bool)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setBackingLayerColor:(id)arg1;
- (id)annotationController;
- (void)setUseBackingLayer:(bool)arg1;
- (void)setAllowSelection:(bool)arg1;
- (void)setShowAnnotations:(bool)arg1;
- (id)initWithPage:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)setPage:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)clearSelection;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
