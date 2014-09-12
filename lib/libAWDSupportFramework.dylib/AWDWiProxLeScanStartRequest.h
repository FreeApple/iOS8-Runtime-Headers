/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSData, NSString;

@interface AWDWiProxLeScanStartRequest : PBRequest <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _dataLength;
    unsigned int _numPeers;
    NSData *_peers;
    NSString *_sessionId;
    int _type;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
        unsigned int numPeers : 1; 
        unsigned int type : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSessionId;
@property(retain) NSString * sessionId;
@property bool hasType;
@property int type;
@property bool hasDataLength;
@property unsigned int dataLength;
@property bool hasNumPeers;
@property unsigned int numPeers;
@property(readonly) bool hasPeers;
@property(retain) NSData * peers;


- (void)setDataLength:(unsigned int)arg1;
- (unsigned int)numPeers;
- (bool)hasPeers;
- (bool)hasNumPeers;
- (void)setHasNumPeers:(bool)arg1;
- (void)setNumPeers:(unsigned int)arg1;
- (bool)hasDataLength;
- (void)setHasDataLength:(bool)arg1;
- (void)setPeers:(id)arg1;
- (id)peers;
- (unsigned int)dataLength;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
