/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ESDMetafileBlipContext : ESDBlipContext  {
    unsigned int mCb;
    unsigned int defaultHeaderSize;
}

@property unsigned int defaultHeaderSize;


- (unsigned int)defaultHeaderSize;
- (void)setDefaultHeaderSize:(unsigned int)arg1;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 uncompressed:(unsigned int)arg3 stream:(struct SsrwOOStream { int (**x1)(); }*)arg4 streamID:(unsigned int)arg5;
- (bool)loadDelayedNode:(id)arg1;

@end
