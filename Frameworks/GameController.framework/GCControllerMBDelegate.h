/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSTimer;

@interface GCControllerMBDelegate : NSObject  {
    struct BTSessionImpl { } *_session;
    struct BTPairingAgentImpl { } *_pairingAgent;
    NSTimer *_timer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(copy) id completionHandler;


- (void)scanTimeout:(id)arg1;
- (void)startScan;
- (void)fireCompletionHandler;
- (void)stopScan;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;

@end
