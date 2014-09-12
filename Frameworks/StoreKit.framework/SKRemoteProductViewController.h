/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString, SKStoreProductViewController;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {
    SKStoreProductViewController *_productViewController;
}

@property SKStoreProductViewController * productViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)productViewController;
- (void)promptForStarRating;
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)didReceiveTitle:(id)arg1;
- (void)didFinishWithResult:(id)arg1;
- (void)setProductViewController:(id)arg1;
- (void)didFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;

@end
