/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAssetWriterFinishWritingHelperDelegate>, NSObject<OS_dispatch_queue>, AVWeakReference;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper  {
    <AVAssetWriterFinishWritingHelperDelegate> *_delegate;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    AVWeakReference *_weakReferenceToSelf;
}


- (void)finishOperationCompletedSuccessfully:(bool)arg1 withError:(id)arg2;
- (void)performFinishOperation;
- (id)initWithConfigurationState:(id)arg1 figAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2 delegate:(id)arg3;
- (struct OpaqueFigAssetWriter { }*)_retainedFigAssetWriter;
- (void)cancelWriting;
- (long long)status;
- (void)finalize;
- (void)dealloc;

@end
