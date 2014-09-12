/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, SSVPlatformContext, NSObject<OS_dispatch_queue>, NSArray, NSNumber;

@interface SSVPlatformRequestOperation : NSOperation  {
    NSMutableDictionary *_additionalParameters;
    NSString *_caller;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    long long _personalizationStyle;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

    NSString *_storeFrontSuffix;
    NSNumber *_timeoutInterval;
    NSString *_userAgent;
}

@property(copy) NSArray * itemIdentifiers;
@property(copy) NSString * imageProfile;
@property(copy) NSString * keyProfile;
@property long long personalizationStyle;
@property(copy) NSString * storeFrontSuffix;
@property(copy) NSNumber * timeoutInterval;
@property(copy) id responseBlock;


- (void)setItemIdentifiers:(id)arg1;
- (id)_URLBagContext;
- (void)setImageProfile:(id)arg1;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (void)_setUserAgent:(id)arg1;
- (void)_setCaller:(id)arg1;
- (void)_enumerateQueryParametersUsingBlock:(id)arg1;
- (id)imageProfile;
- (id)itemIdentifiers;
- (id)_callerValue;
- (void)_makeLookupRequestWithPersonalizationStyle:(long long)arg1;
- (id)initWithPlatformContext:(id)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (long long)personalizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)_lookupWithRequest:(id)arg1 error:(id*)arg2;
- (void)setStoreFrontSuffix:(id)arg1;
- (id)storeFrontSuffix;
- (void)setResponseBlock:(id)arg1;
- (id)responseBlock;
- (void)main;
- (id)init;
- (void)setTimeoutInterval:(id)arg1;
- (id)timeoutInterval;
- (void).cxx_destruct;

@end
