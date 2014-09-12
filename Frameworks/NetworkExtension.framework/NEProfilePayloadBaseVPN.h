/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase  {
    bool_userNameRequired;
    bool_passwordRequired;
    bool_proxyUserNameRequired;
    bool_proxyPasswordRequired;
    bool_sharedSecretRequired;
    bool_pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

@property bool userNameRequired;
@property bool passwordRequired;
@property bool proxyUserNameRequired;
@property bool proxyPasswordRequired;
@property bool sharedSecretRequired;
@property bool pinRequired;
@property(copy) NSString * userName;
@property(copy) NSString * password;
@property(copy) NSString * proxyUserName;
@property(copy) NSString * proxyPassword;
@property(copy) NSString * sharedSecret;
@property(copy) NSString * pin;


- (void)setPin:(id)arg1;
- (void)setSharedSecret:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyUserName:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setPinRequired:(bool)arg1;
- (bool)pinRequired;
- (void)setSharedSecretRequired:(bool)arg1;
- (bool)sharedSecretRequired;
- (void)setProxyPasswordRequired:(bool)arg1;
- (bool)proxyPasswordRequired;
- (void)setProxyUserNameRequired:(bool)arg1;
- (bool)proxyUserNameRequired;
- (void)setPasswordRequired:(bool)arg1;
- (bool)passwordRequired;
- (void)setUserNameRequired:(bool)arg1;
- (bool)userNameRequired;
- (void)extractPayloadContents:(id)arg1;
- (void)extractPayloadContentsPIN:(id)arg1;
- (void)extractPayloadContentsSharedSecret:(id)arg1;
- (void)extractPayloadContentsUserNamePassword:(id)arg1;
- (void)extractPayloadContentsHTTPProxy:(id)arg1;
- (id)pin;
- (id)sharedSecret;
- (id)proxyUserName;
- (bool)setPostprocessedPayloadContents:(id)arg1;
- (id)getPreprocessedPayloadContents;
- (id)validatePayload;
- (id)proxyPassword;
- (void)setPassword:(id)arg1;
- (id)password;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)userName;
- (id)initWithPayload:(id)arg1;

@end
