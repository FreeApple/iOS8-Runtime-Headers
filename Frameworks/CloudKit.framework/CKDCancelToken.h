/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CKDCancelToken : NSObject <CKDCancelling> {
    bool_isCancelled;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancelAction;

}

@property(copy) id cancelAction;


- (bool)isCancelled;
- (void)cancel;
- (void).cxx_destruct;
- (id)cancelAction;
- (void)setCancelAction:(id)arg1;

@end
