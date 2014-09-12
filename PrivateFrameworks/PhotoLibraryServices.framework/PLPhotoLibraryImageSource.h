/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryImageSource : PLImageSource  {
    int _imageFormat;
}

@property(readonly) int imageFormat;


- (id)initWithImageFormat:(int)arg1;
- (id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2;
- (int)imageFormat;
- (unsigned short)sourceIdentifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
