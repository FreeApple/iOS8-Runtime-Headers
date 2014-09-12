/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSXPCInterface, NSMutableArray, NSXPCConnection;

@interface TransactionManager : CHSynchronizedLoggable  {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;

- (void)appendTransactions_sync:(id)arg1;
- (void)sendHello_sync;
- (void)setupConnectionHandlers_sync;
- (void)createXpcConnection_sync;
- (void)createXpcConnection;
- (void)appendTransactions:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
