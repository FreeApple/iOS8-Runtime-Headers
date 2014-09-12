/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSArray, NSMutableSet, NSDate, NSDictionary;

@interface PLBBBulletin : NSObject  {
    long long _bulletinType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    bool_mainAssetIsMine;
    bool_mainAssetIsVideo;
    bool_containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    long long _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    long long _commentCount;
    bool_commentIsCaption;
    bool_suppressAlert;
    NSMutableSet *_senderNames;
    bool_forMultipleAsset;
    bool_allMultipleAssetIsMine;
    bool_isMixedType;
    unsigned long long _recordID;
    unsigned long long _replacedBulletinRecordID;
    unsigned long long _originalRecordID;
    NSString *_albumUUID;
    NSString *_albumCloudGUID;
    NSDate *_date;
    NSDate *_originalDate;
    NSDate *_expirationDate;
}

@property(readonly) long long bulletinType;
@property unsigned long long recordID;
@property unsigned long long replacedBulletinRecordID;
@property unsigned long long originalRecordID;
@property(readonly) NSString * albumUUID;
@property(readonly) NSString * albumCloudGUID;
@property(readonly) NSString * mainAssetUUID;
@property(readonly) NSString * senderEmailAddress;
@property(readonly) NSString * title;
@property(readonly) NSString * message;
@property(readonly) NSDate * date;
@property(copy) NSDate * originalDate;
@property(readonly) NSDate * expirationDate;
@property(readonly) NSString * destinationURLString;
@property(readonly) bool hasThumbnail;
@property(readonly) NSArray * suppressionContexts;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) bool canMergeWithPersistedBulletins;
@property(readonly) bool allAssetsAreFullResolution;
@property(readonly) bool thumbnailAssetIsPlaceholder;
@property(readonly) double completionPercentage;
@property bool suppressAlert;


- (bool)suppressAlert;
- (bool)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (double)completionPercentage;
- (bool)thumbnailAssetIsPlaceholder;
- (bool)allAssetsAreFullResolution;
- (id)bulletinByMergingWithBulletin:(id)arg1;
- (id)suppressionContexts;
- (id)destinationURLString;
- (id)_localizedCountFormatter;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletinDictionary:(id)arg2;
- (id)originalDate;
- (id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(bool)arg6 mainAssetIsVideo:(bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(bool)arg15 allMultipleAssetIsMine:(bool)arg16 isMixedType:(bool)arg17;
- (id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(bool)arg6 mainAssetIsVideo:(bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13;
- (void)setSuppressAlert:(bool)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setReplacedBulletinRecordID:(unsigned long long)arg1;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2;
- (id)bulletinByMergingWithBulletinDictionary:(id)arg1;
- (bool)canMergeWithPersistedBulletins;
- (void)setOriginalRecordID:(unsigned long long)arg1;
- (unsigned long long)originalRecordID;
- (bool)isCommentPiggyBackedOnPhotosAddedBulletin;
- (id)albumUUID;
- (long long)bulletinType;
- (unsigned long long)replacedBulletinRecordID;
- (id)initWithLikeAdded:(id)arg1;
- (id)mainAssetUUID;
- (id)initWithCommentAdded:(id)arg1;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)senderEmailAddress;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)albumCloudGUID;
- (void)setRecordID:(unsigned long long)arg1;
- (id)expirationDate;
- (id)_initWithType:(long long)arg1;
- (id)message;
- (id)title;
- (unsigned long long)recordID;
- (id)init;
- (id)date;
- (void)dealloc;
- (id)description;
- (bool)hasThumbnail;
- (id)dictionaryRepresentation;

@end
