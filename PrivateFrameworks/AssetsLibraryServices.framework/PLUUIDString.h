/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLUUIDString : NSString  {
    unsigned char _uuid[16];
    BOOL _uuidString[37];
}

+ (id)UUIDString;

- (id)initWithCFUUIDBytes:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })arg1;
- (id)initWithCFUUID:(struct __CFUUID { }*)arg1;
- (id)initWithUUID:(unsigned char[16])arg1;
- (id)initWithUUIDData:(id)arg1;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })UUIDBytes;
- (id)UUIDData;
- (id)init;
- (unsigned long long)length;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (bool)isEqualToString:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (const char *)UTF8String;

@end
