/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstYUVImage : NSObject  {
    char *Ybuffer;
    char *Cbuffer;
    int width;
    int height;
    int bytesPerRow;
    struct __CFData { } *dataPtr;
    struct __CVBuffer { } *pixelBuffer;
}

@property int width;
@property int height;
@property int bytesPerRow;
@property char * Ybuffer;
@property char * Cbuffer;


- (void)setBytesPerRow:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)height;
- (int)width;
- (void)setCbuffer:(char *)arg1;
- (void)setYbuffer:(char *)arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)convertRGBAToYUV420:(char *)arg1 rgbaBytesPerRow:(int)arg2;
- (char *)Cbuffer;
- (int)bytesPerRow;
- (char *)Ybuffer;
- (id)initWithCGImage:(struct CGImage { }*)arg1 maxDimension:(int)arg2;
- (void)dealloc;

@end
