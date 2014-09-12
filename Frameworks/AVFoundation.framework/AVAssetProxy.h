/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset  {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;
+ (id)assetProxyWithPropertyList:(id)arg1;

- (id)_assetInspectorLoader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)initWithPropertyList:(id)arg1;
- (id)_assetInspector;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)tracks;
- (bool)isProxy;
- (void)finalize;
- (void)dealloc;

@end
