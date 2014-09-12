/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVCaptureDeviceControlRequest : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    int _requestID;
    int _errorCode;
}

@property(copy,readonly) id completionBlock;
@property(readonly) int requestID;
@property int errorCode;

+ (id)deviceControlRequestWithCompletionBlock:(id)arg1;

- (id)_initWithCompletionBlock:(id)arg1;
- (int)requestID;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (void)dealloc;
- (id)completionBlock;

@end
