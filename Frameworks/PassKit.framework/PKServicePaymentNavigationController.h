/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKServicePaymentAuthorizationViewController, NSString;

@interface PKServicePaymentNavigationController : UINavigationController <PKPaymentAuthorizationServiceProtocol> {
    PKServicePaymentAuthorizationViewController *_authorizationViewController;
}

@property(retain) PKServicePaymentAuthorizationViewController * authorizationViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)setAuthorizationViewController:(id)arg1;
- (id)authorizationViewController;
- (void)_handleHostApplicationDidCancel;
- (void)_authorizationDidSelectShippingContactCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)_authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)_authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)_handleHostApplicationDidBecomeActive;
- (void)_handleHostApplicationWillResignActive;
- (void)_handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 completion:(id)arg3;
- (void)dealloc;
- (void)_hostApplicationDidEnterBackground;
- (void)_willAppearInRemoteViewController;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end
