/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIVignette : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputIntensity;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (id)inputRadius;
- (bool)_isIdentity;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
