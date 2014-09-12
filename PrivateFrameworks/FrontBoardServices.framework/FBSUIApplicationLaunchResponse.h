/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMachSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse  {
    bool_supportsTaskSuspension;
    bool_supportsTaskSuspensionOnLock;
    BSMachSendRight *_taskPort;
}

@property bool supportsTaskSuspension;
@property bool supportsTaskSuspensionOnLock;
@property(retain) BSMachSendRight * taskPort;


- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setTaskPort:(id)arg1;
- (id)taskPort;
- (bool)supportsTaskSuspensionOnLock;
- (bool)supportsTaskSuspension;
- (void)setSupportsTaskSuspensionOnLock:(bool)arg1;
- (void)setSupportsTaskSuspension:(bool)arg1;
- (void)dealloc;

@end
