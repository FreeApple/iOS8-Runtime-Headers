/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSSceneClientSettingsDiff;

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent  {
    FBSSceneClientSettingsDiff *_clientSettings;
}

@property(retain) FBSSceneClientSettingsDiff * clientSettingsDiff;


- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (id)clientSettingsDiff;
- (void)dealloc;

@end
