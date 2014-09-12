/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray, MFStream, NSCondition, NSInvocation, NSData;

@interface _MFSocket : NSObject  {
    NSCondition *_condition;
    MFStream *_stream;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSArray *_clientCertificates;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    bool_allowsTrustPrompt;
    bool_usesOpportunisticSockets;
    bool_socketCanRead;
    bool_socketCanWrite;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
}

@property int timeout;
@property bool allowsTrustPrompt;
@property bool usesOpportunisticSockets;
@property(retain) NSArray * clientCertificates;
@property(copy) NSString * sourceApplicationBundleIdentifier;
@property(copy) NSString * accountIdentifier;
@property(readonly) NSArray * serverCertificates;
@property(readonly) NSString * remoteHostname;
@property(readonly) unsigned int remotePortNumber;
@property(readonly) NSData * sourceIPAddress;
@property(readonly) bool isReadable;
@property(readonly) bool isWritable;
@property(readonly) bool isCellularConnection;
@property(readonly) bool isValid;


- (void)setUsesOpportunisticSockets:(bool)arg1;
- (bool)usesOpportunisticSockets;
- (bool)isCellularConnection;
- (unsigned int)remotePortNumber;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (id)serverCertificates;
- (unsigned int)_bufferedByteCount;
- (bool)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(bool)arg2 errorPtr:(id*)arg3;
- (id)sourceIPAddress;
- (bool)isWritable;
- (id)remoteHostname;
- (bool)setSecurityProtocol:(id)arg1;
- (id)securityProtocol;
- (void)enableThroughputMonitoring:(bool)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (bool)allowsTrustPrompt;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setClientCertificates:(id)arg1;
- (id)clientCertificates;
- (bool)isReadable;
- (int)timeout;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setEventHandler:(id)arg1;
- (id)init;
- (bool)isValid;
- (id)sourceApplicationBundleIdentifier;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)dealloc;
- (void)setTimeout:(int)arg1;
- (void)abort;

@end
