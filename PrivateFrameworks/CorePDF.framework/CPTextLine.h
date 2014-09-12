/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CPCharSequence;

@interface CPTextLine : CPTextObject <CPDisposable> {
    CPCharSequence *charSequence;
    struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; } *wordArray;
    unsigned int wordCount;
    struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; } *inlineList;
    int lineNumber;
    int columnNumber;
    double baseline;
    boolbaseLineIsNull;
    boolhasBeenSplit;
    boolhasBeenProcessed;
    boolmaySplit;
    boolhasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    boolirregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    boolisListItem;
    unsigned int listSpacerIndex;
    boollineBreakAfter;

  /* Error parsing encoded ivar type info: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ddCCid@d^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}} */
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; } *uniformStyle;

    unsigned short uniformStyleFlags;
    double monospaceWidth;
    unsigned int *spacesBefore;
    booldisposed;
}

@property unsigned int leftSpacerIndex;
@property unsigned int rightSpacerIndex;
@property bool isListItem;
@property unsigned int listSpacerIndex;
@property bool lineBreakAfter;


- (void)setLineBreakAfter:(bool)arg1;
- (void)setListSpacerIndex:(unsigned int)arg1;
- (unsigned int)listSpacerIndex;
- (void)setIsListItem:(bool)arg1;
- (bool)isListItem;
- (void)setRightSpacerIndex:(unsigned int)arg1;
- (unsigned int)rightSpacerIndex;
- (void)setLeftSpacerIndex:(unsigned int)arg1;
- (unsigned int)leftSpacerIndex;
- (double)medianFontSize;
- (long long)topIsAbove:(id)arg1;
- (void)setIrregular:(bool)arg1;
- (bool)irregular;
- (void)setMaximumWordGap:(float)arg1;
- (float)maximumWordGap;
- (void)setMaximumLetterGap:(float)arg1;
- (float)maximumLetterGap;
- (void)setLevels:(int)arg1;
- (int)levels;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (void)setBaselineToNull;
- (bool)hyphenated;
- (bool)overlapsWith:(id)arg1;
- (long long)baseLineDescending:(id)arg1;
- (long long)baseLineAscending:(id)arg1;
- (int)tabsBefore;
- (void)setTabsBefore:(int)arg1;
- (bool)hasTabs;
- (void)setHasTabs:(bool)arg1;
- (void)setColumnBreaks:(id)arg1;
- (id)columnBreaks;
- (bool)hasBeenProcessed;
- (void)setHasBeenProcessed:(bool)arg1;
- (bool)hasBeenSplit;
- (void)setHasBeenSplit:(bool)arg1;
- (bool)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (bool)removeTextLines:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (bool)changesFontAt:(id)arg1;
- (bool)hasJustifiedAlignment;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfWordAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)wordArray;
- (bool)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (void)setBaseline:(double)arg1;
- (bool)overlapsHorizontally:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)recomputeBaseline;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (void)recomputeLevels;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)wordArrayOfSize:(unsigned int)arg1;
- (void)setCharSequence:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)lastWord;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)firstWord;
- (bool)lineBreakAfter;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; }*)inlineList;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)wordAtIndex:(unsigned int)arg1;
- (unsigned int)wordCount;
- (bool)hasDropCap;
- (double)monospaceWidth;
- (id)charSequence;
- (bool)styleIsUniform:(struct CPPDFStyle {}**)arg1 styleFlags:(unsigned short)arg2;
- (unsigned int)inlineCount;
- (bool)isMonospaced;
- (bool)isIndivisible;
- (void)dispose;
- (void)translateObjectYBy:(double)arg1;
- (void)accept:(id)arg1;
- (void)fitBoundsToChildren;
- (long long)zOrder;
- (id)attributes;
- (int)align;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)baseline;
- (id)init;
- (id)properties;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })anchor;

@end
