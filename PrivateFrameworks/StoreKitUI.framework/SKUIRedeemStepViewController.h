/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;

@interface SKUIRedeemStepViewController : UIViewController  {
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_configuration;
}

@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUIRedeemConfiguration * configuration;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) bool shouldShowPassbookLearnMore;


- (bool)shouldShowPassbookLearnMore;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)configuration;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)setConfiguration:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
