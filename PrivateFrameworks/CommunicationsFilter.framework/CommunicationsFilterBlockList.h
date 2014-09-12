/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@class CommunicationsFilterBlockListCache, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface CommunicationsFilterBlockList : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;

- (bool)_disconnect;
- (bool)_connect;
- (void)_disconnected;
- (bool)isItemInList:(id)arg1;
- (id)copyAllItems;
- (void)removeItemForAllServices:(id)arg1;
- (void)addItemForAllServices:(id)arg1;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(id)arg2;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (id)init;
- (void)dealloc;

@end
