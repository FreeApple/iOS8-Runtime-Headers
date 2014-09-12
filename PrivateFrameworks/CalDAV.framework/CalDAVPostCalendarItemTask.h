/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, <CalDAVPostCalendarItemTaskDelegate>;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask  {
    NSString *_previousScheduleTag;
}

@property <CalDAVPostCalendarItemTaskDelegate> * delegate;
@property(retain) NSString * previousScheduleTag;


- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;
- (id)additionalHeaderValues;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)dealloc;
- (id)description;

@end
