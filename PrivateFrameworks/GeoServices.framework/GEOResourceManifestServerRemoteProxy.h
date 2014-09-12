/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOResourceManifestConfiguration, NSString, NSHashTable, NSLock, <GEOResourceManifestServerProxyDelegate>, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    <GEOResourceManifestServerProxyDelegate> *_delegate;
    NSObject<OS_xpc_object> *_conn;
    NSLock *_connLock;
    NSHashTable *_cancellingConnections;
    NSLock *_cancellingConnectionsLock;
    unsigned long long _retryCount;
    bool_isUpdatingManifest;
    bool_isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    NSLock *_authTokenLock;
    NSString *_authToken;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <GEOResourceManifestServerProxyDelegate> * delegate;


- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (void)_setupConnection;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (void)forceUpdate:(id)arg1;
- (void)updateIfNecessary:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;
- (id)serverQueue;
- (void)closeConnection;
- (void)openConnection;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (id)authToken;
- (void)setDelegate:(id)arg1;
- (id)configuration;
- (id)delegate;
- (void)dealloc;

@end
