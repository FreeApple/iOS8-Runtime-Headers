/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@class NSDate;

@interface _NCWidgetControllerRequestLimiter : NSObject  {
    NSDate *_lastRequestDate;
    bool_isThrottled;
    long long _requestCount;
}

+ (id)sharedInstance;

- (bool)isRequestPermitted;
- (void)dealloc;

@end
