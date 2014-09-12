/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDPie2DType : CHDChartType  {
    int mFirstSliceAngle;
    boolmDoughnutType;
    boolmPieOfPieType;
    boolmBarOfPieType;
}


- (bool)hasExplosion;
- (bool)isBarOfPieType;
- (bool)isPieOfPieType;
- (int)firstSliceAngle;
- (int)defaultLabelPosition;
- (void)setBarOfPieType:(bool)arg1;
- (void)setPieOfPieType:(bool)arg1;
- (void)setDoughnutType:(bool)arg1;
- (void)setFirstSliceAngle:(int)arg1;
- (id)initWithChart:(id)arg1;
- (bool)isDoughnutType;
- (id)contentFormat;

@end
