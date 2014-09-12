/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
    NSString *_personID;
    NSString *_manifestPath;
    NSMutableDictionary *_userManifest;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    bool_hasDeactivated;
}

@property(retain) NSMutableDictionary * _userManifest;
@property(readonly) NSString * personID;
@property bool hasDeactivated;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)set_userManifest:(id)arg1;
- (void)setHasDeactivated:(bool)arg1;
- (void)_commitUserManifest;
- (id)_userManifest;
- (void)_forget;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;
- (void)_abort;
- (void)_resetMMCSBackoffTimer;
- (void)_backoffMMCSBackoffTimer;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (void)_resetStreamsBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (bool)hasDeactivated;
- (void)_updateMasterManifest;
- (id)_latestNextActivityDate;
- (id)initWithPersonID:(id)arg1;
- (void)forget;
- (id)personID;
- (void)deactivate;
- (void)dealloc;
- (void).cxx_destruct;

@end
