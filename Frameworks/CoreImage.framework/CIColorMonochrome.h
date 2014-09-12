/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIColor, NSNumber;

@interface CIColorMonochrome : CIFilter  {
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(retain) CIColor * inputColor;
@property(retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
