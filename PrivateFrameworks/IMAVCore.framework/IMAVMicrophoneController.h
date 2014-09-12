/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSMutableArray, IMAVMicrophone;

@interface IMAVMicrophoneController : NSObject  {
    id _internal;
    NSMutableArray *_microphones;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain,readonly) NSArray * microphones;
@property(retain) IMAVMicrophone * currentMicrophone;

+ (id)sharedInstance;

- (id)currentMicrophone;
- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (void)setCurrentMicrophone:(id)arg1;
- (id)microphones;
- (id)init;
- (void)dealloc;

@end
