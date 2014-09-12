/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * endpoint;
@property(copy) NSArray * orderedContext;
@property long long packetCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;
+ (id)finishSpeech;

- (void)setEndpoint:(id)arg1;
- (void)setPacketCount:(long long)arg1;
- (long long)packetCount;
- (void)setOrderedContext:(id)arg1;
- (id)orderedContext;
- (id)encodedClassName;
- (id)endpoint;
- (id)groupIdentifier;

@end
