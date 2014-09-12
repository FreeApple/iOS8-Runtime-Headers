/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURLResponse, ISDataProvider, SSURLRequestProperties, ISURLRequestPerformance, <ISURLOperationDelegate>, NSCountedSet, SSAuthenticationContext, SSMutableURLRequestProperties, NSMutableData, NSURLRequest, NSURLConnection;

@interface ISURLOperation : ISOperation  {
    NSURLRequest *_activeURLRequest;
    SSAuthenticationContext *_authenticationContext;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    long long _networkRetryCount;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    bool_shouldSetCookies;
    bool_usesPrivateCookieStore;
    ISURLRequestPerformance *_performanceMetrics;
    bool_loadsHTTPFailures;
    bool_uploadProgressRequested;
}

@property <ISURLOperationDelegate> * delegate;
@property(retain) ISDataProvider * dataProvider;
@property(retain) SSAuthenticationContext * authenticationContext;
@property(copy) SSURLRequestProperties * requestProperties;
@property(retain) NSURLResponse * response;
@property(readonly) ISURLRequestPerformance * performanceMetrics;
@property bool tracksPerformanceMetrics;
@property(getter=isUploadProgressRequested) bool uploadProgressRequested;
@property(getter=_loadsHTTPFailures,setter=_setLoadsHTTPFailures:) bool _loadsHTTPFailures;
@property(getter=_shouldSetCookies,setter=_setShouldSetCookies:) bool _shouldSetCookies;
@property(getter=_usesPrivateCookieStore,setter=_setUsesPrivateCookieStore:) bool _usesPrivateCookieStore;

+ (bool)isSharedCacheStorageSession:(struct __CFURLStorageSession { }*)arg1;
+ (struct _CFURLCache { }*)sharedCFURLCache;
+ (id)copyUserAgent;
+ (struct __CFURLStorageSession { }*)newSharedCacheStorageSession;

- (id)performanceMetrics;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)_stopIfCancelled;
- (void)setUploadProgressRequested:(bool)arg1;
- (void)_setUsesPrivateCookieStore:(bool)arg1;
- (void)_setShouldSetCookies:(bool)arg1;
- (void)_setLoadsHTTPFailures:(bool)arg1;
- (bool)tracksPerformanceMetrics;
- (void)setTracksPerformanceMetrics:(bool)arg1;
- (void)setRequestProperties:(id)arg1;
- (bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString { }*)arg1;
- (bool)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(struct __CFString { }*)arg2;
- (void)_logRequest:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (bool)_validateContentLength:(long long)arg1 error:(id*)arg2;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (bool)_loadsHTTPFailures;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)_retry;
- (bool)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (void)_handleFinishedLoading;
- (bool)_isTrustExtendedValidation:(struct __SecTrust { }*)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (bool)_shouldSetCookies;
- (bool)_shouldFollowRedirectWithRequest:(id)arg1 error:(id*)arg2;
- (id)_sanitizedStringForString:(id)arg1;
- (bool)isUploadProgressRequested;
- (void)_handleReceivedResponse:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (void)_stopConnection;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_copyAcceptLanguageString;
- (id)_accountIdentifier;
- (bool)_usesPrivateCookieStore;
- (void)_setActiveURLRequest:(id)arg1;
- (id)newRequestWithURL:(id)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_requestProperties;
- (id)_sanitizedURLForURL:(id)arg1;
- (id)_activeURL;
- (id)_copyAuthenticationContext;
- (id)requestProperties;
- (void)setRequest:(id)arg1;
- (void)_updateProgress;
- (void)run;
- (id)init;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)request;
- (void)setResponse:(id)arg1;
- (id)response;
- (void)dealloc;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void)_run;

@end
