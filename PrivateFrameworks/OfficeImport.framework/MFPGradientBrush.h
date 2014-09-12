/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray;

@interface MFPGradientBrush : MFPBrush  {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading { } *mShading;
    struct CGFunction { } *mShadingFunction;
}


- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromStartAndEndColors;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (id)colorAtPosition:(float)arg1;
- (void)fillPath:(id)arg1;
- (void)createPhoneBrush;
- (void)setColorBlend:(id)arg1;
- (void)setBlend:(id)arg1;
- (void)setWrapMode:(int)arg1;
- (id)endColor;
- (id)startColor;
- (id)color;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
