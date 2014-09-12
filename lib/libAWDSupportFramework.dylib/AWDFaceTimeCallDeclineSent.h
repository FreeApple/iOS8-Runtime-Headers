/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallDeclineSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _declineCode;
    int _errorCode;
    NSString *_guid;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int declineCode : 1; 
        unsigned int errorCode : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasErrorCode;
@property int errorCode;
@property bool hasDeclineCode;
@property unsigned int declineCode;
@property bool hasSendDuration;
@property unsigned int sendDuration;
@property bool hasIsVideo;
@property unsigned int isVideo;
@property bool hasOnLockScreen;
@property unsigned int onLockScreen;


- (unsigned int)declineCode;
- (bool)hasDeclineCode;
- (void)setHasDeclineCode:(bool)arg1;
- (void)setDeclineCode:(unsigned int)arg1;
- (unsigned int)sendDuration;
- (bool)hasSendDuration;
- (void)setHasSendDuration:(bool)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (unsigned int)onLockScreen;
- (bool)hasOnLockScreen;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (bool)hasIsVideo;
- (void)setHasIsVideo:(bool)arg1;
- (bool)hasGuid;
- (void)setIsVideo:(unsigned int)arg1;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)isVideo;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
