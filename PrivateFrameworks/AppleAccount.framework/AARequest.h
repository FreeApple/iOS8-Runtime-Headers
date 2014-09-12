/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSHTTPURLResponse, NSMutableData, NSError, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {
    NSString *_initialURLString;
    bool_flushCache;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSMutableData *_responseData;
    NSHTTPURLResponse *_response;
    NSError *_error;
}

@property(readonly) NSURLRequest * urlRequest;
@property bool flushCache;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (Class)responseClass;
+ (id)protocolVersion;

- (bool)flushCache;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)urlCredential;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)_urlSession;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)performRequestWithHandler:(id)arg1;
- (void)setFlushCache:(bool)arg1;
- (id)urlString;
- (id)urlRequest;
- (id)bodyDictionary;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;

@end
