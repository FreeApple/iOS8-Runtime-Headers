/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest  {
    GEOPhotoInfo *_info;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _imageHandler;

}

@property(copy) id imageHandler;
@property(retain) GEOPhotoInfo * info;

+ (id)requestWithBusinessMetadata:(id)arg1 info:(id)arg2;

- (id)imageHandler;
- (void)setImageHandler:(id)arg1;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;
- (id)url;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg1;

@end
