/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class MLMediaLibraryService, NSUUID, <ML3DatabaseDistantConnectionDelegate>;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection  {
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    bool_connectionOpen;
    <ML3DatabaseDistantConnectionDelegate> *_distantDelegate;
}

@property <ML3DatabaseDistantConnectionDelegate> * distantDelegate;


- (void)setDistantDelegate:(id)arg1;
- (id)distantDelegate;
- (bool)shouldCacheStatements;
- (bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 isRetry:(bool)arg2;
- (void)_serviceTerminatedTransactionNotification:(id)arg1;
- (int)checkpointDatabase;
- (bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(int (*)())arg3 userData:(void*)arg4;
- (bool)_internalEndTransactionAndCommit:(bool)arg1;
- (bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (bool)_openWithFlags:(int)arg1;
- (void)setProfilingLevel:(int)arg1;
- (bool)registerModule:(id)arg1;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(bool)arg4;
- (bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id)arg3;
- (id)initWithDatabasePath:(id)arg1;
- (id)currentTransactionID;
- (struct sqlite3 { }*)_sqliteHandle;
- (bool)isOpen;
- (void)setReadOnly:(bool)arg1;
- (bool)isReadOnly;
- (bool)close;
- (void)dealloc;
- (void).cxx_destruct;

@end
