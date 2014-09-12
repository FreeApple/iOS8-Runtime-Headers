/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSURL, NSDate, NSNumber;

@interface GKStoreItemInternal : GKInternalRepresentation  {
    NSNumber *_adamID;
    NSString *_artistName;
    NSString *_priceDisplay;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    NSURL *_tellAFriendMessageContentsUrl;
    NSDate *_expirationDate;
    unsigned int _numberOfUserRatings;
    float _averageUserRating;
    bool_owned;
}

@property(retain) NSNumber * adamID;
@property(retain) NSString * artistName;
@property(retain) NSString * priceDisplay;
@property(retain) NSURL * viewItemURL;
@property(retain) NSURL * shortViewItemURL;
@property(retain) NSURL * tellAFriendMessageContentsUrl;
@property(retain) NSDate * expirationDate;
@property unsigned int numberOfUserRatings;
@property float averageUserRating;
@property bool owned;

+ (id)secureCodedPropertyKeys;

- (unsigned int)numberOfUserRatings;
- (float)averageUserRating;
- (void)setNumberOfUserRatings:(unsigned int)arg1;
- (void)setShortViewItemURL:(id)arg1;
- (id)shortViewItemURL;
- (void)setViewItemURL:(id)arg1;
- (void)setOwned:(bool)arg1;
- (bool)owned;
- (void)setTellAFriendMessageContentsUrl:(id)arg1;
- (id)tellAFriendMessageContentsUrl;
- (void)setAverageUserRating:(float)arg1;
- (void)storeItemURLForGamePlatform:(unsigned char)arg1 withContext:(id)arg2 withHandler:(id)arg3;
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(unsigned char)arg2 extraQueryParams:(id)arg3;
- (id)viewItemURL;
- (void)setAdamID:(id)arg1;
- (id)adamID;
- (void)setExpirationDate:(id)arg1;
- (void)setPriceDisplay:(id)arg1;
- (id)expirationDate;
- (id)priceDisplay;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)isValid;
- (void)dealloc;

@end
