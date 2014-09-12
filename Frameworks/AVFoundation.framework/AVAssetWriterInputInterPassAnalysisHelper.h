/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper  {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}


- (void)startPassAnalysis;
- (id)initWithWritingHelper:(id)arg1;
- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (bool)shouldRespondToInitialPassDescription;
- (id)currentPassDescription;
- (bool)canPerformMultiplePasses;
- (bool)isReadyForMoreMediaData;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)initWithConfigurationState:(id)arg1;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (long long)status;
- (void)dealloc;

@end
