/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlaybackControlRequest : HSRequest  {
    unsigned int _interfaceID;
    long long _controlCommand;
}

@property(readonly) long long controlCommand;
@property(readonly) unsigned int interfaceID;


- (long long)controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(long long)arg2;
- (unsigned int)interfaceID;

@end
