/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController  {
    SULoadingView *_loadingView;
}


- (void)_performPurchaseAnimationForIndexPath:(id)arg1;
- (bool)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2;
- (bool)purchaseItemAtIndexPath:(id)arg1;
- (bool)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;
- (id)newNoItemsOverlayLabel;
- (id)itemAtIndexPath:(id)arg1;
- (void)setLoading:(bool)arg1;
- (id)init;
- (void)dealloc;

@end
