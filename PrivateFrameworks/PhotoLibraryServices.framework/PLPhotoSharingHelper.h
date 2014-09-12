/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoSharingHelper : NSObject  {
}

+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (id)streamdVideoCache;
+ (bool)debugAlwaysStreamSharedVideos;
+ (void)photosPreferencesChanged;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int*)arg1 handler:(id)arg2;
+ (void)applicationIsInForeground:(bool)arg1;
+ (long long)maxCharactersPerComment;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned long long)arg2 completion:(id)arg3;
+ (void)retryOutstandingActivities;
+ (bool)debugDownloadAllDerivatives;
+ (bool)debugDownloadMetadataOnly;
+ (bool)debugDownloadThumbnailsOnly;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(id)arg1;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(id)arg1;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)checkServerModelForAlbum:(id)arg1;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(bool)arg2;
+ (struct CGSize { double x1; double x2; })derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(id)arg1;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (bool)hasPhoneInvitationForAlbum:(id)arg1;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completion:(id)arg2;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (bool)canSetUserCloudSharedLiked:(bool)arg1 forAssets:(id)arg2 error:(id*)arg3;
+ (bool)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id*)arg2;
+ (bool)canCreateStreamInPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (long long)maxVideoLengthForPublishing;
+ (long long)maxNumDerivativesToDownloadPerPush;
+ (long long)maxSubscribersPerStream;
+ (long long)maxAssetsPerStream;
+ (void)initializeMSPlatform;
+ (void)pollForAlbumListUpdates;
+ (bool)accountMatchesEmail:(id)arg1;
+ (id)sharingEmail;
+ (bool)sharedStreamsExplictlyDisabled;
+ (bool)sharedStreamsUIEnabled;
+ (void)accountSettingsChanged;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(bool)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(bool)arg2;
+ (bool)isBreadcrumbDebugEnabled;
+ (double)intervalBetweenPolls;
+ (id)_downloadRequestQueue;
+ (bool)_shouldDownloadAsset:(id)arg1 requestThumbnail:(bool)arg2;
+ (double)intervalBetweenAlbumPolls;
+ (double)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (struct CGSize { double x1; double x2; })videoPosterFrameDimension;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)_processPhoneFailuresQueue;
+ (id)_phoneInvitationFailureFile;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;
+ (void)trackUploadBatchSize:(unsigned long long)arg1;
+ (void)resetAllLocalState;
+ (bool)debugAutoAcceptInvitation;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(bool)arg3;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (long long)maxCommentsPerAsset;
+ (bool)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (bool)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (long long)maxSubscribedStreams;
+ (long long)maxOwnedStreams;
+ (long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2;
+ (id)serverSideConfigurationDictionary;
+ (id)_pathToServerConfigurationCache;
+ (bool)sharedStreamsEnabled;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (bool)removeCloudSharingDirectories:(id*)arg1;
+ (void)forgetSharingPersonID:(id)arg1;
+ (id)sharingPersonID;
+ (void)clearCachedAccountState;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (bool)isCellularConnection;
+ (unsigned long long)purgeableSpace;
+ (void)downloadAsset:(id)arg1 requestThumbnail:(bool)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;


@end
