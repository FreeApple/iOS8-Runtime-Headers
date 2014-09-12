/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOutputStream, NSString, NSObject<OS_dispatch_queue>, NSMutableData, NSInputStream, NSMutableArray;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {
    NSString *_remoteServiceName;
    NSString *_localServiceName;
    bool_connected;
    NSMutableData *_dataReceived;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    bool_shouldSendHello;
    bool_readyToWrite;
    NSMutableData *_dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _receiveDataHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectedHandler;

    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property(copy) NSString * remoteServiceName;
@property(copy) id receiveDataHandler;
@property(copy) id connectedHandler;
@property NSObject<OS_dispatch_queue> * syncQueue;
@property NSObject<OS_dispatch_queue> * targetQueue;
@property(copy) NSString * localServiceName;
@property(retain) NSInputStream * inputStream;
@property(retain) NSOutputStream * outputStream;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)checkConstants;
+ (unsigned long long)sendDataLimit;
+ (unsigned long long)receiveDataLimit;

- (void)setSyncQueue:(id)arg1;
- (id)targetQueue;
- (void)attachInputStream:(id)arg1 outputStream:(id)arg2;
- (void)connectToNetService:(id)arg1;
- (void)syncHandleOutputStreamEvent:(unsigned long long)arg1;
- (void)syncHandleInputStreamEvent:(unsigned long long)arg1;
- (id)stringForStreamEventCode:(unsigned long long)arg1;
- (void)syncReadFromInputStream;
- (void)syncAppendDataToSend:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setupInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncSendData;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (void)syncAcceptedConnection;
- (void)syncSendAccept;
- (bool)shouldDecideAboutConnection;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (void)setRemoteServiceName:(id)arg1;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncCloseConnectionNow;
- (id)remoteServiceName;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)syncSendHello;
- (void)setLocalServiceName:(id)arg1;
- (id)connectedHandler;
- (id)initWithLocalServiceName:(id)arg1;
- (id)localServiceName;
- (id)receiveDataHandler;
- (void)setTargetQueue:(id)arg1;
- (void)setConnectedHandler:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setReceiveDataHandler:(id)arg1;
- (id)syncQueue;
- (id)outputStream;
- (id)inputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)invalidate;
- (void)dealloc;

@end
