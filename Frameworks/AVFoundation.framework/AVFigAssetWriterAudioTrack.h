/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack  {
    NSMutableArray *_pendingAudioSampleBuffers;
}


- (bool)_flushPendingSampleBuffersReturningError:(id*)arg1;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(bool)arg3 error:(id*)arg4;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(bool)arg6 error:(id*)arg7;
- (bool)markEndOfDataReturningError:(id*)arg1;
- (bool)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)prepareToEndSession;
- (void)dealloc;

@end
