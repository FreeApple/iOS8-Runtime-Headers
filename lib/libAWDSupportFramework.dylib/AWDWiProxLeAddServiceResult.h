/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeAddServiceResult : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _result;
    NSString *_resultString;
    NSString *_serviceUUID;
    NSString *_sessionId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSessionId;
@property(retain) NSString * sessionId;
@property(readonly) bool hasServiceUUID;
@property(retain) NSString * serviceUUID;
@property(readonly) bool hasResultString;
@property(retain) NSString * resultString;
@property bool hasResult;
@property unsigned int result;


- (bool)hasResult;
- (id)resultString;
- (void)setHasResult:(bool)arg1;
- (bool)hasResultString;
- (void)setResultString:(id)arg1;
- (id)serviceUUID;
- (bool)hasServiceUUID;
- (void)setServiceUUID:(id)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)result;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
