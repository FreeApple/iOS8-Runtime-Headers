/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CHBAxis : NSObject  {
}

+ (int)xlPlotAxisTypeFrom:(int)arg1;
+ (Class)chbAxisClassWith:(id)arg1;
+ (id)readWithXlPlotAxis:(int)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromAxisType:(int)arg1;
+ (int)chbAxisIdForPlotAxis:(int)arg1 state:(id)arg2;
+ (Class)chbAxisClassWith:(struct XlChartPlotAxis { int (**x1)(); int x2; struct XlChartTextFrame {} *x3; struct XlChartLineStyle {} *x4; struct XlChartLineStyle {} *x5; struct XlChartLineStyle {} *x6; struct XlChartLineStyle {} *x7; struct XlChartFillStyle {} *x8; struct XlChartPicF {} *x9; struct XlChartTick {} *x10; unsigned short x11; unsigned short x12; boolx13; boolx14; }*)arg1 plotAxis:(int)arg2;


@end
