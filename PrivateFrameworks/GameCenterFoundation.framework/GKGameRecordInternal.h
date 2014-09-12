/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal  {
    GKScoreInternal *_score;
    NSDate *_lastPlayedDate;
    NSDate *_purchaseDate;
    unsigned short _achievements;
    short _achievementPoints;
    unsigned short _friendRank;
    unsigned short _maxFriendRank;
    unsigned int _rank;
    unsigned int _maxRank;
}

@property(retain) GKScoreInternal * score;
@property(retain) NSDate * lastPlayedDate;
@property(retain) NSDate * purchaseDate;
@property unsigned short achievements;
@property short achievementPoints;
@property unsigned short friendRank;
@property unsigned short maxFriendRank;
@property unsigned int rank;
@property unsigned int maxRank;

+ (id)secureCodedPropertyKeys;
+ (id)gameRecordForGame:(id)arg1;

- (void)setMaxRank:(unsigned int)arg1;
- (unsigned int)maxRank;
- (void)setMaxFriendRank:(unsigned short)arg1;
- (unsigned short)maxFriendRank;
- (void)setFriendRank:(unsigned short)arg1;
- (unsigned short)friendRank;
- (void)setAchievementPoints:(short)arg1;
- (short)achievementPoints;
- (void)setAchievements:(unsigned short)arg1;
- (unsigned short)achievements;
- (void)updateWithGame:(id)arg1;
- (id)lastPlayedDate;
- (void)setRank:(unsigned int)arg1;
- (void)setScore:(id)arg1;
- (unsigned int)rank;
- (void)setPurchaseDate:(id)arg1;
- (id)purchaseDate;
- (void)setLastPlayedDate:(id)arg1;
- (void)dealloc;
- (id)score;

@end
