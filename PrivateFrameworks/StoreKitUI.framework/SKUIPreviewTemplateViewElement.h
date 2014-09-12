/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUILockupViewElement;

@interface SKUIPreviewTemplateViewElement : SKUIViewElement  {
    long long _itemIdentifier;
    NSString *_previewURLString;
}

@property(readonly) long long itemIdentifier;
@property(readonly) SKUILockupViewElement * previewLockup;
@property(readonly) NSString * previewURLString;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)previewLockup;
- (id)previewURLString;
- (long long)itemIdentifier;
- (void).cxx_destruct;

@end
