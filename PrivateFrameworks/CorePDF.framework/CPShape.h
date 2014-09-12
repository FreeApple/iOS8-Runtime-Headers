/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPShape : CPGraphicObject <CPDisposable> {
    unsigned int pdfObjectID;
    struct CGPath { } *path;
    boolisUprightRectangle;
    int windingRule;
    double lineWidth;
    double miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor { } *fillColor;
    struct CGColor { } *strokeColor;
    union CGPDFObject { } *fillObject;
    union CGPDFObject { } *strokeObject;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } paintTransform;
    boolboundsComputed;
    boolrenderedBoundsComputed;
}


- (void)makeLineFromVertex:(struct CGPoint { double x1; double x2; })arg1 toVertex:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })innerBounds;
- (void)setPdfObjectID:(unsigned int)arg1;
- (unsigned int)pdfObjectID;
- (void)setPaintTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setStrokeObject:(union CGPDFObject { }*)arg1;
- (void)setFillObject:(union CGPDFObject { }*)arg1;
- (void)setWindingRule:(int)arg1;
- (bool)canCombineWith:(id)arg1;
- (union CGPDFObject { }*)strokeObject;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paintTransform;
- (union CGPDFObject { }*)fillObject;
- (bool)isStrokeFor:(id)arg1;
- (bool)hasSamePathAs:(id)arg1;
- (bool)hasFill;
- (bool)isUprightRectangle;
- (bool)hasStroke;
- (void)recomputeBounds;
- (void)recomputeRenderedBounds;
- (int)windingRule;
- (unsigned int)pathElementCount;
- (void)dispose;
- (void)accept:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedBounds;
- (long long)zOrder;
- (void)addShape:(id)arg1;
- (id)initWithPDFShape:(struct CPPDFShape { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CPPDFStyle {} *x3; int x4; struct CGPath {} *x5; boolx6; struct CGAffineTransform { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; double x_7_1_6; } x7; struct CGAffineTransform { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; } x8; }*)arg1;
- (bool)isVisible;
- (struct CGPath { }*)path;
- (id)attributes;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (double)miterLimit;
- (int)lineJoin;
- (int)lineCap;
- (struct CGColor { }*)strokeColor;
- (struct CGColor { }*)fillColor;
- (double)lineWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)init;
- (id)string;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineCap:(int)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineWidth:(double)arg1;

@end
