/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVWeakReference, AVAssetReaderOutputInternal, NSDictionary;

@interface AVAssetReaderOutput : NSObject  {
    AVAssetReaderOutputInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property bool alwaysCopiesSampleData;
@property(getter=_weakReferenceToAssetReader,readonly) AVWeakReference * weakReferenceToAssetReader;
@property(getter=_extractionID,setter=_setExtractionID:) int extractionID;
@property(getter=_figAssetReaderExtractionOptions,readonly) NSDictionary * figAssetReaderExtractionOptions;
@property(getter=_trimsSampleDurations,readonly) bool trimsSampleDurations;

+ (void)initialize;

- (void)_figAssetReaderFailed;
- (void)_figAssetReaderDecodeError;
- (void)resetForReadingTimeRanges:(id)arg1;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (id)_figAssetReaderExtractionOptions;
- (void)_setExtractionID:(int)arg1;
- (void)setSupportsRandomAccess:(bool)arg1;
- (void)setAlwaysCopiesSampleData:(bool)arg1;
- (bool)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1;
- (void)markConfigurationAsFinal;
- (void)_markAsFinished;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (int)_extractionID;
- (bool)_trimsSampleDurations;
- (id)_weakReferenceToAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { }*)arg1;
- (id)currentTimeRanges;
- (bool)supportsRandomAccess;
- (bool)alwaysCopiesSampleData;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_cancelReading;
- (bool)_prepareForReadingReturningError:(id*)arg1;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (id)_asset;
- (long long)_status;
- (id)mediaType;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (bool)_isFinished;

@end
