/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>, <SSEventMonitorDelegate>, SSXPCConnection;

@interface SSEventMonitor : NSObject  {
    <SSEventMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

@property <SSEventMonitorDelegate> * delegate;


- (void)_connectEventConnection;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
