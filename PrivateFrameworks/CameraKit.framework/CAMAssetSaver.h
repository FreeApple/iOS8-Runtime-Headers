/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSMutableDictionary, NSMutableArray;

@interface CAMAssetSaver : NSObject  {
    NSMutableDictionary *__inflightAssets;
    NSMutableArray *__pendingImageJobs;
    NSMutableDictionary *__inProgressAvalancheFileDescriptors;
    NSMutableDictionary *__inProgressNebulaFileDescriptors;
    NSMutableArray *__transientStillImageResponses;
}

@property(readonly) NSMutableDictionary * _inflightAssets;
@property(retain) NSMutableArray * _pendingImageJobs;
@property(retain) NSMutableDictionary * _inProgressAvalancheFileDescriptors;
@property(retain) NSMutableDictionary * _inProgressNebulaFileDescriptors;
@property(readonly) NSMutableArray * _transientStillImageResponses;

+ (void)resetNebulaCaptureIsBusy;
+ (void)setNebulaCaptureIsBusy:(bool)arg1;
+ (void)setVideoCaptureIsBusy:(bool)arg1;
+ (id)takingNebulaIndicatorFilePath;
+ (id)sharedAssetSaver;
+ (void)setTakingPhotoIsBusy:(bool)arg1;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;

- (id)_transientStillImageResponses;
- (void)set_inProgressNebulaFileDescriptors:(id)arg1;
- (id)_inProgressNebulaFileDescriptors;
- (void)set_inProgressAvalancheFileDescriptors:(id)arg1;
- (id)_inProgressAvalancheFileDescriptors;
- (void)set_pendingImageJobs:(id)arg1;
- (id)enqueueTransientResponse:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(bool)arg4 isSlalom:(bool)arg5 videoHandler:(id)arg6 requestEnqueuedBlock:(id)arg7 completionBlock:(id)arg8;
- (void)saveTimelapseCaptureResponse:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3;
- (void)requestAssetSavingAccess;
- (id)saveStillImageCaptureResponse:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3;
- (id)_imageJobForStillImageCaptureResponse:(id)arg1;
- (id)_pendingImageJobs;
- (id)_inflightAssets;
- (id)_addInflightAssetWithPath:(id)arg1 withUUID:(id)arg2 avalancheUUID:(id)arg3;
- (id)_addInflightAssetWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(id)arg9;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(id)arg3 completionBlock:(id)arg4 imageSurface:(void*)arg5 previewImageSurface:(void*)arg6 transient:(bool)arg7;
- (id)saveVideoCaptureResponse:(id)arg1 assetUUID:(id)arg2 jobTypeOverride:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)setNebulaInProgress:(bool)arg1 uuid:(id)arg2;
- (void)resetAllNebulaProgress;
- (void)dropAllTransientResponses;
- (void)saveAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 bestAssetUUIDs:(id)arg3 stackAssetUUID:(id)arg4 completionBlock:(id)arg5;
- (void)batchSavePendingAssetJobs;
- (void)saveAllTransientResponses;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)queueJobDictionary:(id)arg1 completionBlock:(id)arg2;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(id)arg6;
- (void)_setIsTakingPhoto:(bool)arg1;
- (id)_saveIsolationQueue;
- (void)setAvalancheInProgress:(bool)arg1 uuid:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end
