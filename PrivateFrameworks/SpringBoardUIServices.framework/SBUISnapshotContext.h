/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UIScreen, NSString;

@interface SBUISnapshotContext : NSObject <BSXPCCoding> {
    UIScreen *_screen;
    bool_excludesNotificationCenter;
}

@property(retain) UIScreen * screen;
@property bool excludesNotificationCenter;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)snapshotContextForScreen:(id)arg1;

- (bool)excludesNotificationCenter;
- (void)setExcludesNotificationCenter:(bool)arg1;
- (id)initWithScreen:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)screen;
- (void)dealloc;
- (void)setScreen:(id)arg1;

@end
