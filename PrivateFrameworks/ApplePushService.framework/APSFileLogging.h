/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSFileLogging : NSObject  {
}

+ (id)getMainBundleId;
+ (id)timeFormatter;
+ (id)dateFormatter;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(bool)arg4 format:(id)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4;
+ (bool)loggingEnabledForLevel:(int)arg1;
+ (id)logFileDirectory;
+ (void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(bool)arg4 format:(id)arg5 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg6;
+ (void)initialize;


@end
