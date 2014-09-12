/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUChunkedString : NSMutableString  {
    unsigned long long _length;
    struct vector<boost::shared_ptr<TSUStringChunk>, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > > { 
        struct shared_ptr<TSUStringChunk> {} *__begin_; 
        struct shared_ptr<TSUStringChunk> {} *__end_; 
        struct __compressed_pair<boost::shared_ptr<TSUStringChunk> *, std::__1::allocator<boost::shared_ptr<TSUStringChunk> > > { 
            struct shared_ptr<TSUStringChunk> {} *__first_; 
        } __end_cap_; 
    } _chunks;
    unsigned long long _chunkLength;
}


- (void)p_compactChunksInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)p_deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 chunkIndex:(unsigned long long)arg2;
- (void)p_insertCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4;
- (void)p_appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2;
- (id)initWithChunkLength:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)length;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)compact;

@end
