/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDBorders, OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
    EDBorders *edValue;
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}


- (id)widthHashNumber;
- (id)styleHashNumber;
- (int*)borderWidths;
- (int*)borderStyles;
- (id)initWithEDBorders:(id)arg1;
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;
- (bool)hasSameWidthsAs:(id)arg1;
- (bool)hasSameStylesAs:(id)arg1;
- (bool)hasSameColorsAs:(id)arg1;
- (void)setNoneAtLocation:(int)arg1;
- (bool)isNoneAtLocation:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (id)cssString;
- (id)initWithOADStroke:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)colorString;
- (id)widthString;
- (id)borderColor;
- (bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)styleString;

@end
