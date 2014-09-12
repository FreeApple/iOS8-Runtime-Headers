/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItem : NSObject  {
    struct AVItemPrivate { id x1; id x2; double x3; float x4; float x5; float x6; unsigned long long x7; boolx8; boolx9; id x10; long long x11; long long x12; long long x13; boolx14; id x15; id x16; boolx17; boolx18; id x19; id x20; struct OpaqueFigThread {} *x21; struct OpaqueCMByteStream {} *x22; int x23; id x24; id x25; } *_priv;
}

+ (id)avItemWithPath:(id)arg1 error:(id*)arg2;
+ (id)avItem;

- (void)cancelDownload;
- (int)downloadStatus;
- (float)downloadProgress;
- (int)beginDownloading;
- (void*)downloadThread;
- (id)chapterImageForImageID:(long long)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setEQPreset:(long long)arg1;
- (int)_instantiateItem;
- (id)urlFromPath:(id)arg1;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(bool)arg3 maxCount:(long long)arg4;
- (id)formatDetailsForTracks;
- (long long)eqPreset;
- (bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)stopDownload;
- (bool)setPath:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)path;
- (id)url;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)errorLog;
- (id)accessLog;
- (id)init;
- (void)dealloc;
- (double)duration;

@end
