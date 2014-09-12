/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIGaussianBlur : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)inputRadius;
- (bool)_isIdentity;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
