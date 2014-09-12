/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, CoreDAVPropFindTask, NSURL, NSString;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate> {
    int _state;
    NSSet *_aceItems;
    NSURL *_url;
    CoreDAVPropFindTask *_fetchTask;
}

@property int state;
@property(retain) NSSet * aceItems;
@property(retain) NSURL * url;
@property(retain) CoreDAVPropFindTask * fetchTask;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;
- (void)setAceItems:(id)arg1;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;
- (id)aceItems;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startGetACL;
- (id)fetchTask;
- (void)setFetchTask:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;

@end
