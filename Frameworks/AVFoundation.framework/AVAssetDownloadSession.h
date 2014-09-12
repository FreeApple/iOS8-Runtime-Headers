/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, NSURL, AVAssetDownloadSessionInternal;

@interface AVAssetDownloadSession : NSObject  {
    AVAssetDownloadSessionInternal *_internal;
}

@property(readonly) long long status;
@property(readonly) NSError * error;
@property(readonly) NSURL * URL;
@property(readonly) NSURL * destinationURL;
@property(readonly) long long priority;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long availableFileSize;
@property(readonly) unsigned long long downloadToken;

+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (void)_primeCacheOnDispatchQueue;
- (id)_figPlaybackItemNotificationNames;
- (id)_figAssetNotificationNames;
- (void)_addFigPlaybackItemListeners;
- (void)_addFigAssetListeners;
- (unsigned long long)availableFileSize;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (int)_readyForInspection;
- (int)_primeCache;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)_removeFigPlaybackItemListeners;
- (void)_removeFigAssetListeners;
- (bool)_setFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (unsigned long long)downloadToken;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_weakReference;
- (long long)status;
- (void)pause;
- (void)stop;
- (id)init;
- (long long)priority;
- (void)start;
- (id)destinationURL;
- (unsigned long long)fileSize;
- (id)error;
- (id)URL;
- (void)finalize;
- (void)dealloc;

@end
