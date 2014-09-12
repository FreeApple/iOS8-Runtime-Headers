/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIAccountButtonsViewController, NSString, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property(readonly) SKUIAccountButtonsComponent * pageComponent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
