/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, CADisplayLink;

@interface SCNDisplayLink : NSObject  {
    id _reserved;
    CADisplayLink *_caDisplayLink;
    id _owner;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSObject<OS_dispatch_queue> *_queue;
    bool_paused;
    bool_invalidated;
    bool_asynchronous;
    long long _frameInterval;
    double _lastVideoOutput;
    int _queuedFrameCount;
}

@property(getter=isPaused) bool paused;
@property long long frameInterval;


- (int)queuedFrameCount;
- (void)setPaused:(bool)arg1 nextFrameTimeHint:(double)arg2;
- (void)willDie;
- (id)initWithOwner:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (void)_callbackWithTime:(double)arg1 andDeltaTime:(double)arg2;
- (bool)_isInvalidated;
- (void)_caDisplayLinkCallback;
- (void)_pause;
- (void)_teardown;
- (void)setPaused:(bool)arg1;
- (bool)isPaused;
- (long long)frameInterval;
- (id)init;
- (void)_resume;
- (void)invalidate;
- (void)dealloc;
- (void)setFrameInterval:(long long)arg1;

@end
