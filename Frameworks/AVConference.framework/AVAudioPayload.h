/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSArray;

@interface AVAudioPayload : NSObject  {
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; char *x6; int x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; char *x9; int x10; int x11; int x12; int x13; unsigned char x14; int x15; int x16; unsigned int x17; unsigned int x18; } *encoder;
    int payload;
    unsigned int samplesPerFrame;
    unsigned int blockSize;
    unsigned int sampleRate;
    unsigned int encodedBytesPerFrame;
    unsigned int bundleHeaderBytes;
    unsigned int bitrate;
    NSArray *supportedBitrates;
    boolcanBundle;
    boolcanSetBitrate;
    boolforcingBitrate;
    booluseSBR;
    boolshouldReset;
    boolshouldLimitMaxPacketSize;
    int format;
}

@property(readonly) int payload;
@property(readonly) unsigned int samplesPerFrame;
@property(readonly) unsigned int blockSize;
@property(readonly) unsigned int sampleRate;
@property(readonly) unsigned int encodedBytesPerFrame;
@property(readonly) unsigned int bundleHeaderBytes;
@property(readonly) unsigned int bitrate;
@property(readonly) NSArray * supportedBitrates;
@property(readonly) bool canBundle;
@property bool useSBR;
@property(readonly) bool useCookie;

+ (bool)isPayloadSupported:(int)arg1;

- (void)createSupportedBitratesForOpus;
- (void)createSupportedBitratesForAACELD;
- (unsigned int)aacBitrate;
- (void)createSupportedBitrates;
- (id)supportedBitrates;
- (void)setInternalSampleRate:(unsigned int)arg1;
- (bool)setupEncodeProperties;
- (bool)setupInputProperties;
- (unsigned int)encodedBytesPerFrame;
- (float)qualityForBitRate:(unsigned int)arg1;
- (bool)setBitrate:(unsigned int)arg1;
- (void)resetEncoder;
- (unsigned int)bundleHeaderBytes;
- (bool)createEncoderWithInternalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (bool)getMagicCookie:(char *)arg1 withLength:(unsigned int*)arg2;
- (bool)useCookie;
- (void)setUseSBR:(bool)arg1;
- (id)initWithPayload:(int)arg1 blockSize:(unsigned int)arg2;
- (unsigned int)bitrate;
- (bool)useSBR;
- (unsigned int)blockSize;
- (bool)canBundle;
- (int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4;
- (unsigned int)samplesPerFrame;
- (unsigned int)sampleRate;
- (void)dealloc;
- (unsigned int)flags;
- (int)payload;

@end
