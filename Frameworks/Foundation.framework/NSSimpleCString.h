/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleCString : NSString  {
    char *bytes;
    int numBytes;
    int _unused;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)hasPrefix:(id)arg1;
- (bool)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (unsigned long long)length;
- (bool)hasSuffix:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (const char *)_fastCStringContents:(bool)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)cStringLength;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)stringByAppendingString:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2;
- (bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;

@end
