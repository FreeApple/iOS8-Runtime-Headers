/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable> {
}

@property long long code;
@property(copy) NSArray * commandReferences;
@property(copy) NSArray * commands;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resultCallback;

- (void)setCommandReferences:(id)arg1;
- (id)commandReferences;
- (id)encodedClassName;
- (id)commands;
- (void)setCommands:(id)arg1;
- (void)setCode:(long long)arg1;
- (long long)code;
- (id)groupIdentifier;

@end
