/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPMediaItem, NSDictionary, NSURL;

@interface MPStoreItemContext : NSObject <NSCopying> {
    MPMediaItem *_mediaItem;
    long long _storeID;
    NSString *_buyParametersString;
    unsigned long long _mediaType;
    NSString *_downloadIdentifier;
    NSDictionary *_buyParametersDictionary;
}

@property(readonly) long long storeID;
@property(copy,readonly) NSString * buyParametersString;
@property(readonly) long long matchID;
@property(readonly) long long purchaseHistoryID;
@property(readonly) unsigned long long mediaType;
@property(copy,readonly) NSDictionary * ITunesStoreContentStreamingInfo;
@property(copy,readonly) NSDictionary * ITunesStoreContentDownloadInfo;
@property(copy,readonly) NSURL * protectedContentSupportStorageURL;
@property(copy,readonly) NSString * localFileName;
@property(readonly) bool localFileIsStreamingQuality;
@property(readonly) bool localFileIsValidForPlayback;
@property(readonly) bool localFileIsTemporaryCloudDownload;
@property(copy,readonly) NSString * contentTitle;
@property(readonly) unsigned long long persistentStorageIdentifier;
@property(readonly) bool isDownloadable;
@property(readonly) bool isPurchasableStoreOffer;
@property(readonly) bool isDownloadableStoreOffer;
@property(readonly) bool isDownloadInProgress;
@property(copy) NSString * downloadIdentifier;
@property(copy) NSString * localFilePath;
@property(readonly) float volumeNormalization;
@property(copy,readonly) NSDictionary * buyParametersDictionary;

+ (id)contextsWithMediaItems:(id)arg1;
+ (id)contextWithStoreID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3;
+ (id)contextWithMediaItem:(id)arg1;

- (unsigned long long)itemType;
- (long long)purchaseHistoryID;
- (long long)storeID;
- (id)localFilePath;
- (id)buyParametersDictionary;
- (id)buyParametersString;
- (void)setLocalFilePath:(id)arg1;
- (bool)isDownloadInProgress;
- (bool)isDownloadable;
- (unsigned long long)persistentStorageIdentifier;
- (id)contentTitle;
- (bool)localFileIsTemporaryCloudDownload;
- (id)localFileName;
- (bool)localFileIsStreamingQuality;
- (id)ITunesStoreContentDownloadInfo;
- (id)buyOfferForVariant:(long long)arg1;
- (bool)isDownloadableStoreOffer;
- (bool)isPurchasableStoreOffer;
- (bool)localFileIsValidForPlayback;
- (id)_ITunesStoreContentInfo:(bool)arg1;
- (id)initWithStoreID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3;
- (void)_setBuyParameters:(id)arg1;
- (void)_fetchMediaItemPropertyValues;
- (id)initWithMediaItem:(id)arg1;
- (float)volumeNormalization;
- (long long)matchID;
- (id)protectedContentSupportStorageURL;
- (id)URLFromPath:(id)arg1;
- (id)ITunesStoreContentStreamingInfo;
- (void)setDownloadIdentifier:(id)arg1;
- (id)downloadIdentifier;
- (unsigned long long)mediaType;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
