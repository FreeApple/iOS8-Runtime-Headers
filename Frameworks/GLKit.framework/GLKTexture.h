/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@class NSData, NSString;

@interface GLKTexture : NSObject  {
    NSData *imageData;
    struct CGImageBlockSet { } *_blockSet;
    struct __CFData { } *_cfData;
    unsigned int _width;
    unsigned int _height;
    unsigned int orientation;
    unsigned int numMipMapLevels;
    unsigned int bitsPerPixel;
    unsigned int _rowBytes;
    unsigned int nComponents;
    unsigned int nPrimarySurfaces;
    unsigned int nSurfaces;
    int loadMode;
    int texelFormat;
    int _dataCategory;
    unsigned int _index;
    unsigned int GLTextureName;
    unsigned int bindTarget;
    unsigned int textureTarget;
    unsigned int internalFormat;
    unsigned int format;
    unsigned int type;
    int _unpackAlignment;
    bool_requestIssuedForAlphaPremultiplication;
    bool_requestIssuedForMipmapGeneration;
    bool_requestIssuedToReorientToGL;
    bool_requestIssuedToInterpretGrayAsAlpha;
    bool_requestIssuedForSRGB;
    bool_hasPremultipliedAlpha;
    boolisPowerOfTwo;
    bool_isCubeMap;
    boolisMipmapped;
    boolisVerticalFlipped;
    boolhasAlpha;
    boolreOrient;
    unsigned int _primarySurfaceLength;
    NSString *_label;
}

@property(readonly) NSData * imageData;
@property unsigned int GLTextureName;
@property unsigned int bindTarget;
@property unsigned int textureTarget;
@property unsigned int internalFormat;
@property unsigned int format;
@property unsigned int type;
@property int texelFormat;
@property unsigned int width;
@property unsigned int height;
@property unsigned int orientation;
@property unsigned int numMipMapLevels;
@property unsigned int bitsPerPixel;
@property unsigned int rowBytes;
@property unsigned int nComponents;
@property unsigned int nPrimarySurfaces;
@property unsigned int nSurfaces;
@property int loadMode;
@property int dataCategory;
@property unsigned int index;
@property(readonly) bool hasPremultipliedAlpha;
@property bool isPowerOfTwo;
@property bool isCubeMap;
@property bool isMipmapped;
@property bool isVerticalFlipped;
@property bool hasAlpha;
@property bool reOrient;
@property(copy) NSString * label;


- (void)setTextureTarget:(unsigned int)arg1;
- (void)setHasAlpha:(bool)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setReOrient:(bool)arg1;
- (bool)reOrient;
- (void)setIsVerticalFlipped:(bool)arg1;
- (void)setIsMipmapped:(bool)arg1;
- (bool)isMipmapped;
- (void)setIsCubeMap:(bool)arg1;
- (void)setIsPowerOfTwo:(bool)arg1;
- (bool)hasPremultipliedAlpha;
- (void)setNSurfaces:(unsigned int)arg1;
- (unsigned int)nSurfaces;
- (void)setNPrimarySurfaces:(unsigned int)arg1;
- (unsigned int)nPrimarySurfaces;
- (void)setNComponents:(unsigned int)arg1;
- (void)setRowBytes:(unsigned int)arg1;
- (void)setBitsPerPixel:(unsigned int)arg1;
- (void)setNumMipMapLevels:(unsigned int)arg1;
- (unsigned int)numMipMapLevels;
- (void)setTexelFormat:(int)arg1;
- (void)setInternalFormat:(unsigned int)arg1;
- (void)setBindTarget:(unsigned int)arg1;
- (void)setDataCategory:(int)arg1;
- (void)setLoadMode:(int)arg1;
- (void)setGLTextureName:(unsigned int)arg1;
- (unsigned int)GLTextureName;
- (bool)uploadToGLTexture:(unsigned int)arg1 error:(id*)arg2;
- (id)initWithDecodedData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 rowBytes:(unsigned int)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id*)arg8;
- (id)initWithCGImage:(struct CGImage { }*)arg1 forceCubeMap:(bool)arg2 wasCubeMap:(bool*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6;
- (id)initWithData:(id)arg1 forceCubeMap:(bool)arg2 wasCubeMap:(bool*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6;
- (unsigned int)rowBytes;
- (bool)_uploadToGLTexture:(unsigned int)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id*)arg8;
- (bool)premultiplyWithAlpha:(void*)arg1 source:(void*)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id*)arg6;
- (bool)reorientToGL:(void*)arg1 source:(void*)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id*)arg6;
- (bool)canHonorSRGBrequest;
- (bool)decodeCGImage:(struct CGImage { }*)arg1;
- (bool)decodeCGImageDataProvider:(struct CGImage { }*)arg1;
- (bool)decodeCGImageImageProvider:(struct CGImage { }*)arg1 CGImageProvider:(struct CGImageProvider { }*)arg2;
- (bool)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long long)arg2 andColorModel:(int)arg3;
- (bool)shouldApplyPremultiplication;
- (bool)shouldApplyReorientToGL;
- (void*)alignmentFix:(unsigned int)arg1 data:(const void*)arg2;
- (bool)determinePVRFormat:(unsigned int)arg1;
- (unsigned int)textureTarget;
- (unsigned int)bindTarget;
- (bool)hasAlpha;
- (bool)isVerticalFlipped;
- (bool)isPowerOfTwo;
- (unsigned int)internalFormat;
- (int)texelFormat;
- (unsigned int)nComponents;
- (unsigned int)bitsPerPixel;
- (bool)isCubeMap;
- (int)dataCategory;
- (int)loadMode;
- (bool)loadCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)loadPVRTCData:(id)arg1 error:(id*)arg2;
- (bool)loadWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)updateRequestedOperationsFromOptions:(id)arg1;
- (unsigned int)orientation;
- (unsigned int)format;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (id)imageData;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (unsigned int)width;
- (id)label;
- (void)setOrientation:(unsigned int)arg1;
- (id)init;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)dealloc;
- (void)setLabel:(id)arg1;

@end
