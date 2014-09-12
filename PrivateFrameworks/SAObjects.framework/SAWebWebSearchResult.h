/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * imageResults;
@property(copy) NSArray * newsResults;
@property(copy) NSArray * relatedSearchResults;
@property(copy) NSNumber * totalImageResults;
@property(copy) NSNumber * totalNewsResults;
@property(copy) NSNumber * totalVideoResults;
@property(copy) NSNumber * totalWebResults;
@property(copy) NSArray * videoResults;
@property(copy) NSArray * webResults;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)webSearchResult;

- (void)setWebResults:(id)arg1;
- (id)webResults;
- (void)setVideoResults:(id)arg1;
- (id)videoResults;
- (void)setTotalWebResults:(id)arg1;
- (id)totalWebResults;
- (void)setTotalVideoResults:(id)arg1;
- (id)totalVideoResults;
- (void)setTotalNewsResults:(id)arg1;
- (id)totalNewsResults;
- (void)setTotalImageResults:(id)arg1;
- (id)totalImageResults;
- (void)setRelatedSearchResults:(id)arg1;
- (id)relatedSearchResults;
- (void)setNewsResults:(id)arg1;
- (id)newsResults;
- (void)setImageResults:(id)arg1;
- (id)imageResults;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
