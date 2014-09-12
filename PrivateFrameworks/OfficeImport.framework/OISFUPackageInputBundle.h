/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFUPackageInputBundle : NSObject <SFUInputBundle> {
    NSString *_rootPath;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_existingPathForEntryName:(id)arg1 isGz:(bool*)arg2;
- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (bool)hasEntryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
