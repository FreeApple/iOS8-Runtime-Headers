/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataObjectInternal_FigRecorder, NSString;

@interface AVMetadataObject_FigRecorder : NSObject  {
    AVMetadataObjectInternal_FigRecorder *_objectInternal;
}

@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(readonly) NSString * type;

+ (id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;

- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)originalMetadataObject;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)input;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)init;
- (id)type;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;

@end
