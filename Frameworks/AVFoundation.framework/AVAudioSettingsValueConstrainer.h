/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject  {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _inputASBD;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _outputASBD;
    struct OpaqueAudioConverter { } *_audioConverter;
    unsigned int _outputDataRate;
    bool_needNewConverter;
    bool_needAvailableSampleRates;
    bool_needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}

@property float outputSampleRate;
@property unsigned int outputFormat;
@property unsigned int outputFormatFlags;
@property unsigned int outputBitsPerChannel;
@property unsigned int outputChannelCount;
@property unsigned int outputDataRate;


- (unsigned int)outputChannelCount;
- (unsigned int)outputBitsPerChannel;
- (unsigned int)outputFormatFlags;
- (float)outputSampleRate;
- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;
- (unsigned int)outputDataRate;
- (void)_bringUpToDate;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_buildAvailableSampleRates;
- (id)_fetchApplicableOutputDataRates;
- (void)_buildAudioConverter;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (void)setOutputDataRate:(unsigned int)arg1;
- (void)setOutputChannelCount:(unsigned int)arg1;
- (void)setOutputSampleRate:(float)arg1;
- (void)setOutputBitsPerChannel:(unsigned int)arg1;
- (void)setOutputFormatFlags:(unsigned int)arg1;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (unsigned int)outputFormat;

@end
