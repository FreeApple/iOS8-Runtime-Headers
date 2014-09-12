/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWeatherLocationDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)locationDeleteCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationDeleteCompleted;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
