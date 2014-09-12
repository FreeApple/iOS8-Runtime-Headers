/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontInfo : NSObject <CPDisposable> {
    struct __CFData { } *fontData;
    const char *dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    boolvalid;
}


- (struct __CFData { }*)newKernData;
- (bool)getDescriptor:(struct { double x1; double x2; unsigned int x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; }*)arg1;
- (id)initWithFontData:(struct __CFData { }*)arg1;
- (int)readLong;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })readRect;
- (unsigned int)readUnsignedLong;
- (unsigned char)readByte;
- (int)kernUnitsPerEm;
- (void)dispose;
- (float)readFloat;
- (void)finalize;
- (void)dealloc;

@end
