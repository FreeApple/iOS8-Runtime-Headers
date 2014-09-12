/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOVLaneCharacteristic;

@interface GEOVPointCharacteristic : PBCodable <NSCopying> {
    GEOVLaneCharacteristic *_laneCharacteristic;
    int _roadLaneCount;
    int _roadOffset;
    int _sectionIndex;
    int _vertexIndex;
    int _zLevel;
    bool_brunnelEntry;
    bool_castShadow;
    bool_cropped;
    bool_shouldDrawLanes;
    struct { 
        unsigned int roadLaneCount : 1; 
        unsigned int roadOffset : 1; 
        unsigned int sectionIndex : 1; 
        unsigned int vertexIndex : 1; 
        unsigned int zLevel : 1; 
        unsigned int brunnelEntry : 1; 
        unsigned int castShadow : 1; 
        unsigned int cropped : 1; 
        unsigned int shouldDrawLanes : 1; 
    } _has;
}

@property bool hasSectionIndex;
@property int sectionIndex;
@property bool hasVertexIndex;
@property int vertexIndex;
@property bool hasRoadLaneCount;
@property int roadLaneCount;
@property bool hasRoadOffset;
@property int roadOffset;
@property bool hasZLevel;
@property int zLevel;
@property bool hasCropped;
@property bool cropped;
@property(readonly) bool hasLaneCharacteristic;
@property(retain) GEOVLaneCharacteristic * laneCharacteristic;
@property bool hasShouldDrawLanes;
@property bool shouldDrawLanes;
@property bool hasCastShadow;
@property bool castShadow;
@property bool hasBrunnelEntry;
@property bool brunnelEntry;


- (bool)brunnelEntry;
- (bool)castShadow;
- (bool)shouldDrawLanes;
- (id)laneCharacteristic;
- (bool)cropped;
- (int)zLevel;
- (int)roadOffset;
- (int)vertexIndex;
- (bool)hasBrunnelEntry;
- (void)setHasBrunnelEntry:(bool)arg1;
- (void)setBrunnelEntry:(bool)arg1;
- (bool)hasCastShadow;
- (void)setHasCastShadow:(bool)arg1;
- (void)setCastShadow:(bool)arg1;
- (bool)hasShouldDrawLanes;
- (void)setHasShouldDrawLanes:(bool)arg1;
- (void)setShouldDrawLanes:(bool)arg1;
- (bool)hasLaneCharacteristic;
- (bool)hasCropped;
- (void)setHasCropped:(bool)arg1;
- (void)setCropped:(bool)arg1;
- (bool)hasZLevel;
- (void)setHasZLevel:(bool)arg1;
- (void)setZLevel:(int)arg1;
- (bool)hasRoadOffset;
- (void)setHasRoadOffset:(bool)arg1;
- (void)setRoadOffset:(int)arg1;
- (bool)hasVertexIndex;
- (void)setHasVertexIndex:(bool)arg1;
- (void)setVertexIndex:(int)arg1;
- (bool)hasSectionIndex;
- (void)setHasSectionIndex:(bool)arg1;
- (void)setLaneCharacteristic:(id)arg1;
- (int)roadLaneCount;
- (bool)hasRoadLaneCount;
- (void)setHasRoadLaneCount:(bool)arg1;
- (void)setRoadLaneCount:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)setSectionIndex:(int)arg1;
- (int)sectionIndex;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
