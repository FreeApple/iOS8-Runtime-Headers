/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DATrafficLogger : NSObject  {
    NSString *_filename;
}

@property(retain) NSString * filename;

+ (bool)enabled;

- (void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (void)logSnippet:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (void)_ensureCustomLogFile;
- (void).cxx_destruct;
- (void)setFilename:(id)arg1;
- (id)filename;

@end
