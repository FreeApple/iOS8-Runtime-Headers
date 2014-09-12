/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class <SLFacebookRemoteSessionProtocol>;

@interface SLFacebookSession : NSObject  {
    <SLFacebookRemoteSessionProtocol> *_remoteSession;
}

+ (id)sharedSession;
+ (id)_remoteInterface;

- (bool)uploadProfilePicture:(id)arg1 error:(id*)arg2;
- (void)revokeAllAccessTokensForDevice;
- (bool)uploadPost:(id)arg1;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id*)arg1;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)uploadsInProgress:(id)arg1;
- (void)uploadPost:(id)arg1 suppressAlerts:(bool)arg2 withPostCompletion:(id)arg3;
- (void)injectCompletedUploadWithCompletion:(id)arg1;
- (bool)uploadPost:(id)arg1 forPID:(int)arg2;
- (void)unlikeURL:(id)arg1 completion:(id)arg2;
- (void)likeURL:(id)arg1 completion:(id)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(id)arg3;
- (id)init;
- (void).cxx_destruct;

@end
