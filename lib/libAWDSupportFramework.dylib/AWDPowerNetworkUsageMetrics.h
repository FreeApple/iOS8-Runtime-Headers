/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDPowerNetworkUsageMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSMutableArray *_usages;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(retain) NSMutableArray * usages;


- (id)usages;
- (id)usageAtIndex:(unsigned long long)arg1;
- (void)clearUsages;
- (unsigned long long)usagesCount;
- (void)addUsage:(id)arg1;
- (void)setUsages:(id)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
