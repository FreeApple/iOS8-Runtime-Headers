/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class PHAsset, NSData;

@interface PHAssetEmbeddedThumbnailProperties : NSObject  {
    short _embeddedThumbnailWidth;
    short _embeddedThumbnailHeight;
    int _embeddedThumbnailOffset;
    int _embeddedThumbnailLength;
    PHAsset *_asset;
}

@property(readonly) PHAsset * asset;
@property(readonly) bool hasEmbeddedThumbnail;
@property(readonly) NSData * embeddedThumbnailData;
@property(readonly) int embeddedThumbnailOffset;
@property(readonly) int embeddedThumbnailLength;
@property(readonly) short embeddedThumbnailWidth;
@property(readonly) short embeddedThumbnailHeight;


- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;
- (id)embeddedThumbnailData;
- (bool)hasEmbeddedThumbnail;
- (int)embeddedThumbnailLength;
- (short)embeddedThumbnailHeight;
- (short)embeddedThumbnailWidth;
- (int)embeddedThumbnailOffset;
- (id)asset;
- (void).cxx_destruct;

@end
