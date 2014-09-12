/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, SSMutableAuthenticationContext, SSAuthenticationContext, NSNumber;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property(readonly) SSAuthenticationContext * authenticationContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)_setAuthenticatedDSID:(id)arg1;
- (void)_handleAuthenticateResponse:(id)arg1;
- (id)_authenticatedDSID;
- (id)authenticatedAccountDSID;
- (id)uniqueKey;
- (void)run;
- (void)dealloc;

@end
