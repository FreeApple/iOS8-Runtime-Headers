/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
    unsigned int length;
    struct CPPDFChar {} **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    boolwasMerged;
}


- (bool)mapToPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToPairs:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapWithIndex:(int (*)())arg1 from:(unsigned int)arg2 length:(unsigned int)arg3 passing:(void*)arg4;
- (bool)mapWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (bool)removeToSubsequence:(id)arg1 ifTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)copyToSubsequence:(id)arg1 ifTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)copyToSubsequence:(id)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)removeCharAtIndex:(unsigned int)arg1;
- (void)replaceCharAtIndex:(unsigned int)arg1 withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CPPDFStyle {} *x6; double x7; int x8; }*)arg2;
- (void)removeChar;
- (void)addCharsFromSequence:(id)arg1;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CPPDFStyle {} *x6; double x7; int x8; }*)arg1 length:(unsigned int)arg2 ifTrue:(int (*)())arg3 passing:(void*)arg4;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CPPDFStyle {} *x6; double x7; int x8; }*)arg1 length:(unsigned int)arg2;
- (struct CPPDFChar {}**)charArray;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CPPDFStyle {} *x6; double x7; int x8; }*)arg1 length:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)merge:(id)arg1 by:(int (*)())arg2;
- (void)sortBy:(int (*)())arg1;
- (void)resize:(unsigned int)arg1;
- (void)removeAllChars;
- (bool)map:(int (*)())arg1 whereNeighborsWith:(id)arg2 passing:(void*)arg3;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg1;
- (void)splitToSubsequences:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)sortByAnchorYDecreasingXIncreasing;
- (bool)removeSubsequences:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (bool)wasMerged;
- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CPPDFStyle {} *x6; double x7; int x8; }*)arg1;
- (id)initWithSizeFor:(unsigned int)arg1;
- (void)removeFrom:(unsigned int)arg1;
- (id)newSubsequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (bool)map:(int (*)())arg1 passing:(void*)arg2;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CPPDFStyle {} *x6; double x7; int x8; }*)charAtIndex:(unsigned int)arg1;
- (id)initSuper;
- (void)dispose;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned int)length;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
