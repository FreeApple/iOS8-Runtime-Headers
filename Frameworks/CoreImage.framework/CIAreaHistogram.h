/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIContext, CIVector, CIImage, NSNumber;

@interface CIAreaHistogram : CIFilter  {
    CIImage *inputImage;
    CIVector *inputExtent;
    NSNumber *inputScale;
    NSNumber *inputCount;
    CIContext *_context;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputExtent;
@property(retain) NSNumber * inputScale;
@property(retain) NSNumber * inputCount;

+ (id)customAttributes;

- (id)inputCount;
- (id)inputScale;
- (id)inputExtent;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_outputData:(bool)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputCount:(id)arg1;
- (void)dealloc;
- (id)outputData;

@end
