/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
    AVMediaFileType *_fileType;
}

@property(readonly) AVMediaFileType * fileType;

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;
+ (void)initialize;

- (bool)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2;
- (bool)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2;
- (id)initWithFileType:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)fileType;

@end
