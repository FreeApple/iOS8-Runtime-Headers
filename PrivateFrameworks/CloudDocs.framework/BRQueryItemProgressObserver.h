/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRQueryItem, NSObject<OS_dispatch_queue>, NSProgress;

@interface BRQueryItemProgressObserver : NSObject  {
    BRQueryItem *_item;
    NSObject<OS_dispatch_queue> *_queue;
    id _subscriber;
    NSProgress *_progress;
    bool_stopped;
    bool_isUpload;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressHandler;

}

@property NSObject<OS_dispatch_queue> * queue;
@property(copy) id progressHandler;
@property(readonly) BRQueryItem * item;


- (void)stop;
- (void)setProgressHandler:(id)arg1;
- (id)progressHandler;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)start;
- (void)dealloc;
- (id)description;
- (id)item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)initWithItem:(id)arg1;

@end
