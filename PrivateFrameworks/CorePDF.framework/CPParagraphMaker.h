/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPPage, NSMutableArray, CPZone;

@interface CPParagraphMaker : NSObject  {
    NSMutableArray *avail;
    NSMutableArray *paragraphs;
    NSMutableArray *compoundedShapesOnPage;
    boolspacingSet;
    double currentSpacing;
    CPZone *parent;
    CPPage *page;
}

+ (bool)line:(id)arg1 alignsWith:(id)arg2;

- (void)addLinesTo:(id)arg1;
- (id)newInitialParagraph;
- (void)addCompoundedShapesOn:(id)arg1 to:(id)arg2;
- (int)paragraph:(id)arg1 splits:(id)arg2;
- (bool)line:(id)arg1 isAlignedWith:(id)arg2;
- (bool)firstWordOf:(id)arg1 fits:(id)arg2 indent:(double)arg3;
- (bool)styleOf:(id)arg1 differsFromStyleOf:(id)arg2;
- (unsigned long long)alignmentOf:(id)arg1 and:(id)arg2 and:(id)arg3;
- (bool)spacingOf:(id)arg1 and:(id)arg2 and:(id)arg3 is:(double*)arg4;
- (bool)fitsBelow:(id)arg1 alignment:(unsigned long long)arg2 spacing:(double)arg3 from:(int)arg4;
- (unsigned long long)alignmentOf:(id)arg1 and:(id)arg2;
- (bool)isGraphicBetween:(id)arg1 and:(id)arg2;
- (int)linesThatOverlapLineAt:(int)arg1 between:(double)arg2 and:(double)arg3 from:(int)arg4;
- (int)indexOfUniqueLineBelow:(id)arg1 from:(int)arg2;
- (bool)line:(id)arg1 isBelow:(id)arg2;
- (bool)line:(id)arg1 isDirectlyBelow:(id)arg2;
- (id)paragraphs;
- (void)makeParagraphsIn:(id)arg1;
- (void)dealloc;

@end
