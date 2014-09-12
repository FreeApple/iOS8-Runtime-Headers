/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSObject<OS_dispatch_queue>;

@interface GKAsyncSocket : NSObject  {
}

@property NSObject<OS_dispatch_queue> * targetQueue;
@property(copy) id receiveDataHandler;
@property(copy) id connectedHandler;
@property(retain) id socketName;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setSyncQueue:(id)arg1;
- (id)targetQueue;
- (id)connectedHandler;
- (id)receiveDataHandler;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (id)socketName;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;
- (void)setTargetQueue:(id)arg1;
- (void)setSocketName:(id)arg1;
- (void)setConnectedHandler:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setReceiveDataHandler:(id)arg1;
- (id)syncQueue;
- (void)invalidate;

@end
