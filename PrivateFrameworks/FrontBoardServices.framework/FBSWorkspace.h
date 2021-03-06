/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSString, NSArray, NSMutableDictionary, <FBSWorkspaceDelegate>, FBSSerialQueue, NSObject<OS_dispatch_queue>, FBSWorkspaceClient;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    <FBSWorkspaceDelegate> *_delegate;
    FBSWorkspaceClient *_client;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSMutableDictionary *_scenesByIdentifier;
}

@property <FBSWorkspaceDelegate> * delegate;
@property(retain,readonly) FBSSerialQueue * queue;
@property(copy,readonly) NSArray * scenes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)queue;
- (id)_client;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(id)arg2;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(id)arg2;
- (void)enumerateScenesWithBlock:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)_sceneWithIdentifier:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (id)_internalQueue;
- (bool)isUIApplicationWorkspace;
- (Class)_clientClass;
- (void)client:(id)arg1 handleActions:(id)arg2;
- (void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(id)arg3;
- (void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(id)arg3;
- (void)clientEndTransaction:(id)arg1;
- (void)clientBeginTransaction:(id)arg1;
- (void)clientSystemApplicationTerminated:(id)arg1;
- (void)_performDelegateCallOut:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)scenes;

@end
