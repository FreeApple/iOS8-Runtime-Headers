/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class ISLoadURLBagOperation, NSString, NSDictionary, SSMetricsController, NSNumber;

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore> {
    NSNumber *_lastAccountDSID;
    SSMetricsController *_metricsController;
    int _bagOperationLock;
    NSString *_cookieURL;
    ISLoadURLBagOperation *_pendingBagOperation;
}

@property ISLoadURLBagOperation * pendingBagOperation;
@property(readonly) NSString * DSID;
@property(readonly) NSDictionary * accountInfo;
@property(readonly) NSString * userAgent;
@property(readonly) NSString * networkConnectionType;
@property(retain) NSString * storefront;
@property(retain) NSString * cookieURL;
@property(retain) id cookie;

+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (id)_URLBagContext;
+ (void)setITunesStoreHeaders:(id)arg1;

- (void)setCookieURL:(id)arg1;
- (id)cookieURL;
- (id)networkConnectionType;
- (id)DSID;
- (void)signOut;
- (void)authenticate:(id)arg1 :(id)arg2;
- (void)evaluateScripts:(id)arg1 :(id)arg2;
- (void)loadStoreContent:(id)arg1 :(id)arg2;
- (void)flushUnreportedEvents;
- (void)recordEvent:(id)arg1 :(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (void)invalidateBag;
- (id)getBag;
- (void)setPendingBagOperation:(id)arg1;
- (id)pendingBagOperation;
- (void)clearCookies;
- (void)_updateBag:(bool)arg1;
- (void)_updateWithBag:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_accountStoreChanged;
- (id)initWithAppContext:(id)arg1;
- (void)setStorefront:(id)arg1;
- (id)storefront;
- (id)accountInfo;
- (id)userAgent;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
