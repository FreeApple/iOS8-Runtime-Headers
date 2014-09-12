/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_guid;
    unsigned int _interruptionDuration;
    unsigned int _isAudioResumed;
    unsigned int _isVideo;
    unsigned int _isVideoResumed;
    int _linkQuality;
    unsigned int _onLockScreen;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int interruptionDuration : 1; 
        unsigned int isAudioResumed : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoResumed : 1; 
        unsigned int linkQuality : 1; 
        unsigned int onLockScreen : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasInterruptionDuration;
@property unsigned int interruptionDuration;
@property bool hasIsVideoResumed;
@property unsigned int isVideoResumed;
@property bool hasIsAudioResumed;
@property unsigned int isAudioResumed;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasIsVideo;
@property unsigned int isVideo;
@property bool hasOnLockScreen;
@property unsigned int onLockScreen;


- (unsigned int)isAudioResumed;
- (unsigned int)isVideoResumed;
- (unsigned int)interruptionDuration;
- (bool)hasLinkQuality;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (bool)hasIsAudioResumed;
- (void)setHasIsAudioResumed:(bool)arg1;
- (void)setIsAudioResumed:(unsigned int)arg1;
- (bool)hasIsVideoResumed;
- (void)setHasIsVideoResumed:(bool)arg1;
- (void)setIsVideoResumed:(unsigned int)arg1;
- (bool)hasInterruptionDuration;
- (void)setHasInterruptionDuration:(bool)arg1;
- (void)setInterruptionDuration:(unsigned int)arg1;
- (unsigned int)onLockScreen;
- (bool)hasOnLockScreen;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (bool)hasIsVideo;
- (void)setHasIsVideo:(bool)arg1;
- (bool)hasGuid;
- (void)setIsVideo:(unsigned int)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)linkQuality;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)isVideo;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
