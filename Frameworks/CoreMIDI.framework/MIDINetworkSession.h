/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@class NSString;

@interface MIDINetworkSession : NSObject  {
    struct _MIDINetworkSessionImpl { unsigned int x1; unsigned int x2; unsigned int x3; id x4; id x5; struct ContactOrConnectionSet { boolx_6_1_1; id x_6_1_2; } x6; } *_impl;
}

@property(getter=isEnabled) bool enabled;
@property(readonly) unsigned long long networkPort;
@property(readonly) NSString * networkName;
@property(readonly) NSString * localName;
@property unsigned long long connectionPolicy;

+ (id)defaultSession;

- (unsigned int)destinationEndpoint;
- (unsigned int)sourceEndpoint;
- (void)contactsChanged;
- (void)sessionChanged;
- (bool)removeContact:(id)arg1;
- (bool)addContact:(id)arg1;
- (id)contacts;
- (void)setConnectionPolicy:(unsigned long long)arg1;
- (unsigned long long)connectionPolicy;
- (unsigned long long)networkPort;
- (bool)addOrRemoveConnection:(id)arg1 add:(bool)arg2;
- (void)refreshBonjourName;
- (void)updateFromEntity;
- (void)setStateToEntity;
- (id)networkName;
- (bool)addConnection:(id)arg1;
- (bool)removeConnection:(id)arg1;
- (id)connections;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)localName;
- (id)init;
- (void)dealloc;

@end
