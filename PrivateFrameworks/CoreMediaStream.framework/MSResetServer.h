/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
    NSString *_personID;
    MSResetServerProtocol *_protocol;
    MSMediaStreamDaemon *_daemon;
    id _selfReference;
}

@property(readonly) NSString * personID;
@property MSMediaStreamDaemon * daemon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2;

- (void)resetServer;
- (void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)setDaemon:(id)arg1;
- (id)personID;
- (id)daemon;
- (void).cxx_destruct;

@end
