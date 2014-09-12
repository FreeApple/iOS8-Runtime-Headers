/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSDictionary, NSString, <SSItemLookupRequestDelegate>;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
    NSMutableDictionary *_parameters;
}

@property <SSItemLookupRequestDelegate> * delegate;
@property(copy,readonly) NSDictionary * parameters;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)copyQueryStringParameters;
- (id)valueForParameter:(id)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (void)startWithItemLookupBlock:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
- (id)_errorForStatusCode:(long long)arg1;
- (id)_convertedValueForValue:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)parameters;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (bool)start;
- (void)dealloc;

@end
