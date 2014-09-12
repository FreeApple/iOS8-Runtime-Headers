/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject  {
    AVInternalDeviceList *_internalList;
}

@property(copy) id changeListener;

+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
+ (bool)setInputDevice:(id)arg1;
+ (id)currentInputDevice;

- (id)outputDevices;
- (id)inputDevices;
- (id)changeListener;
- (void)setChangeListener:(id)arg1;
- (id)devices;
- (id)init;
- (void)dealloc;

@end
