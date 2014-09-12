/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray, NSURL, SALocalSearchRating, NSNumber;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * providerId;
@property(copy) NSString * providerId2;
@property(retain) SALocalSearchRating * rating;
@property(copy) NSArray * selectReviews;
@property(copy) NSNumber * totalReviewCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)reviewListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reviewList;

- (void)setTotalReviewCount:(id)arg1;
- (id)totalReviewCount;
- (void)setSelectReviews:(id)arg1;
- (id)selectReviews;
- (void)setProviderId2:(id)arg1;
- (id)providerId2;
- (id)encodedClassName;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (id)rating;
- (void)setRating:(id)arg1;
- (id)groupIdentifier;

@end
