/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputAngle;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputPoint;
@property(retain) NSNumber * inputAngle;

+ (id)customAttributes;

- (id)inputPoint;
- (struct Rectangle { double x1; double x2; double x3; double x4; })computeDOD:(struct vec2 { float x1; float x2; })arg1 tst:(struct vec3 { float x1; float x2; float x3; })arg2 off:(struct vec4 { float x1; float x2; float x3; float x4; })arg3 mtx:(struct vec4 { float x1; float x2; float x3; float x4; })arg4;
- (void)setInputPoint:(id)arg1;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
