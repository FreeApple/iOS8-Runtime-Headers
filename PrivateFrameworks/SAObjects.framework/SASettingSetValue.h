/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetValue : SASettingCommand  {
}

@property bool dryRun;
@property bool failOnSiriDisconnectWarnings;

+ (id)setValueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setValue;

- (void)setFailOnSiriDisconnectWarnings:(bool)arg1;
- (bool)failOnSiriDisconnectWarnings;
- (void)setDryRun:(bool)arg1;
- (bool)dryRun;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
