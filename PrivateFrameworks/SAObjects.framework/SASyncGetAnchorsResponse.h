/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand  {
}

@property(copy) NSArray * anchors;

+ (id)getAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAnchorsResponse;

- (void)setAnchors:(id)arg1;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)anchors;
- (id)groupIdentifier;

@end
