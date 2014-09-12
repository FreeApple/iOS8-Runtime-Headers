/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISmartBlackAndWhite : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputNeutralGamma;
    NSNumber *inputTone;
    NSNumber *inputHue;
    NSNumber *inputGrain;
    NSNumber *inputScaleFactor;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputStrength;
@property(copy) NSNumber * inputNeutralGamma;
@property(copy) NSNumber * inputTone;
@property(copy) NSNumber * inputHue;
@property(copy) NSNumber * inputGrain;
@property(copy) NSNumber * inputScaleFactor;

+ (id)customAttributes;

- (void)setInputScaleFactor:(id)arg1;
- (id)inputScaleFactor;
- (void)setInputGrain:(id)arg1;
- (void)setInputHue:(id)arg1;
- (id)inputHue;
- (void)setInputTone:(id)arg1;
- (id)inputTone;
- (void)setInputNeutralGamma:(id)arg1;
- (id)inputNeutralGamma;
- (void)setInputStrength:(id)arg1;
- (id)inputStrength;
- (id)inputGrain;
- (id)hueArrayImage:(float*)arg1;
- (float*)createHueArray;
- (void)getNonNormalizedSettings:(struct { boolx1; float x2; float x3; float x4; float x5; float x6[3]; }*)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;

@end
