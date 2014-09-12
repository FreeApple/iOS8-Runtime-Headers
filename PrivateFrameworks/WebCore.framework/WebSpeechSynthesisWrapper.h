/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {
    struct PlatformSpeechSynthesizer { int (**x1)(); struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; struct PlatformSpeechSynthesizerClient {} *x4; struct RetainPtr<WebSpeechSynthesisWrapper> { void *x_5_1_1; } x5; } *m_synthesizerObject;
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> { 
        struct PlatformSpeechSynthesisUtterance {} *m_ptr; 
    } m_utterance;
    struct RetainPtr<AVSpeechSynthesizer> { 
        void *m_ptr; 
    } m_synthesizer;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)resume;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer { int (**x1)(); struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; struct PlatformSpeechSynthesizerClient {} *x4; struct RetainPtr<WebSpeechSynthesisWrapper> { void *x_5_1_1; } x5; }*)arg1;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speakUtterance:(struct PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance> { struct PlatformSpeechSynthesisUtterance {} *x1; })arg1;
- (float)mapSpeechRateToPlatformRate:(float)arg1;
- (void)pause;
- (void)cancel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
