/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOperation, NSObject<OS_dispatch_queue>;

@interface __NSOperationQueueInternal : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    NSObject<OS_dispatch_queue> *__pending_barrier;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned int __unused2;
    unsigned char __mainQ;
    unsigned char __suspended;
    unsigned char __overcommit;
    BOOL __propertyQOS;
    NSObject<OS_dispatch_queue> *__dispatch_queue;
    BOOL __nameBuffer[160];
}


- (id)init;
- (void)finalize;
- (void)dealloc;

@end
