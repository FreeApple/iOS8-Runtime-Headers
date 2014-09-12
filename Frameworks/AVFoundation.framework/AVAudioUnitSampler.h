/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument  {
}

@property float stereoPan;
@property float masterGain;
@property float globalTuning;


- (void)setGlobalTuning:(float)arg1;
- (void)setMasterGain:(float)arg1;
- (void)setStereoPan:(float)arg1;
- (float)globalTuning;
- (float)masterGain;
- (float)stereoPan;
- (bool)loadAudioFilesAtURLs:(id)arg1 error:(id*)arg2;
- (bool)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id*)arg5;
- (bool)loadInstrumentAtURL:(id)arg1 error:(id*)arg2;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (id)init;

@end
