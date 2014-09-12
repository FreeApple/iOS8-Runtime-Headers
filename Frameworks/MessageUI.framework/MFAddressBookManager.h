/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressBookManager : NSObject  {
    void *_addressBook;
    int _lock;
    struct __CFDictionary { } *_clients;
}

+ (bool)isAuthorizedToUseAddressBook;
+ (id)sharedManager;

- (void)_handleAddressBookPrefsChangeNotification;
- (id)_clientWeakReferences;
- (void)_handleAddressBookChangeNotification;
- (void)_applicationResumed:(id)arg1;
- (void*)addressBook;
- (id)init;
- (void)dealloc;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;

@end
