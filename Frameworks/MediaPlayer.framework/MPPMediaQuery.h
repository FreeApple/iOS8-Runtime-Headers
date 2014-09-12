/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    int _groupingType;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
    bool_filteringDisabled;
    struct { 
        unsigned int entityOrder : 1; 
        unsigned int groupingType : 1; 
        unsigned int staticEntityType : 1; 
        unsigned int filteringDisabled : 1; 
    } _has;
}

@property(retain) NSMutableArray * filterPredicates;
@property bool hasGroupingType;
@property int groupingType;
@property bool hasFilteringDisabled;
@property bool filteringDisabled;
@property bool hasEntityOrder;
@property int entityOrder;
@property(retain) NSMutableArray * staticEntityIdentifiers;
@property bool hasStaticEntityType;
@property int staticEntityType;


- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasStaticEntityType:(bool)arg1;
- (void)setHasEntityOrder:(bool)arg1;
- (void)setHasFilteringDisabled:(bool)arg1;
- (void)setHasGroupingType:(bool)arg1;
- (bool)hasStaticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (void)clearStaticEntityIdentifiers;
- (bool)hasEntityOrder;
- (bool)hasFilteringDisabled;
- (bool)hasGroupingType;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;
- (void)clearFilterPredicates;
- (void)setStaticEntityIdentifiers:(id)arg1;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)setStaticEntityType:(int)arg1;
- (void)setEntityOrder:(int)arg1;
- (void)setFilteringDisabled:(bool)arg1;
- (void)setGroupingType:(int)arg1;
- (void)addFilterPredicates:(id)arg1;
- (int)staticEntityType;
- (id)staticEntityIdentifiers;
- (unsigned long long)staticEntityIdentifiersCount;
- (bool)filteringDisabled;
- (int)entityOrder;
- (id)filterPredicates;
- (unsigned long long)filterPredicatesCount;
- (int)groupingType;
- (void)setFilterPredicates:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
