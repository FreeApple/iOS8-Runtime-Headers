/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDate, NSString, NSArray, SSMetricsPageEvent, NSDictionary, NSMutableArray, SSMetricsConfiguration;

@interface SSLookupResponse : NSObject <SSXPCCoding> {
    NSDate *_expirationDate;
    NSMutableArray *_itemOrder;
    SSMetricsPageEvent *_metricsPageEvent;
    NSDictionary *_response;
}

@property(readonly) bool mpIsPersonalizedOffer;
@property(copy) NSDate * expirationDate;
@property(readonly) NSArray * allItems;
@property(readonly) SSMetricsConfiguration * metricsConfiguration;
@property(retain) SSMetricsPageEvent * metricsPageEvent;
@property(readonly) NSDictionary * responseDictionary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)mpFakeCompletionDataForBuys;
+ (id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)arg1;
+ (bool)mpVerboseCMCLogging;
+ (bool)mpShowBuysWithNoCompletionOffer;

- (id)itemForKey:(id)arg1;
- (id)metricsConfiguration;
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;
- (void)_enumerateItemsWithBlock:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (id)initWithLocationResponseDictionary:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (void)_setMetricsPageEvent:(id)arg1;
- (id)expirationDate;
- (id)metricsPageEvent;
- (id)responseDictionary;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)allItems;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (bool)mpIsPersonalizedOffer;
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)arg1;
- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;

@end
