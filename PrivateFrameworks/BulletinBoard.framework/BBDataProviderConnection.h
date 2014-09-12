/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, NSMutableDictionary, BBDataProviderConnectionResolver, NSObject<OS_dispatch_queue>, <BBDataProviderConnectionServerProxy>;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate> {
    NSString *_serviceName;
    NSString *_bundleID;
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    <BBDataProviderConnectionServerProxy> *_serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    bool_connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;

- (void)ping:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (id)addDataProvider:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (void)_invalidate;
- (id)bundleID;
- (void)dealloc;
- (id)serviceName;

@end
