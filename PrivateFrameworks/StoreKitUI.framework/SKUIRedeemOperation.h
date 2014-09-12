/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation  {
    bool_cameraRecognized;
    NSString *_code;
    SKUIClientContext *_clientContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resultBlock;

}

@property bool cameraRecognized;
@property(retain) SKUIClientContext * clientContext;
@property(copy) id resultBlock;


- (id)_itemsForItemIdentifiers:(id)arg1;
- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;
- (id)_performRequestWithProperties:(id)arg1 error:(id*)arg2;
- (id)_requestPropertiesForThankYouWithURL:(id)arg1;
- (id)_redeemForSuccessDictionary:(id)arg1;
- (id)resultBlock;
- (void)setCameraRecognized:(bool)arg1;
- (void)setResultBlock:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)initWithCode:(id)arg1;
- (bool)cameraRecognized;
- (void)main;
- (void).cxx_destruct;

@end
