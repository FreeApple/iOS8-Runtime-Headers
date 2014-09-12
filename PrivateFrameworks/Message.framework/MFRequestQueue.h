/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSConditionLock;

@interface MFRequestQueue : NSObject  {
    NSConditionLock *_condition;
    NSMutableArray *_requests;
    NSMutableArray *_consumers;
    unsigned int _waitingOutside;
    unsigned int _waitingInside;
}


- (void)addRequest:(id)arg1 consumer:(id)arg2;
- (void)processRequest:(id)arg1 consumer:(id)arg2;
- (void)_processRequests:(id)arg1 consumers:(id)arg2;
- (void)willAddRequests:(id)arg1 consumers:(id)arg2;
- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (void)addRequests:(id)arg1 consumers:(id)arg2;
- (id)init;
- (void)dealloc;

@end
