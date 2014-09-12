/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand  {
}

@property(copy) NSArray * tokens;

+ (id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechPartialResult;

- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setTokens:(id)arg1;
- (id)groupIdentifier;
- (id)tokens;
- (id)af_bestTextInterpretation;
- (id)af_userUtteranceValue;
- (id)af_correctionContext;

@end
