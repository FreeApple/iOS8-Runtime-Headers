/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, NSString, UIImage, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject  {
    struct CGPDFPage { } *_cgPage;
    unsigned long long _pageNumber;
    NSString *_stringInReadingOrder;
    UIPDFSelection *_selection;
    int _lock;
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIImage *_pageImage;
    NSMutableArray *_annotations;
}

@property(readonly) struct CGPDFPage { }* CGPage;
@property(readonly) unsigned long long pageNumber;
@property(readonly) unsigned long long pageIndex;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropBox;
@property(readonly) UIPDFDocument * document;
@property(retain) UIImage * pageImage;
@property(retain) UIPDFSelection * selection;


- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)removeAllAnnotations;
- (id)copyPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaBoxAccountForRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropBoxAccountForRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropBox;
- (void)deliverImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (id)getImageIfAvailable;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)initWithDocument:(id)arg1 pageNumber:(unsigned long long)arg2;
- (id)annotationIn:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)clearAnnotations;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
- (id)pageImage;
- (void)setPageImage:(id)arg1;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (struct CGPDFPage { }*)CGPage;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)refresh;
- (unsigned long long)rotation;
- (id)annotations;
- (id)string;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)pageIndex;
- (unsigned long long)pageNumber;
- (void)setSelection:(id)arg1;
- (id)selection;

@end
