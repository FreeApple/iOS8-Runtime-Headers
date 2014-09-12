/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand  {
}

@property(copy) NSString * sessionId;

+ (id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechRecognitionComplete;

- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (id)groupIdentifier;

@end
