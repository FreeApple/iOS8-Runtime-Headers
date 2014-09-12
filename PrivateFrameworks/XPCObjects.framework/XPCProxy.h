/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class Protocol, NSArray, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, <XPCProxyTarget>;

@interface XPCProxy : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    <XPCProxyTarget> *_target;
    Class _remoteClass;
    Protocol *_remoteProtocol;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

    bool_invalidated;
    bool_useTraditionalEncoder;
    NSArray *_whitelistedClassNames;
}

@property Protocol * remoteProtocol;
@property(copy) id errorHandler;
@property(readonly) NSObject<OS_xpc_object> * connection;
@property bool useTraditionalEncoder;
@property <XPCProxyTarget> * target;
@property Class remoteClass;

+ (void)initialize;

- (void)setUseTraditionalEncoder:(bool)arg1;
- (bool)useTraditionalEncoder;
- (void)setRemoteProtocol:(id)arg1;
- (void)setRemoteClass:(Class)arg1;
- (void)restrictDecodingToWhitelistedClassNames:(id)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3;
- (id)_newXpcEncodingForObject:(id)arg1;
- (id)_objectForXpcEncoding:(id)arg1;
- (id)_newXpcArgumentForInvocationArgumentAt:(void*)arg1 ofType:(const char *)arg2;
- (void)_getInvocationArgument:(void*)arg1 argumentType:(const char *)arg2 class:(Class*)arg3 forXpcArgument:(id)arg4 message:(id)arg5;
- (SEL)_selectorForMessage:(id)arg1;
- (id)_newMessageAndReplyHandler:(id*)arg1 forInvocation:(id)arg2;
- (Class)remoteClass;
- (id)remoteProtocol;
- (id)_proxyDescription;
- (id)_invocationForMessage:(id)arg1;
- (id)_errorForXpcError:(id)arg1;
- (id)connection;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)invalidate;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)target;
- (id)errorHandler;
- (void)setErrorHandler:(id)arg1;

@end
