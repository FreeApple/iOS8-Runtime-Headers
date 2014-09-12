/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPCMBuffer : AVAudioBuffer  {
}

@property(readonly) unsigned int frameCapacity;
@property unsigned int frameLength;
@property(readonly) unsigned long long stride;
@property(readonly) float** floatChannelData;
@property(readonly) short** int16ChannelData;
@property(readonly) int** int32ChannelData;


- (short**)int16ChannelData;
- (int**)int32ChannelData;
- (float**)floatChannelData;
- (unsigned long long)stride;
- (void)setFrameLength:(unsigned int)arg1;
- (void)_initChannelPtrs;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;
- (unsigned int)frameCapacity;
- (unsigned int)frameLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
