/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem  {
    NSMutableSet *_privileges;
}

@property(retain) NSMutableSet * privileges;

+ (id)copyParseRules;

- (void)addPrivilege:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (id)privileges;
- (void)write:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
