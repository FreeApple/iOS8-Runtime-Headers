/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand> {
}

@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseClientBoundCommand;

- (void)setCallbacks:(id)arg1;
- (void)setAppId:(id)arg1;
- (id)appId;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)callbacks;
- (id)groupIdentifier;

@end
