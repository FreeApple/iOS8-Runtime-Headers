/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVMetadataItemFilter, NSString, NSArray, NSURL, <AVVideoCompositing>, AVAssetExportSessionInternal, AVAudioMix, AVVideoComposition, AVAsset;

@interface AVAssetExportSession : NSObject  {
    AVAssetExportSessionInternal *_exportSession;
}

@property(readonly) NSString * presetName;
@property(retain,readonly) AVAsset * asset;
@property(readonly) NSArray * supportedFileTypes;
@property(copy) NSString * outputFileType;
@property(copy) NSURL * outputURL;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property(readonly) float progress;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property(readonly) long long estimatedOutputFileLength;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(copy) NSArray * metadata;
@property(retain) AVMetadataItemFilter * metadataItemFilter;
@property long long fileLengthLimit;
@property(copy) NSString * audioTimePitchAlgorithm;
@property(copy) AVAudioMix * audioMix;
@property(copy) AVVideoComposition * videoComposition;
@property(readonly) <AVVideoCompositing> * customVideoCompositor;
@property bool shouldOptimizeForNetworkUse;
@property bool canPerformMultiplePassesOverSourceMediaData;
@property(copy) NSURL * directoryForTemporaryFiles;

+ (id)_videoCompressionPropertiesForVideoSetting:(id)arg1;
+ (id)_utTypesForTemporalMetadataPresets;
+ (bool)_disablePassthrough;
+ (id)_figRemakerNotificationNames;
+ (bool)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (bool)_isPassthroughExportPresetCompatibleWithAsset:(id)arg1 outputFileType:(id)arg2;
+ (bool)_disableExportCompatibilityCheck;
+ (bool)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAssetContainingPlayableAudio:(bool)arg2 playableVideo:(bool)arg3 outputFileType:(id)arg4;
+ (bool)_failsAudioPassthroughRestrictions:(id)arg1 outputFileType:(id)arg2;
+ (id)_utTypesForAudioOnly;
+ (bool)_isPassthroughExportSupportedForAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forFileType:(struct __CFString { }*)arg2 asChapterTrack:(bool)arg3 usingModifiedFormatDescription:(const struct opaqueCMFormatDescription {}**)arg4;
+ (id)_utTypesForDefaultPassthroughPreset;
+ (id)_audioOnlyPresets;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (bool)_canWriteMediaOfAsset:(id)arg1 toFileType:(id)arg2;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(id)arg4;
+ (id)_utTypesForPresets;
+ (bool)_isPassthroughExportSupportedForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forFileType:(struct __CFString { }*)arg2 asChapterTrack:(bool)arg3;
+ (id)_mediaTypesToFailPassthroughExport;
+ (id)_mediaTypesToStripOnPassthroughExport;
+ (id)_settingForPreset:(id)arg1;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (bool)_isExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (id)_asynchronousDispatchQueue;
+ (long long)_getPassthroughExportPolicyForAssetTrack:(id)arg1 fileType:(id)arg2 asChapterTrack:(bool)arg3;
+ (id)_audioVideoPresets;
+ (id)allExportPresets;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (id)outputFileType;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (struct CGSize { double x1; double x2; })_getSourceDimension;
- (void)_handleFigRemakerNotificationAsync:(id)arg1 payload:(id)arg2;
- (id)_actualSettingForPresetAppleM4VAppleTV:(id)arg1;
- (void)_transferTrackProperties:(struct OpaqueFigRemaker { }*)arg1 sourceTrackID:(int)arg2 destinationTrackID:(int)arg3;
- (id)_audioProcessingOptions;
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)arg1 fromAudioSetting:(id)arg2;
- (long long)_getTrackCountOfType:(id)arg1 checkEnabled:(bool)arg2;
- (bool)_isAudioMixdownRequired:(struct __CFString { }*)arg1 error:(id*)arg2;
- (id)_addTracksAndPropertiesToFigRemakerForPassthroughExport:(struct OpaqueFigRemaker { }*)arg1;
- (bool)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (bool)_hasProtectedNonAudioVideoTracks;
- (bool)_canPassThroughTemporalMetadata;
- (bool)_canPassThroughAudio:(id)arg1 checkEnabled:(bool)arg2 checkProtected:(bool)arg3;
- (bool)_canPassThroughVideo:(id)arg1 remaker:(struct OpaqueFigRemaker { }*)arg2 checkEnabled:(bool)arg3 checkAll:(bool)arg4 checkProtected:(bool)arg5;
- (id)_settingForFigRemaker;
- (id)_remakerOptionsForFileFormat:(id)arg1;
- (void)_createFormatWriterOptions:(id*)arg1 forFileFormat:(id)arg2;
- (id)_addAudioPassthroughTrack:(id)arg1 asChapterTrack:(bool)arg2 toFigRemaker:(struct OpaqueFigRemaker { }*)arg3 returningTrackID:(int*)arg4;
- (int)_averageBitRateForSourceAndPreset:(id)arg1 targetFrameRate:(float)arg2;
- (float)_getSourceVideoFrameRate;
- (id)_actualSettingForPreset:(id)arg1;
- (void)_handleFigRemakerNotification:(id)arg1 payload:(id)arg2;
- (struct CGSize { double x1; double x2; })_getUntransformedSourceDimension;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(bool)arg1;
- (bool)canPerformMultiplePassesOverSourceMediaData;
- (void)setFileLengthLimit:(long long)arg1;
- (long long)fileLengthLimit;
- (void)setMetadataItemFilter:(id)arg1;
- (long long)estimatedOutputFileLength;
- (bool)_canPerformFastFrameRateConversionWithPreset:(id)arg1 usingRemaker:(struct OpaqueFigRemaker { }*)arg2;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (void)setMinVideoFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)cancelExport;
- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id)arg1;
- (void)_addListeners;
- (id)_createFigRemaker:(struct OpaqueFigRemaker {}**)arg1;
- (bool)_validateSettablePropertiesReturningError:(id*)arg1;
- (void)_createRemakerAndBeginExport;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)_validateOutputFileTypeForExport;
- (id)_actualOutputFileType;
- (void)_updateProgress;
- (id)_determineCompatibleFileTypes;
- (id)supportedFileTypes;
- (id)_actualPresetName;
- (id)presetName;
- (void)_removeListeners;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (id)videoFrameRateConversionAlgorithm;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minVideoFrameDuration;
- (id)metadataItemFilter;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)directoryForTemporaryFiles;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (bool)shouldOptimizeForNetworkUse;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)audioTimePitchAlgorithm;
- (void)setAudioMix:(id)arg1;
- (id)audioMix;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (id)asset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (long long)status;
- (id)outputURL;
- (id)init;
- (id)error;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (float)progress;

@end
