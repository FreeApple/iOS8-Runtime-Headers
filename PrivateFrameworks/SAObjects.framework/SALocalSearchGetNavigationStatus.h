/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand  {
}

@property(copy) NSNumber * getRoute;

+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNavigationStatus;

- (void)setGetRoute:(id)arg1;
- (id)getRoute;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
