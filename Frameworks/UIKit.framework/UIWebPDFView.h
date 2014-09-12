/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSData, WebPDFViewPlaceholder, UITapGestureRecognizer, NSArray, NSURL, NSString, UIPDFDocument, NSMutableArray, NSObject<UIWebPDFViewDelegate>, UIColor;

@interface UIWebPDFView : UIView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument { } *_cgPDFDocument;
    UIPDFDocument *_document;
    bool_hasScheduledCacheUpdate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _documentBounds;
    NSObject<UIWebPDFViewDelegate> *_pdfDelegate;
    bool_delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSURL *_documentURL;
    bool_rotating;
    bool_zooming;
    double _initialZoomScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _documentTransform;
    double _documentScale;
    long long _ignoreContentOffsetChanges;
    struct CGPoint { 
        double x; 
        double y; 
    } _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
    NSArray *_pageMinYs;
    boolhidePageViewsUntilReadyToRender;
    boolhideActivityIndicatorForUnRenderedContent;
    boolreadyForSnapshot;
    WebPDFViewPlaceholder *pdfPlaceHolderView;
    UIColor *backgroundColorForUnRenderedContent;
    NSString *documentPassword;
    NSArray *pageRects;
}

@property NSObject<UIWebPDFViewDelegate> * pdfDelegate;
@property(retain) NSURL * documentURL;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentBounds;
@property(readonly) unsigned long long totalPages;
@property(readonly) struct CGPDFDocument { }* cgPDFDocument;
@property(readonly) UIPDFDocument * document;
@property(readonly) NSData * documentData;
@property bool readyForSnapshot;
@property WebPDFViewPlaceholder * pdfPlaceHolderView;
@property double initialZoomScale;
@property(retain) UIColor * backgroundColorForUnRenderedContent;
@property bool hideActivityIndicatorForUnRenderedContent;
@property bool hidePageViewsUntilReadyToRender;
@property long long ignoreContentOffsetChanges;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } documentTransform;
@property(retain) NSString * documentPassword;
@property(readonly) double documentScale;
@property(retain) NSArray * pageRects;
@property(retain) NSArray * pageMinYs;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;
+ (void)setAsPDFDocRepAndView;

- (id)pageRects;
- (void)didCompleteLayout;
- (void)setPageRects:(id)arg1;
- (void)viewWillClose;
- (id)document;
- (struct CGPDFDocument { }*)cgPDFDocument;
- (void)dealloc;
- (id)documentURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageMinYs;
- (bool)readyForSnapshot;
- (void)setHideActivityIndicatorForUnRenderedContent:(bool)arg1;
- (bool)hideActivityIndicatorForUnRenderedContent;
- (id)backgroundColorForUnRenderedContent;
- (void)setHidePageViewsUntilReadyToRender:(bool)arg1;
- (bool)hidePageViewsUntilReadyToRender;
- (long long)ignoreContentOffsetChanges;
- (double)documentScale;
- (void)setDocumentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })documentTransform;
- (void)setInitialZoomScale:(double)arg1;
- (double)initialZoomScale;
- (id)pdfDelegate;
- (id)imageForContactRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPageInViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)_tryToUnlockDocumentWithPassword:(id)arg1;
- (void)snapshotComplete;
- (void)prepareForSnapshot:(bool)arg1;
- (unsigned long long)firstVisiblePageNumber;
- (id)_addPageAtIndex:(unsigned long long)arg1;
- (id)initWithWebPDFViewPlaceholder:(id)arg1;
- (id)documentData;
- (bool)_hasPageRects;
- (void)setPdfDelegate:(id)arg1;
- (void)setIgnoreContentOffsetChanges:(long long)arg1;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 kind:(int)arg4;
- (unsigned long long)_pageNumberForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_pageWithSelection;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToURL:(id)arg4;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToURL:(id)arg4;
- (void)resetZoom:(id)arg1;
- (bool)_checkIfDocumentNeedsUnlock;
- (id)documentPassword;
- (void)_recreateUIPDFDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewportBoundsInUIViewCoords;
- (void)ensureCorrectPagesAreInstalled:(bool)arg1;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 force:(bool)arg2;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewCachingBoundsInUIViewCoords;
- (id)_installViewAtIndex:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)viewAtIndex:(long long)arg1;
- (void)setReadyForSnapshot:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (id)viewportView;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (void)setDocumentPassword:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setPageMinYs:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (id)pdfPlaceHolderView;
- (void)setPdfPlaceHolderView:(id)arg1;
- (void)setBackgroundColorForUnRenderedContent:(id)arg1;
- (id)uiPDFDocument;
- (id)_selection;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (unsigned long long)totalPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (void)clearSelection;
- (void)_define:(id)arg1;
- (void)_didScroll;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;

@end
