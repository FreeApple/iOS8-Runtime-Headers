/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject  {
    GEOMapRequestManager *_requestManager;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    bool_isFinished;
}

@property(copy) id completionHandler;
@property(readonly) bool isFinished;


- (id)initWithManager:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (bool)isFinished;
- (void)complete;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;

@end
