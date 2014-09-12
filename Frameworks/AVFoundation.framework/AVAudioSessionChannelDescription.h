/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString;

@interface AVAudioSessionChannelDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * channelName;
@property(readonly) NSString * owningPortUID;
@property(readonly) unsigned long long channelNumber;
@property(readonly) unsigned int channelLabel;

+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;
+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned int)arg3;

- (unsigned int)channelLabel;
- (id)channelName;
- (bool)isEqualToChannel:(id)arg1;
- (struct ChannelDescriptionImpl { id x1; id x2; unsigned int x3; unsigned int x4; }*)privateGetImplementation;
- (unsigned long long)channelNumber;
- (id)owningPortUID;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
