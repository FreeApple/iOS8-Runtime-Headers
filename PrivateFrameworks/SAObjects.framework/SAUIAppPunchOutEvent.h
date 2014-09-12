/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * appDisplayName;
@property(copy) NSString * bundleId;
@property(copy) NSString * originalCommandId;
@property(copy) NSString * punchOutName;
@property(copy) NSURL * punchOutUri;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appPunchOutEvent;

- (void)setPunchOutUri:(id)arg1;
- (id)punchOutUri;
- (void)setPunchOutName:(id)arg1;
- (id)punchOutName;
- (void)setAppDisplayName:(id)arg1;
- (id)appDisplayName;
- (id)encodedClassName;
- (void)setOriginalCommandId:(id)arg1;
- (id)originalCommandId;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (id)groupIdentifier;

@end
