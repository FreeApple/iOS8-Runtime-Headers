/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray, GEOVConnectivity;

@interface GEOVTile : PBCodable <NSCopying> {
    NSMutableArray *_coastlines;
    GEOVConnectivity *_connectivity;
    NSMutableArray *_labelLanguages;
    NSData *_labels;
    NSMutableArray *_lines;
    int _minZ;
    NSMutableArray *_points;
    NSMutableArray *_polygons;
    unsigned int _sectionDeltaLengthBits;
    unsigned int _vertexBits;
    NSData *_vertices;
    int _zBits;
    struct { 
        unsigned int minZ : 1; 
        unsigned int sectionDeltaLengthBits : 1; 
        unsigned int vertexBits : 1; 
        unsigned int zBits : 1; 
    } _has;
}

@property(retain) NSMutableArray * lines;
@property(retain) NSMutableArray * polygons;
@property(retain) NSMutableArray * points;
@property(readonly) bool hasLabels;
@property(retain) NSData * labels;
@property(readonly) bool hasVertices;
@property(retain) NSData * vertices;
@property(readonly) bool hasConnectivity;
@property(retain) GEOVConnectivity * connectivity;
@property bool hasMinZ;
@property int minZ;
@property bool hasZBits;
@property int zBits;
@property(retain) NSMutableArray * coastlines;
@property(retain) NSMutableArray * labelLanguages;
@property bool hasVertexBits;
@property unsigned int vertexBits;
@property bool hasSectionDeltaLengthBits;
@property unsigned int sectionDeltaLengthBits;


- (id)coastlines;
- (int)minZ;
- (id)labelLanguages;
- (int)zBits;
- (id)connectivity;
- (bool)hasSectionDeltaLengthBits;
- (void)setHasSectionDeltaLengthBits:(bool)arg1;
- (void)setSectionDeltaLengthBits:(unsigned int)arg1;
- (unsigned int)sectionDeltaLengthBits;
- (bool)hasVertexBits;
- (void)setHasVertexBits:(bool)arg1;
- (void)setVertexBits:(unsigned int)arg1;
- (unsigned int)vertexBits;
- (bool)hasZBits;
- (void)setHasZBits:(bool)arg1;
- (void)setZBits:(int)arg1;
- (bool)hasMinZ;
- (void)setHasMinZ:(bool)arg1;
- (void)setMinZ:(int)arg1;
- (bool)hasConnectivity;
- (bool)hasLabels;
- (id)labelLanguageAtIndex:(unsigned long long)arg1;
- (void)clearLabelLanguages;
- (unsigned long long)labelLanguagesCount;
- (id)coastlinesAtIndex:(unsigned long long)arg1;
- (void)clearCoastlines;
- (id)pointAtIndex:(unsigned long long)arg1;
- (void)clearPoints;
- (unsigned long long)pointsCount;
- (id)polygonAtIndex:(unsigned long long)arg1;
- (void)clearPolygons;
- (id)lineAtIndex:(unsigned long long)arg1;
- (void)clearLines;
- (void)addLabelLanguage:(id)arg1;
- (void)addCoastlines:(id)arg1;
- (void)addPolygon:(id)arg1;
- (void)addLine:(id)arg1;
- (void)setLabelLanguages:(id)arg1;
- (void)setCoastlines:(id)arg1;
- (void)setConnectivity:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)setPolygons:(id)arg1;
- (void)setLines:(id)arg1;
- (unsigned long long)coastlinesCount;
- (unsigned long long)polygonsCount;
- (id)polygons;
- (unsigned long long)linesCount;
- (id)vertices;
- (bool)hasVertices;
- (void)setVertices:(id)arg1;
- (id)lines;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)points;
- (id)labels;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)addPoint:(id)arg1;

@end
