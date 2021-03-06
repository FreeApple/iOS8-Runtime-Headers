/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class <BSXPCConnectionListenerHandler>, NSString, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface BSXPCConnectionListener : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    <BSXPCConnectionListenerHandler> *_handler;
    NSString *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain,readonly) <BSXPCConnectionListenerHandler> * handler;
@property(copy,readonly) NSString * service;
@property(readonly) NSObject<OS_dispatch_queue> * queue;


- (id)service;
- (id)handler;
- (id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4;
- (id)queue;
- (void)invalidate;
- (void)dealloc;
- (id)description;

@end
