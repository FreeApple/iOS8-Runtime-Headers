/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class GEOMapRegion, NSString, PBUnknownFields;

@interface MSPRegionBookmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_region;
    NSString *_title;
}

@property(readonly) bool hasRegion;
@property(retain) GEOMapRegion * region;
@property(readonly) bool hasTitle;
@property(retain) NSString * title;
@property(readonly) PBUnknownFields * unknownFields;


- (bool)hasRegion;
- (id)unknownFields;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (id)region;
- (void)setRegion:(id)arg1;

@end
