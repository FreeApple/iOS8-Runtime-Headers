/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOutputStream, NSMutableDictionary, NSString, NSObject<OS_dispatch_queue>, NSInputStream, NSError;

@interface MFStream : NSObject <NSStreamDelegate> {
    NSInputStream *_rStream;
    NSOutputStream *_wStream;
    NSMutableDictionary *_properties;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    NSObject<OS_dispatch_queue> *_location;
    unsigned long long _capacity;
    unsigned long long _length;
    char *_buffer;
    NSError *_error;
    bool_streamCanRead;
    bool_streamCanWrite;
    bool_dispatchedBytesAvailable;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    bool_enableThroughputMonitoring;
}

@property(readonly) NSError * streamError;
@property(readonly) bool isOpen;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_networkDispatchQueue;
+ (void)setNetworkThread:(id)arg1;
+ (id)networkThread;

- (void)openToHostName:(id)arg1 port:(long long)arg2;
- (void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2;
- (void)_readBytesFromStream;
- (id)_copyPropertyForKey:(id)arg1;
- (id)initCallBack:(id)arg1 onDispatchQueue:(id)arg2;
- (void)enableThroughputMonitoring:(bool)arg1;
- (bool)isOpen;
- (id)init;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (void)dealloc;

@end
