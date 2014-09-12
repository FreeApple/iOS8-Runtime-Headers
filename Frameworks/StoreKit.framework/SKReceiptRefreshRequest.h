/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest  {
    NSDictionary *_properties;
}

@property(readonly) NSDictionary * receiptProperties;


- (id)receiptProperties;
- (id)initWithReceiptProperties:(id)arg1;
- (bool)_wantsVPP;
- (bool)_wantsRevoked;
- (bool)_wantsExpired;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;

@end
