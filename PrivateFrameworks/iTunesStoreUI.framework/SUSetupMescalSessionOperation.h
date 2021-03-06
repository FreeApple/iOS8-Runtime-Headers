/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation  {
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}

@property(readonly) SUMescalSession * mescalSession;


- (id)_setupSAPWithData:(id)arg1 error:(id*)arg2;
- (id)_setupSAPCertificate:(id*)arg1;
- (bool)_isMescalEnabled;
- (id)mescalSession;
- (id)initWithURLRequestProperties:(id)arg1;
- (void)run;
- (void)dealloc;

@end
