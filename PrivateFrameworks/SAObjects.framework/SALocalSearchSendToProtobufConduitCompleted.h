/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * rawResponse;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)sendToProtobufConduitCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendToProtobufConduitCompleted;

- (void)setRawResponse:(id)arg1;
- (id)rawResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
