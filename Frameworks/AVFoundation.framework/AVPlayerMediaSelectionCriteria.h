/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVPlayerMediaSelectionCriteriaInternal;

@interface AVPlayerMediaSelectionCriteria : NSObject  {
    AVPlayerMediaSelectionCriteriaInternal *_criteria;
}

@property(readonly) NSArray * preferredLanguages;
@property(readonly) NSArray * preferredMediaCharacteristics;


- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(bool)arg5 precludeMultichannelAudio:(bool)arg6;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (bool)precludeMultichannelAudio;
- (bool)preferMultichannelAudio;
- (id)precludedMediaSubTypes;
- (id)preferredMediaSubTypes;
- (id)preferredMediaCharacteristics;
- (id)initWithFigDictionary:(id)arg1;
- (id)figDictionary;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)preferredLanguages;

@end
