/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCConnection, NSObject<OS_dispatch_queue>, NSDictionary;

@interface SSErrorHandlerSession : NSObject  {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_properties;
    long long _sessionID;
}


- (void)retry;
- (void)redirectToURL:(id)arg1;
- (void)performDefaultHandling;
- (void)_setErrorProperties:(id)arg1;
- (void)_setSessionID:(long long)arg1;
- (void)_setControlConnection:(id)arg1;
- (id)init;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;

@end
