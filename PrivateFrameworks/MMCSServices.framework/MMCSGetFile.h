/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MMCSGetFile : MMCSSimpleFile  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateBlock;

}

@property(copy) id completionBlock;
@property(copy) id progressUpdateBlock;


- (id)progressUpdateBlock;
- (void)setProgressUpdateBlock:(id)arg1;
- (void)dealloc;
- (void)setProgress:(double)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;

@end
