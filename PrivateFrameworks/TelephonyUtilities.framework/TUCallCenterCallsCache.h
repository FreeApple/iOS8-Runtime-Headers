/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSMutableSet, NSMapTable, NSObject<OS_dispatch_semaphore>;

@interface TUCallCenterCallsCache : NSObject  {
    NSMapTable *_callRefToTelephonyCall;
    NSObject<OS_dispatch_semaphore> *_callRefToTelephonyCallSemaphore;
    NSMapTable *_chatGUIDToFaceTimeCall;
    NSObject<OS_dispatch_semaphore> *_chatGUIDToFaceTimeCallSemaphore;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToProxyCallSemaphore;
    NSMutableSet *_currentCallSet;
}

@property(retain) NSMapTable * callRefToTelephonyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * callRefToTelephonyCallSemaphore;
@property(retain) NSMapTable * chatGUIDToFaceTimeCall;
@property(retain) NSObject<OS_dispatch_semaphore> * chatGUIDToFaceTimeCallSemaphore;
@property(retain) NSMapTable * uniqueProxyIdentifierToProxyCall;
@property(retain) NSObject<OS_dispatch_semaphore> * uniqueProxyIdentifierToProxyCallSemaphore;
@property(retain) NSMutableSet * currentCallSet;


- (void)setUniqueProxyIdentifierToProxyCallSemaphore:(id)arg1;
- (void)setChatGUIDToFaceTimeCallSemaphore:(id)arg1;
- (void)setCallRefToTelephonyCallSemaphore:(id)arg1;
- (id)proxyCallForProxyCall:(id)arg1;
- (id)callForChat:(id)arg1;
- (void)stopTrackingCall:(id)arg1;
- (id)uniqueProxyIdentifierToProxyCall;
- (id)uniqueProxyIdentifierToProxyCallSemaphore;
- (id)chatGUIDToFaceTimeCall;
- (id)chatGUIDToFaceTimeCallSemaphore;
- (id)callForChat:(id)arg1 shouldSkipLoadingCallState:(bool)arg2;
- (void)_updateCallWithPersistentValues:(id)arg1;
- (id)callRefToTelephonyCall;
- (id)callRefToTelephonyCallSemaphore;
- (id)callForCTCall:(struct __CTCall { }*)arg1 shouldSkipLoadingCallState:(bool)arg2;
- (id)currentCallSet;
- (void)setCurrentCallSet:(id)arg1;
- (void)setUniqueProxyIdentifierToProxyCall:(id)arg1;
- (void)setChatGUIDToFaceTimeCall:(id)arg1;
- (void)setCallRefToTelephonyCall:(id)arg1;
- (id)callForCTCall:(struct __CTCall { }*)arg1;
- (id)init;
- (void)dealloc;

@end
