/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSXPCListener, Protocol, NSString, NSXPCInterface, NSArray;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCInterface *_clientInterface;
    NSXPCListener *_listener;
    NSString *_persistentStoreName;
    NSString *_managedObjectModelPath;
    NSArray *_allowedEntitlements;
    NSString *_serviceName;
}

@property(retain) NSString * serviceName;
@property(retain) NSXPCInterface * clientInterface;
@property(retain) NSString * persistentStoreName;
@property(retain) NSString * managedObjectModelPath;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setClientInterface:(id)arg1;
- (void)setManagedObjectModelPath:(id)arg1;
- (id)managedObjectModelPath;
- (void)setPersistentStoreName:(id)arg1;
- (void)beginAcceptingConnections;
- (void)restrictToClientsWithEntitlements:(id)arg1;
- (id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2;
- (bool)_verifyAuthorizationForConnection:(id)arg1;
- (void)setServiceName:(id)arg1;
- (id)clientInterface;
- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serviceName;
- (id)persistentStoreName;

@end
