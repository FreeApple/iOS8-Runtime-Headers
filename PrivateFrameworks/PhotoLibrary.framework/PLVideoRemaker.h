/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSTimer, PLProgressView, AVAssetExportSession, PFVideoAVObjectBuilder;

@interface PLVideoRemaker : NSObject  {
    NSString *_trimmedPath;
    double _duration;
    double _trimStartTime;
    double _trimEndTime;
    int _mode;
    AVAssetExportSession *_exportSession;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
    id _delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressHandler;

    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
}

@property(copy) id progressHandler;
@property(retain,readonly) PFVideoAVObjectBuilder * _videoAVObjectBuilder;

+ (double)maximumDurationForTrimMode:(int)arg1;
+ (int)getHDRemakerModeForMode:(int)arg1;
+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;
+ (int)getSDRemakerModeForMode:(int)arg1;
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;

- (double)trimEndTime;
- (double)trimStartTime;
- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (id)_fileFormatForURL:(id)arg1;
- (id)messageForRemakingProgress;
- (id)_videoAVObjectBuilder;
- (void)_exportCompletedWithSuccess:(bool)arg1;
- (void)remake;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(bool)arg2;
- (void)_updateProgress;
- (void)setProgressHandler:(id)arg1;
- (void)setDuration:(double)arg1;
- (id)progressHandler;
- (void)setMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (double)duration;
- (id)progressView;
- (int)mode;

@end
