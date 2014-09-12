/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    unsigned int _error;
    unsigned int _flushes;
    NSString *_guid;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int flushes : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasFlushes;
@property unsigned int flushes;
@property bool hasSendDuration;
@property unsigned int sendDuration;
@property bool hasPayloadSize;
@property unsigned int payloadSize;
@property bool hasError;
@property unsigned int error;
@property bool hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)flushes;
- (bool)hasFlushes;
- (void)setHasFlushes:(bool)arg1;
- (void)setFlushes:(unsigned int)arg1;
- (unsigned int)payloadSize;
- (bool)hasPayloadSize;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (unsigned int)dualChannelState;
- (bool)hasDualChannelState;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (unsigned int)sendDuration;
- (bool)hasSendDuration;
- (void)setHasSendDuration:(bool)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setHasError:(bool)arg1;
- (bool)hasLinkQuality;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)connectionType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasError;
- (int)linkQuality;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setError:(unsigned int)arg1;
- (unsigned int)error;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
