/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUCryptor : NSObject  {
    int mOperation;
    struct _CCCryptor { } *mCryptor;
    unsigned long long mBlockSize;
    boolmFinished;
    char *mDecryptionInputBuffer;
    char *mOutputBuffer;
    char *mOutputBufferPos;
    unsigned long long mOutputBufferAvailable;
}


- (bool)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(bool)arg4 error:(id*)arg5;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(bool)arg5;
- (bool)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(bool)arg4 crc32:(unsigned int*)arg5 error:(id*)arg6;
- (bool)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char *)arg3 ivLength:(unsigned long long)arg4;
- (void)dealloc;

@end
