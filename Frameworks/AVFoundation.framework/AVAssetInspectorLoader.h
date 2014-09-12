/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVWeakReference, NSURL, NSArray;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property(readonly) NSURL * URL;
@property(getter=_formatReader,readonly) struct OpaqueFigFormatReader { }* formatReader;
@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;
@property(getter=_classForTrackInspectors,readonly) Class classForTrackInspectors;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) NSString * lyrics;
@property(getter=isPlayable,readonly) bool playable;
@property(getter=isExportable,readonly) bool exportable;
@property(getter=isReadable,readonly) bool readable;
@property(getter=isComposable,readonly) bool composable;
@property(getter=isCompatibleWithSavedPhotosAlbum,readonly) bool compatibleWithSavedPhotosAlbum;
@property(readonly) NSArray * figChapterGroupInfo;
@property(readonly) NSArray * figChapters;
@property(readonly) NSURL * resolvedURL;
@property(readonly) unsigned long long downloadToken;
@property(readonly) bool hasProtectedContent;
@property(getter=_isStreaming,readonly) bool streaming;
@property(getter=_weakReference,readonly) AVWeakReference * weakReference;

+ (void)initialize;

- (id)_mapFigErrorCodeToNSError:(int)arg1;
- (unsigned long long)downloadToken;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isReadable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)hasProtectedContent;
- (id)lyrics;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (bool)_isStreaming;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (Class)_classForTrackInspectors;
- (id)assetInspector;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_weakReference;
- (id)resolvedURL;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoading;
- (id)init;
- (id)URL;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;

@end
