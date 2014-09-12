/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPSubscriptionNotificationAlert, NSMutableArray;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    bool_shouldBadge;
    bool_shouldSendContentAvailable;
    struct { 
        unsigned int shouldBadge : 1; 
        unsigned int shouldSendContentAvailable : 1; 
    } _has;
}

@property(readonly) bool hasAlert;
@property(retain) CKDPSubscriptionNotificationAlert * alert;
@property bool hasShouldBadge;
@property bool shouldBadge;
@property(retain) NSMutableArray * additionalFields;
@property bool hasShouldSendContentAvailable;
@property bool shouldSendContentAvailable;


- (bool)hasShouldSendContentAvailable;
- (void)setHasShouldSendContentAvailable:(bool)arg1;
- (bool)hasShouldBadge;
- (void)setHasShouldBadge:(bool)arg1;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (void)clearAdditionalFields;
- (unsigned long long)additionalFieldsCount;
- (void)addAdditionalFields:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setAdditionalFields:(id)arg1;
- (id)additionalFields;
- (id)alert;
- (bool)hasAlert;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setShouldSendContentAvailable:(bool)arg1;
- (bool)shouldSendContentAvailable;
- (void)setShouldBadge:(bool)arg1;
- (bool)shouldBadge;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
