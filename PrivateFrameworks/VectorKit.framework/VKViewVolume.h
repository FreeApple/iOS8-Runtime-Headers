/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKViewVolume : NSObject  {
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _corners[8];
}

@property(readonly) const struct VKPoint { double x1; double x2; double x3; }* corners;


- (struct VKPoint { double x1; double x2; double x3; })lerpPoint:(float*)arg1;
- (void)updateWithFrustum:(struct { boolx1; double x2; double x3; double x4; double x5; })arg1 matrix:(const struct { double x1[4][4]; }*)arg2;
- (const struct VKPoint { double x1; double x2; double x3; }*)corners;
- (id).cxx_construct;

@end
