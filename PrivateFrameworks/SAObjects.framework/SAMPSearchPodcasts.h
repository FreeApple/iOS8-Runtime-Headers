/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPSearchPodcasts : SADomainCommand  {
}

@property long long maxResults;
@property(copy) NSString * podcastName;

+ (id)searchPodcastsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchPodcasts;

- (void)setPodcastName:(id)arg1;
- (id)podcastName;
- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setMaxResults:(long long)arg1;
- (long long)maxResults;
- (id)groupIdentifier;

@end
