/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, AVWeakReference;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector  {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_figFormatReader;
    struct OpaqueFigAssetTrack { } *_figAssetTrack;
    struct OpaqueFigTrackReader { } *_figTrackReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    AVWeakReference *_weakReferenceToAsset;
}


- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 returningError:(int*)arg2;
- (void)_removeFigNotifications;
- (void)_addFigNotifications;
- (unsigned int)_figMediaType;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)_trackReferences;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)alternateGroupID;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (bool)requiresFrameReordering;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (bool)isSelfContained;
- (int)playabilityValidationResult;
- (id)formatDescriptions;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)asset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (bool)isPlayable;
- (bool)hasProtectedContent;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (float)preferredVolume;
- (int)trackID;
- (bool)isEnabled;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (long long)totalSampleDataLength;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)mediaType;
- (id)languageCode;
- (id)extendedLanguageTag;
- (id)commonMetadata;
- (long long)layer;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;

@end
