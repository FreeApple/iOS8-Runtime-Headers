/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAsset, ALAssetPrivate;

@interface ALAsset : NSObject  {
    id _internal;
}

@property(readonly) ALAsset * originalAsset;
@property(getter=isEditable,readonly) bool editable;
@property(retain) ALAssetPrivate * internal;

+ (struct CGSize { double x1; double x2; })largePreviewImageSizeForSize:(struct CGSize { double x1; double x2; })arg1;

- (bool)isDeletable;
- (void)requestDefaultRepresentation;
- (void)setLargePreviewImageWithImageData:(id)arg1 completionBlock:(id)arg2;
- (void)setVideoAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (id)representationForUTI:(id)arg1;
- (void)setExternalUsageIntent:(unsigned long long)arg1;
- (id)originalAsset;
- (id)_typeAsString;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (struct CGImage { }*)aspectRatioThumbnail;
- (id)internal;
- (void)setInternal:(id)arg1;
- (bool)isEditable;
- (struct CGImage { }*)thumbnail;
- (bool)isValid;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)defaultRepresentation;
- (id)_uuid;

@end
