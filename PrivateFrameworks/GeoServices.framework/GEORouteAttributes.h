/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORouteAttributes : PBCodable <NSCopying> {
    struct { 
        double _time; 
        int _flexibility; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int flexibility : 1; 
            unsigned int type : 1; 
        } _has; 
    } _timepoint;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _additionalTransportTypes;
    int _basicPointsToBeIncluded;
    int _mainTransportType;
    NSString *_phoneticLocaleIdentifier;
    int _trafficType;
    unsigned int _walkingLimitMeters;
    bool_includeContingencyRoutes;
    bool_includeHistoricTravelTime;
    bool_includeLaneGuidance;
    bool_includeManeuverIcons;
    bool_includePhonetics;
    bool_includeSubsteps;
    bool_includeTrafficAlongRoute;
    bool_includeTrafficIncidents;
    bool_includeZilchPoints;
    struct { 
        unsigned int timepoint : 1; 
        unsigned int basicPointsToBeIncluded : 1; 
        unsigned int mainTransportType : 1; 
        unsigned int trafficType : 1; 
        unsigned int walkingLimitMeters : 1; 
        unsigned int includeContingencyRoutes : 1; 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeLaneGuidance : 1; 
        unsigned int includeManeuverIcons : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeSubsteps : 1; 
        unsigned int includeTrafficAlongRoute : 1; 
        unsigned int includeTrafficIncidents : 1; 
        unsigned int includeZilchPoints : 1; 
    } _has;
}

@property bool hasMainTransportType;
@property int mainTransportType;
@property bool hasIncludePhonetics;
@property bool includePhonetics;
@property bool hasIncludeManeuverIcons;
@property bool includeManeuverIcons;
@property bool hasIncludeZilchPoints;
@property bool includeZilchPoints;
@property bool hasIncludeContingencyRoutes;
@property bool includeContingencyRoutes;
@property bool hasIncludeLaneGuidance;
@property bool includeLaneGuidance;
@property bool hasBasicPointsToBeIncluded;
@property int basicPointsToBeIncluded;
@property bool hasTrafficType;
@property int trafficType;
@property(readonly) bool hasPhoneticLocaleIdentifier;
@property(retain) NSString * phoneticLocaleIdentifier;
@property bool hasIncludeTrafficAlongRoute;
@property bool includeTrafficAlongRoute;
@property bool hasTimepoint;
@property struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } timepoint;
@property bool hasIncludeHistoricTravelTime;
@property bool includeHistoricTravelTime;
@property bool hasIncludeSubsteps;
@property bool includeSubsteps;
@property bool hasIncludeTrafficIncidents;
@property bool includeTrafficIncidents;
@property bool hasWalkingLimitMeters;
@property unsigned int walkingLimitMeters;
@property(readonly) unsigned long long additionalTransportTypesCount;
@property(readonly) int* additionalTransportTypes;


- (void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int*)additionalTransportTypes;
- (bool)hasWalkingLimitMeters;
- (void)setHasWalkingLimitMeters:(bool)arg1;
- (void)setWalkingLimitMeters:(unsigned int)arg1;
- (unsigned int)walkingLimitMeters;
- (bool)hasIncludeTrafficIncidents;
- (void)setHasIncludeTrafficIncidents:(bool)arg1;
- (bool)includeTrafficIncidents;
- (bool)hasIncludeSubsteps;
- (void)setHasIncludeSubsteps:(bool)arg1;
- (void)setIncludeSubsteps:(bool)arg1;
- (bool)includeSubsteps;
- (bool)hasIncludeTrafficAlongRoute;
- (void)setHasIncludeTrafficAlongRoute:(bool)arg1;
- (bool)includeTrafficAlongRoute;
- (bool)hasTrafficType;
- (void)setHasTrafficType:(bool)arg1;
- (int)trafficType;
- (bool)hasBasicPointsToBeIncluded;
- (void)setHasBasicPointsToBeIncluded:(bool)arg1;
- (int)basicPointsToBeIncluded;
- (bool)hasIncludeLaneGuidance;
- (void)setHasIncludeLaneGuidance:(bool)arg1;
- (bool)includeLaneGuidance;
- (bool)hasIncludeContingencyRoutes;
- (void)setHasIncludeContingencyRoutes:(bool)arg1;
- (void)setIncludeContingencyRoutes:(bool)arg1;
- (bool)includeContingencyRoutes;
- (bool)hasIncludeZilchPoints;
- (void)setHasIncludeZilchPoints:(bool)arg1;
- (bool)includeZilchPoints;
- (bool)hasIncludeManeuverIcons;
- (void)setHasIncludeManeuverIcons:(bool)arg1;
- (bool)includeManeuverIcons;
- (bool)hasMainTransportType;
- (void)setHasMainTransportType:(bool)arg1;
- (int)mainTransportType;
- (void)addAdditionalTransportType:(int)arg1;
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;
- (void)clearAdditionalTransportTypes;
- (unsigned long long)additionalTransportTypesCount;
- (void)setMainTransportType:(int)arg1;
- (void)setIncludeTrafficIncidents:(bool)arg1;
- (void)setIncludeTrafficAlongRoute:(bool)arg1;
- (void)setTrafficType:(int)arg1;
- (void)setIncludeLaneGuidance:(bool)arg1;
- (void)setIncludeManeuverIcons:(bool)arg1;
- (void)setIncludeZilchPoints:(bool)arg1;
- (void)setBasicPointsToBeIncluded:(int)arg1;
- (bool)includeHistoricTravelTime;
- (struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })timepoint;
- (bool)hasIncludeHistoricTravelTime;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (bool)hasTimepoint;
- (void)setHasTimepoint:(bool)arg1;
- (void)setTimepoint:(struct { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (bool)includePhonetics;
- (bool)hasIncludePhonetics;
- (void)setHasIncludePhonetics:(bool)arg1;
- (void)setIncludePhonetics:(bool)arg1;
- (id)phoneticLocaleIdentifier;
- (bool)hasPhoneticLocaleIdentifier;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
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
