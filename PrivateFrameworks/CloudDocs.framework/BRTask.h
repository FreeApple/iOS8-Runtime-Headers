/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSArray, NSString;

@interface BRTask : NSObject  {
    NSArray *_argv;
    NSString *_redirectStdoutToFileAtPath;
    int _redirectStdoutToFileDescriptor;
    NSString *_redirectStderrToFileAtPath;
    int _redirectStderrToFileDescriptor;
    int _waitStatus;
}

@property(retain) NSArray * argv;
@property(retain) NSString * redirectStdoutToFileAtPath;
@property int redirectStdoutToFileDescriptor;
@property(retain) NSString * redirectStderrToFileAtPath;
@property int redirectStderrToFileDescriptor;
@property(readonly) int waitStatus;

+ (id)sanitizeStringForFilename:(id)arg1;
+ (id)taskWithCommand:(id)arg1;
+ (id)taskWithCommandWithArguments:(id)arg1;

- (int)waitStatus;
- (void)resetRedirect;
- (int)exec;
- (void)setRedirectStderrToFileDescriptor:(int)arg1;
- (void)setRedirectStderrToFileAtPath:(id)arg1;
- (void)setRedirectStdoutToFileDescriptor:(int)arg1;
- (void)setRedirectStdoutToFileAtPath:(id)arg1;
- (int)redirectStderrToFileDescriptor;
- (int)redirectStdoutToFileDescriptor;
- (id)redirectStderrToFileAtPath;
- (id)redirectStdoutToFileAtPath;
- (id)argv;
- (void)setArgv:(id)arg1;
- (void)setCommandWithArguments:(id)arg1;
- (void)setCommand:(id)arg1;
- (id)init;
- (void)dealloc;

@end
