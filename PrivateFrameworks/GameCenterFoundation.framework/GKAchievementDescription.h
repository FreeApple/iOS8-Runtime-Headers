/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class UIImage, GKAchievementInternal, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {
    GKAchievementInternal *_internal;
    UIImage *_image;
}

@property(copy,readonly) NSString * identifier;
@property(retain,readonly) NSString * groupIdentifier;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * achievedDescription;
@property(copy,readonly) NSString * unachievedDescription;
@property(readonly) long long maximumPoints;
@property(getter=isHidden,readonly) bool hidden;
@property(getter=isReplayable,readonly) bool replayable;
@property(retain) UIImage * image;
@property(retain) GKAchievementInternal * internal;

+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (id)placeholderCompletedAchievementImage;
+ (id)incompleteAchievementImage;

- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)showBanner;
- (id)imageURL;

@end
