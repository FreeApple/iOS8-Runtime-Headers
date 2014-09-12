/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPPage;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    boolisHorizontal;
    boolhasForwardVector;
    boolhasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (void)outerVertices:(struct CGPoint { double x1; double x2; }*)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;

- (void)combine:(id)arg1;
- (bool)crosses:(id)arg1;
- (bool)extractCycleTo:(id)arg1 goingForward:(bool)arg2 startingAtIndex:(unsigned int)arg3;
- (bool)hasVectorGoingForward:(bool)arg1 startingAtIndex:(unsigned int*)arg2;
- (void)instantiateVectors;
- (bool)intersectsWith:(id)arg1 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (bool)hasBackwardVector;
- (void)setHasBackwardVector:(bool)arg1;
- (bool)hasForwardVector;
- (void)setHasForwardVector:(bool)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (id)ownerArray;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithGraphicObject:(id)arg1;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (void)removeFromArray;
- (void)addNeighbor:(id)arg1;
- (void)trimToLastIntersections;
- (void)addToArray:(id)arg1;
- (bool)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(bool)arg2;
- (bool)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(bool)arg2;
- (id)copyWithoutIntersections;
- (bool)extractCycleTo:(id)arg1 goingForward:(bool)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (bool)continues:(id)arg1;
- (bool)windsClockwiseOnto:(id)arg1;
- (unsigned int)intersectionCount;
- (void)addGraphicObject:(id)arg1;
- (id)graphicObjects;
- (bool)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (id)neighborAtIndex:(unsigned int)arg1;
- (unsigned int)neighborCount;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (bool)hasNeighborShape:(id)arg1;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (unsigned int)graphicObjectCount;
- (id)initSuper;
- (long long)compareYBounds:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)zOrder;
- (bool)isHorizontal;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)page;
- (bool)isVertical;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
