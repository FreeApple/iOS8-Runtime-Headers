/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNNode;

@interface SCNHitTestResult : NSObject  {
    id _reserved;
    struct __C3DHitTestResult { } *_result;
}

@property(readonly) SCNNode * node;
@property(readonly) long long geometryIndex;
@property(readonly) long long faceIndex;
@property(readonly) struct SCNVector3 { float x1; float x2; float x3; } localCoordinates;
@property(readonly) struct SCNVector3 { float x1; float x2; float x3; } worldCoordinates;
@property(readonly) struct SCNVector3 { float x1; float x2; float x3; } localNormal;
@property(readonly) struct SCNVector3 { float x1; float x2; float x3; } worldNormal;
@property(readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } modelTransform;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { }*)arg1;
+ (id)SCNJSExportProtocol;

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })modelTransform;
- (struct CGPoint { double x1; double x2; })textureCoordinate;
- (struct SCNVector3 { float x1; float x2; float x3; })worldNormal;
- (struct SCNVector3 { float x1; float x2; float x3; })localNormal;
- (struct SCNVector3 { float x1; float x2; float x3; })worldCoordinates;
- (struct SCNVector3 { float x1; float x2; float x3; })localCoordinates;
- (long long)faceIndex;
- (long long)geometryIndex;
- (struct CGPoint { double x1; double x2; })textureCoordinatesWithMappingChannel:(long long)arg1;
- (id)initWithResult:(struct __C3DHitTestResult { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)node;

@end
