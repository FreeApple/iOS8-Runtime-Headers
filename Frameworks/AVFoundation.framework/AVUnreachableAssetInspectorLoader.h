/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader  {
    int _figError;
    NSDictionary *_figErrorUserInfo;
}


- (id)initWithFigError:(int)arg1 userInfo:(id)arg2;
- (Class)_classForTrackInspectors;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;

@end
