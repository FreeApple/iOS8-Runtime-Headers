/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class <MSSearchDelegate>, NSString, MSXPCConnection;

@interface MSSearch : NSObject <MSDSearchResultsProtocol> {
    MSXPCConnection *_connection;
    <MSSearchDelegate> *_delegate;
}

@property <MSSearchDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)setUnitTestingResultsArray:(id)arg1;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(bool)arg3 onServer:(bool)arg4 onlyInboxes:(bool)arg5 delegate:(id)arg6;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(bool)arg3 onServer:(bool)arg4 delegate:(id)arg5;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4;

- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3;
- (bool)_unitTestsAreEnabled;
- (id)_remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)_delegateDidFindResults:(id)arg1;
- (void)_delegateDidFinishWithError:(id)arg1;
- (void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithDelegate:(id)arg1;
- (void)foundResults:(id)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)cancel;
- (void)dealloc;

@end
