/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction  {
    NSString *_modelIdentifier;
    NSArray *_keywords;
    void *_recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    struct { 
        unsigned int debugDumpEnabled : 1; 
        unsigned int preferredEngine : 2; 
        unsigned int resetEngine : 1; 
        unsigned int bluetoothAllowed : 1; 
        unsigned int hasStarted : 1; 
    } _recognizeFlags;
}


- (void)_handleRecognitionCompleted:(struct __VSRecognition { }*)arg1 withResults:(struct __CFArray { }*)arg2 error:(struct __CFError { }*)arg3;
- (void)_handleRecognitionStarted:(struct __VSRecognition { }*)arg1;
- (void)_handleRecognitionPrepared:(struct __VSRecognition { }*)arg1;
- (void)_releaseFromPrepare;
- (void)_setResults:(id)arg1;
- (void)_configureNewRecognitionInstance;
- (bool)_setDebugDumpEnabled:(bool)arg1 dumpPath:(id)arg2;
- (id)_actionForEmptyResults;
- (struct __VSRecognition { }*)_createRecognitionInstanceWithCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1 info:(void*)arg2;
- (id)_keywords;
- (bool)_keywordIndexChanged;
- (long long)_keywordCount;
- (id)_keywordAtIndex:(long long)arg1;
- (float)_inputLevelDB;
- (float)_inputLevel;
- (void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2;
- (bool)_setEngineResetRequired:(bool)arg1;
- (bool)_setInputLevelUpdateInterval:(double)arg1;
- (bool)_setAudioInputPath:(id)arg1;
- (bool)_setPreferredEngine:(int)arg1;
- (bool)_setDebugDumpEnabled:(bool)arg1;
- (bool)_setDebugDumpPath:(id)arg1;
- (bool)_setBluetoothInputAllowed:(bool)arg1;
- (int)completionType;
- (bool)_isActivelyRecognizing;
- (bool)_isRecognizing;
- (id)initWithModelIdentifier:(id)arg1;
- (id)_debugDumpPath;
- (bool)_hasDeferredStartCallback;
- (void)_continueAfterDeferredStart;
- (id)modelIdentifier;
- (id)cancel;
- (void)dealloc;
- (void)_reset;
- (id)perform;

@end
