/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MFLANContinuationContext;

@interface MFLANContinuationAgent : NSObject  {
    bool_serverRunning;
    struct __CFSocket { } *_socket;
    struct __CFRunLoopSource { } *_serverRunLoopSource;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectCallbackBlock;

    MFLANContinuationContext *_continuationContext;
}

@property(readonly) bool serverRunning;
@property(readonly) MFLANContinuationContext * continuationContext;


- (bool)serverRunning;
- (void)connectToServerWithContext:(id)arg1 completion:(id)arg2;
- (void)_socketListenerRunLoop;
- (id)_getDeviceHostname;
- (void)_cleanupSocket;
- (void)_cleanupRunLoopSource;
- (id)continuationContext;
- (id)startServerWithCompletion:(id)arg1;
- (void)stopServer;
- (id)init;
- (void)dealloc;

@end
