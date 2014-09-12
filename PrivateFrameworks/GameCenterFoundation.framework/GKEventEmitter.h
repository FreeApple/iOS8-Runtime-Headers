/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableArray, NSHashTable;

@interface GKEventEmitter : NSObject  {
    NSHashTable *_listeners;
    NSMutableArray *_supportedProtocols;
    bool_shouldQueue;
    NSMutableArray *_queuedEvents;
}

@property(retain) NSHashTable * listeners;
@property(retain) NSMutableArray * supportedProtocols;
@property bool shouldQueue;
@property(retain) NSMutableArray * queuedEvents;

+ (id)eventEmitterForProtocols:(id)arg1;
+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(bool)arg2;

- (id)listeners;
- (id)queuedEvents;
- (void)setShouldQueue:(bool)arg1;
- (bool)shouldQueue;
- (id)supportedProtocols;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (void)setQueuedEvents:(id)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (void)setListeners:(id)arg1;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(bool)arg2;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (bool)listenerRegisteredForSelector:(SEL)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
