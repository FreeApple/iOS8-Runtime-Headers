/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAMPPodcastSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * results;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)podcastSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)podcastSearchCompleted;

- (id)encodedClassName;
- (void)setResults:(id)arg1;
- (id)groupIdentifier;
- (id)results;

@end
