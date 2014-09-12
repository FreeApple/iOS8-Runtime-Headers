/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemArtworkContext, UIImage, SKUIVideoImageDataConsumer, SKUILockupSwooshViewController;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader  {
    SKUIItemArtworkContext *_context;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
    UIImage *_videoPlaceholderImage;
}

@property(readonly) SKUILockupSwooshViewController * swooshViewController;


- (id)placeholderImageForVideo:(id)arg1;
- (id)cachedImageForVideo:(id)arg1;
- (id)cachedImageForItem:(id)arg1;
- (bool)loadImageForVideo:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForItem:(id)arg1 reason:(long long)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (id)placeholderImageForItem:(id)arg1;
- (void).cxx_destruct;

@end
