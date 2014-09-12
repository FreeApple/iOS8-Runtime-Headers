/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class PHAsset, NSString;

@interface PHAssetOriginalMetadataProperties : NSObject  {
    short _originalHeight;
    short _originalWidth;
    short _originalExifOrientation;
    int _originalFilesize;
    PHAsset *_asset;
    NSString *_originalAssetsUUID;
    NSString *_originalFilename;
    NSString *_originalPath;
}

@property(readonly) PHAsset * asset;
@property(readonly) NSString * originalAssetsUUID;
@property(readonly) short originalHeight;
@property(readonly) short originalWidth;
@property(readonly) NSString * originalFilename;
@property(readonly) short originalExifOrientation;
@property(readonly) int originalFilesize;
@property(readonly) NSString * originalPath;


- (short)originalExifOrientation;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;
- (id)originalPath;
- (id)originalAssetsUUID;
- (short)originalHeight;
- (short)originalWidth;
- (id)originalFilename;
- (int)originalFilesize;
- (id)asset;
- (void).cxx_destruct;

@end
