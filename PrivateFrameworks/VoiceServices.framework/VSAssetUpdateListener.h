/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject  {
    bool_isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;

- (void)removeAssetForLanguage:(id)arg1;
- (bool)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (void)downloadAssetForLanguage:(id)arg1;
- (void)_updateNextCleanupDate;
- (void)_cancelAssetCleanupTimer;
- (void)_flushLanguageChanges;
- (void)_rescheduleAssetCleanup;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_cleanupAssets;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)stopListening;
- (id)init;
- (void)dealloc;
- (id)_initShared;
- (void)startListening;

@end
