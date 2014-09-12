/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVAudioOutputNode, AVAudioMixerNode, AVAudioInputNode;

@interface AVAudioEngine : NSObject  {
    void *_impl;
}

@property struct OpaqueMusicSequence { }* musicSequence;
@property(readonly) AVAudioOutputNode * outputNode;
@property(readonly) AVAudioInputNode * inputNode;
@property(readonly) AVAudioMixerNode * mainMixerNode;
@property(getter=isRunning,readonly) bool running;


- (struct AVAudioEngineImpl { id x1; struct AVAudioEngineGraph {} *x2; boolx3; boolx4; id x5; id x6; id x7; id x8; struct AVAudioIOUnit {} *x9; id x10; int x11; }*)implementation;
- (struct OpaqueMusicSequence { }*)musicSequence;
- (void)setMusicSequence:(struct OpaqueMusicSequence { }*)arg1;
- (void)prepare;
- (bool)startAndReturnError:(id*)arg1;
- (void)disconnectNodeOutput:(id)arg1;
- (void)disconnectNodeInput:(id)arg1;
- (void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2;
- (void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2;
- (void)connect:(id)arg1 to:(id)arg2 format:(id)arg3;
- (void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5;
- (id)mainMixerNode;
- (id)inputNode;
- (id)outputNode;
- (void)detachNode:(id)arg1;
- (void)attachNode:(id)arg1;
- (void)pause;
- (void)stop;
- (bool)isRunning;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;

@end
