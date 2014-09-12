/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountID;
    id _contentIdentifier;
    long long _options;
}

@property(readonly) NSNumber * accountID;
@property(copy) id contentIdentifier;
@property long long keybagOptions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)contentIdentifier;
- (void)setKeybagOptions:(long long)arg1;
- (long long)keybagOptions;
- (void)setContentIdentifier:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)accountID;
- (id)accountIdentifier;
- (void)dealloc;

@end
