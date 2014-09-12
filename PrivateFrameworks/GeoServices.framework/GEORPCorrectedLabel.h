/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOMapRegion;

@interface GEORPCorrectedLabel : PBCodable <NSCopying> {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; } *_featureHandles;
    unsigned long long _featureHandlesCount;
    unsigned long long _featureHandlesSpace;
    NSString *_correctedValue;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
}

@property(readonly) bool hasOriginalValue;
@property(retain) NSString * originalValue;
@property(readonly) bool hasCorrectedValue;
@property(retain) NSString * correctedValue;
@property(readonly) bool hasFeatureRegion;
@property(retain) GEOMapRegion * featureRegion;
@property(readonly) unsigned long long featureHandlesCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }* featureHandles;


- (id)featureRegion;
- (id)correctedValue;
- (id)originalValue;
- (void)setFeatureHandles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)arg1 count:(unsigned long long)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)featureHandles;
- (bool)hasFeatureRegion;
- (bool)hasCorrectedValue;
- (bool)hasOriginalValue;
- (void)addFeatureHandle:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })featureHandleAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureHandlesCount;
- (void)clearFeatureHandles;
- (void)setFeatureRegion:(id)arg1;
- (void)setCorrectedValue:(id)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
