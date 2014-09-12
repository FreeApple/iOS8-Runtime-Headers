/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUITrackSwooshViewController, SKUIItemArtworkContext;

@interface SKUITrackSwooshArtworkLoader : SKUISwooshArtworkLoader  {
    SKUIItemArtworkContext *_artworkContext;
}

@property(readonly) SKUITrackSwooshViewController * swooshViewController;
@property(retain) SKUIItemArtworkContext * artworkContext;


- (id)cachedImageForItem:(id)arg1;
- (bool)loadImageForItem:(id)arg1 reason:(long long)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (void)setArtworkContext:(id)arg1;
- (id)artworkContext;
- (id)placeholderImageForItem:(id)arg1;
- (void).cxx_destruct;

@end
