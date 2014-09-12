/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSArray;

@interface CKDKeyboardTracker : NSObject  {
    NSArray *_enabledKeyboards;
    Class _CKDUITextInputModeClass;
}

@property(readonly) NSArray * enabledKeyboards;
@property Class CKDUITextInputModeClass;

+ (id)sharedTracker;

- (void)_refreshEnabledKeyboards;
- (Class)CKDUITextInputModeClass;
- (void)_inputModeChanged;
- (void)setCKDUITextInputModeClass:(Class)arg1;
- (id)enabledKeyboards;
- (id)init;
- (void).cxx_destruct;
- (id)_init;

@end
