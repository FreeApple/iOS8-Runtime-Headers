/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform  {
}

@property(copy) NSString * depthNormalization;
@property int subdivisionSteps;

+ (id)meshTransform;

- (void)removeFaceAtIndex:(unsigned long long)arg1;
- (void)addFace:(struct CAMeshFace { unsigned int x1[4]; float x2[4]; })arg1;
- (void)removeVertexAtIndex:(unsigned long long)arg1;
- (void)addVertex:(struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (void)setSubdivisionSteps:(int)arg1;
- (void)setDepthNormalization:(id)arg1;
- (void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(struct CAMeshFace { unsigned int x1[4]; float x2[4]; })arg2;
- (void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg2;
- (int)subdivisionSteps;
- (id)depthNormalization;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
