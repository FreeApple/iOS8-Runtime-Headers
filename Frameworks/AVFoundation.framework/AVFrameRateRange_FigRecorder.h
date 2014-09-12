/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFrameRateRangeInternal_FigRecorder;

@interface AVFrameRateRange_FigRecorder : NSObject  {
    AVFrameRateRangeInternal_FigRecorder *_internal;
}

@property(readonly) double minFrameRate;
@property(readonly) double maxFrameRate;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;

- (bool)includesFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)includesFrameRate:(double)arg1;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (double)minFrameRate;
- (double)maxFrameRate;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end
