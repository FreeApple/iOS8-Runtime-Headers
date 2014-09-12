/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSString, GEOAddress, GEOClientCapabilities, GEOBusinessOptions, GEOIndexQueryNode, GEOLatLng, NSMutableArray, GEOLocation, GEOMapRegion, GEOSuggestionsOptions;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _additionalPlaceTypes;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _businessIDs;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _optionalSuppressionReasons;
    struct { 
        int _beginIndex; 
        int _endIndex; 
        int _stringType; 
    } _searchContextSubstring;
    struct { int x1; int x2; int x3; } *_searchSubstrings;
    unsigned long long _searchSubstringsCount;
    unsigned long long _searchSubstringsSpace;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    GEOLatLng *_searchLocation;
    int _searchSource;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
    bool_excludeAddressInResults;
    bool_includeBusinessCategories;
    bool_includeBusinessRating;
    bool_includeEntryPoints;
    bool_includeFeatureSets;
    bool_includeGeoId;
    bool_includeMatchedToken;
    bool_includeNameForForwardGeocodingResults;
    bool_includePhonetics;
    bool_includeQuads;
    bool_includeRevgeoRequestTemplate;
    bool_includeSpokenNames;
    bool_includeStatusCodeInfo;
    bool_includeSuggestionsOnly;
    bool_includeTravelDistance;
    bool_includeTravelTime;
    bool_includeUnmatchedStrings;
    bool_isFromAPI;
    bool_isStrictGeocoding;
    bool_isStrictMapRegion;
    bool_structuredSearch;
    bool_suppressResultsRequiringAttribution;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int searchContextSubstring : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int placeTypeLimit : 1; 
        unsigned int searchSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int transportTypeForTravelTimes : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includeMatchedToken : 1; 
        unsigned int includeNameForForwardGeocodingResults : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeRevgeoRequestTemplate : 1; 
        unsigned int includeSpokenNames : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeTravelDistance : 1; 
        unsigned int includeTravelTime : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isStrictGeocoding : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    } _has;
}

@property(readonly) unsigned long long businessIDsCount;
@property(readonly) unsigned long long* businessIDs;
@property(readonly) bool hasAddress;
@property(retain) GEOAddress * address;
@property(readonly) bool hasLocation;
@property(retain) GEOLocation * location;
@property(readonly) bool hasSearch;
@property(retain) NSString * search;
@property(readonly) bool hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) unsigned long long additionalPlaceTypesCount;
@property(readonly) int* additionalPlaceTypes;
@property bool hasIncludePhonetics;
@property bool includePhonetics;
@property bool hasMaxResults;
@property int maxResults;
@property bool hasSessionGUID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property bool hasBusinessSortOrder;
@property int businessSortOrder;
@property bool hasIncludeBusinessRating;
@property bool includeBusinessRating;
@property bool hasIncludeBusinessCategories;
@property bool includeBusinessCategories;
@property bool hasMaxBusinessReviews;
@property int maxBusinessReviews;
@property(retain) NSMutableArray * filterByBusinessCategorys;
@property bool hasIsStrictMapRegion;
@property bool isStrictMapRegion;
@property bool hasTimestamp;
@property double timestamp;
@property(readonly) bool hasZilchPoints;
@property(retain) NSData * zilchPoints;
@property bool hasIncludeEntryPoints;
@property bool includeEntryPoints;
@property(readonly) bool hasBusinessOptions;
@property(retain) GEOBusinessOptions * businessOptions;
@property bool hasLocalSearchProviderID;
@property int localSearchProviderID;
@property bool hasIncludeSuggestionsOnly;
@property bool includeSuggestionsOnly;
@property bool hasStructuredSearch;
@property bool structuredSearch;
@property(readonly) bool hasSuggestionsPrefix;
@property(retain) NSString * suggestionsPrefix;
@property(readonly) bool hasDeviceCountryCode;
@property(retain) NSString * deviceCountryCode;
@property(readonly) bool hasDeviceLocation;
@property(retain) GEOLatLng * deviceLocation;
@property(readonly) bool hasInputLanguage;
@property(retain) NSString * inputLanguage;
@property(readonly) bool hasPhoneticLocaleIdentifier;
@property(retain) NSString * phoneticLocaleIdentifier;
@property bool hasSequenceNumber;
@property int sequenceNumber;
@property bool hasSuppressResultsRequiringAttribution;
@property bool suppressResultsRequiringAttribution;
@property bool hasIsFromAPI;
@property bool isFromAPI;
@property bool hasTimeSinceMapEnteredForeground;
@property double timeSinceMapEnteredForeground;
@property bool hasTimeSinceMapViewportChanged;
@property double timeSinceMapViewportChanged;
@property bool hasIncludeSpokenNames;
@property bool includeSpokenNames;
@property(readonly) bool hasDeviceTimeZone;
@property(retain) NSString * deviceTimeZone;
@property(readonly) bool hasClientCapabilities;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property bool hasIncludeTravelTime;
@property bool includeTravelTime;
@property bool hasTransportTypeForTravelTimes;
@property int transportTypeForTravelTimes;
@property(readonly) bool hasSuggestionsOptions;
@property(retain) GEOSuggestionsOptions * suggestionsOptions;
@property bool hasPlaceTypeLimit;
@property int placeTypeLimit;
@property bool hasIsStrictGeocoding;
@property bool isStrictGeocoding;
@property bool hasIncludeTravelDistance;
@property bool includeTravelDistance;
@property bool hasGeoId;
@property long long geoId;
@property bool hasIncludeQuads;
@property bool includeQuads;
@property bool hasExcludeAddressInResults;
@property bool excludeAddressInResults;
@property(readonly) unsigned long long searchSubstringsCount;
@property(readonly) struct { int x1; int x2; int x3; }* searchSubstrings;
@property bool hasIncludeGeoId;
@property bool includeGeoId;
@property(readonly) bool hasSearchContext;
@property(retain) NSString * searchContext;
@property bool hasSearchContextSubstring;
@property struct { int x1; int x2; int x3; } searchContextSubstring;
@property bool hasIncludeStatusCodeInfo;
@property bool includeStatusCodeInfo;
@property(readonly) bool hasPreserveFields;
@property(retain) GEOAddress * preserveFields;
@property bool hasIncludeUnmatchedStrings;
@property bool includeUnmatchedStrings;
@property(readonly) bool hasIndexFilter;
@property(retain) GEOIndexQueryNode * indexFilter;
@property bool hasIncludeFeatureSets;
@property bool includeFeatureSets;
@property(retain) NSMutableArray * serviceTags;
@property bool hasIntersectingGeoId;
@property unsigned long long intersectingGeoId;
@property(readonly) bool hasKnownLocation;
@property(retain) GEOLatLng * knownLocation;
@property bool hasKnownAccuracy;
@property int knownAccuracy;
@property bool hasIncludeRevgeoRequestTemplate;
@property bool includeRevgeoRequestTemplate;
@property bool hasIncludeMatchedToken;
@property bool includeMatchedToken;
@property bool hasSearchSource;
@property int searchSource;
@property(readonly) unsigned long long optionalSuppressionReasonsCount;
@property(readonly) int* optionalSuppressionReasons;
@property(readonly) bool hasSearchLocation;
@property(retain) GEOLatLng * searchLocation;
@property bool hasIncludeNameForForwardGeocodingResults;
@property bool includeNameForForwardGeocodingResults;


- (bool)hasSessionGUID;
- (bool)hasDeviceLocation;
- (id)initWithTraits:(id)arg1 maxResults:(int)arg2;
- (id)initWithTraits:(id)arg1 includeEntryPoints:(bool)arg2;
- (bool)includeNameForForwardGeocodingResults;
- (id)searchLocation;
- (int)searchSource;
- (bool)includeMatchedToken;
- (bool)includeRevgeoRequestTemplate;
- (id)knownLocation;
- (unsigned long long)intersectingGeoId;
- (bool)includeFeatureSets;
- (id)indexFilter;
- (bool)includeUnmatchedStrings;
- (id)preserveFields;
- (bool)includeStatusCodeInfo;
- (struct { int x1; int x2; int x3; })searchContextSubstring;
- (id)searchContext;
- (bool)includeGeoId;
- (bool)excludeAddressInResults;
- (bool)includeQuads;
- (bool)includeTravelDistance;
- (bool)isStrictGeocoding;
- (int)placeTypeLimit;
- (id)suggestionsOptions;
- (int)transportTypeForTravelTimes;
- (bool)includeTravelTime;
- (id)deviceTimeZone;
- (bool)includeSpokenNames;
- (double)timeSinceMapViewportChanged;
- (double)timeSinceMapEnteredForeground;
- (bool)isFromAPI;
- (id)deviceLocation;
- (id)deviceCountryCode;
- (id)suggestionsPrefix;
- (bool)structuredSearch;
- (bool)includeSuggestionsOnly;
- (id)businessOptions;
- (bool)includeEntryPoints;
- (bool)isStrictMapRegion;
- (id)filterByBusinessCategorys;
- (int)maxBusinessReviews;
- (bool)includeBusinessCategories;
- (bool)includeBusinessRating;
- (int)businessSortOrder;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (bool)includePhonetics;
- (bool)hasIncludeNameForForwardGeocodingResults;
- (void)setHasIncludeNameForForwardGeocodingResults:(bool)arg1;
- (void)setIncludeNameForForwardGeocodingResults:(bool)arg1;
- (bool)hasSearchLocation;
- (void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned long long)arg2;
- (int*)optionalSuppressionReasons;
- (bool)hasSearchSource;
- (void)setHasSearchSource:(bool)arg1;
- (void)setSearchSource:(int)arg1;
- (bool)hasIncludeMatchedToken;
- (void)setHasIncludeMatchedToken:(bool)arg1;
- (void)setIncludeMatchedToken:(bool)arg1;
- (bool)hasIncludeRevgeoRequestTemplate;
- (void)setHasIncludeRevgeoRequestTemplate:(bool)arg1;
- (void)setIncludeRevgeoRequestTemplate:(bool)arg1;
- (bool)hasKnownLocation;
- (bool)hasIntersectingGeoId;
- (void)setHasIntersectingGeoId:(bool)arg1;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (bool)hasIncludeFeatureSets;
- (void)setHasIncludeFeatureSets:(bool)arg1;
- (void)setIncludeFeatureSets:(bool)arg1;
- (bool)hasIndexFilter;
- (bool)hasIncludeUnmatchedStrings;
- (void)setHasIncludeUnmatchedStrings:(bool)arg1;
- (void)setIncludeUnmatchedStrings:(bool)arg1;
- (bool)hasPreserveFields;
- (bool)hasIncludeStatusCodeInfo;
- (void)setHasIncludeStatusCodeInfo:(bool)arg1;
- (void)setIncludeStatusCodeInfo:(bool)arg1;
- (bool)hasSearchContextSubstring;
- (void)setHasSearchContextSubstring:(bool)arg1;
- (void)setSearchContextSubstring:(struct { int x1; int x2; int x3; })arg1;
- (bool)hasSearchContext;
- (bool)hasIncludeGeoId;
- (void)setHasIncludeGeoId:(bool)arg1;
- (void)setIncludeGeoId:(bool)arg1;
- (void)setSearchSubstrings:(struct { int x1; int x2; int x3; }*)arg1 count:(unsigned long long)arg2;
- (struct { int x1; int x2; int x3; }*)searchSubstrings;
- (bool)hasExcludeAddressInResults;
- (void)setHasExcludeAddressInResults:(bool)arg1;
- (void)setExcludeAddressInResults:(bool)arg1;
- (bool)hasIncludeQuads;
- (void)setHasIncludeQuads:(bool)arg1;
- (void)setIncludeQuads:(bool)arg1;
- (bool)hasIncludeTravelDistance;
- (void)setHasIncludeTravelDistance:(bool)arg1;
- (void)setIncludeTravelDistance:(bool)arg1;
- (bool)hasIsStrictGeocoding;
- (void)setHasIsStrictGeocoding:(bool)arg1;
- (void)setIsStrictGeocoding:(bool)arg1;
- (bool)hasPlaceTypeLimit;
- (void)setHasPlaceTypeLimit:(bool)arg1;
- (void)setPlaceTypeLimit:(int)arg1;
- (bool)hasSuggestionsOptions;
- (bool)hasTransportTypeForTravelTimes;
- (void)setHasTransportTypeForTravelTimes:(bool)arg1;
- (void)setTransportTypeForTravelTimes:(int)arg1;
- (bool)hasIncludeTravelTime;
- (void)setHasIncludeTravelTime:(bool)arg1;
- (void)setIncludeTravelTime:(bool)arg1;
- (bool)hasDeviceTimeZone;
- (bool)hasIncludeSpokenNames;
- (void)setHasIncludeSpokenNames:(bool)arg1;
- (void)setIncludeSpokenNames:(bool)arg1;
- (bool)hasTimeSinceMapViewportChanged;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (bool)hasTimeSinceMapEnteredForeground;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (bool)hasIsFromAPI;
- (void)setHasIsFromAPI:(bool)arg1;
- (void)setIsFromAPI:(bool)arg1;
- (bool)hasDeviceCountryCode;
- (bool)hasSuggestionsPrefix;
- (bool)hasStructuredSearch;
- (void)setHasStructuredSearch:(bool)arg1;
- (void)setStructuredSearch:(bool)arg1;
- (bool)hasIncludeSuggestionsOnly;
- (void)setHasIncludeSuggestionsOnly:(bool)arg1;
- (void)setIncludeSuggestionsOnly:(bool)arg1;
- (bool)hasBusinessOptions;
- (bool)hasIncludeEntryPoints;
- (void)setHasIncludeEntryPoints:(bool)arg1;
- (void)setIncludeEntryPoints:(bool)arg1;
- (bool)hasIsStrictMapRegion;
- (void)setHasIsStrictMapRegion:(bool)arg1;
- (void)setIsStrictMapRegion:(bool)arg1;
- (bool)hasMaxBusinessReviews;
- (void)setHasMaxBusinessReviews:(bool)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (bool)hasIncludeBusinessCategories;
- (void)setHasIncludeBusinessCategories:(bool)arg1;
- (void)setIncludeBusinessCategories:(bool)arg1;
- (bool)hasIncludeBusinessRating;
- (void)setHasIncludeBusinessRating:(bool)arg1;
- (void)setIncludeBusinessRating:(bool)arg1;
- (bool)hasBusinessSortOrder;
- (void)setHasBusinessSortOrder:(bool)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (void)setHasSessionGUID:(bool)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)hasMaxResults;
- (void)setHasMaxResults:(bool)arg1;
- (bool)hasIncludePhonetics;
- (void)setHasIncludePhonetics:(bool)arg1;
- (void)setIncludePhonetics:(bool)arg1;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int*)additionalPlaceTypes;
- (bool)hasSearch;
- (bool)hasLocation;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long*)businessIDs;
- (void)addOptionalSuppressionReason:(int)arg1;
- (int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1;
- (void)clearOptionalSuppressionReasons;
- (unsigned long long)optionalSuppressionReasonsCount;
- (void)addSearchSubstring:(struct { int x1; int x2; int x3; })arg1;
- (struct { int x1; int x2; int x3; })searchSubstringAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchSubstringsCount;
- (id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1;
- (void)clearFilterByBusinessCategorys;
- (unsigned long long)filterByBusinessCategorysCount;
- (void)addAdditionalPlaceType:(int)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (void)clearAdditionalPlaceTypes;
- (unsigned long long)additionalPlaceTypesCount;
- (void)addBusinessID:(unsigned long long)arg1;
- (unsigned long long)businessIDAtIndex:(unsigned long long)arg1;
- (void)clearBusinessIDs;
- (unsigned long long)businessIDsCount;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setKnownLocation:(id)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setPreserveFields:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)clearSearchSubstrings;
- (void)setSuggestionsOptions:(id)arg1;
- (void)setDeviceTimeZone:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setBusinessOptions:(id)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setSearch:(id)arg1;
- (bool)suppressResultsRequiringAttribution;
- (bool)hasSuppressResultsRequiringAttribution;
- (void)setHasSuppressResultsRequiringAttribution:(bool)arg1;
- (void)setSuppressResultsRequiringAttribution:(bool)arg1;
- (id)phoneticLocaleIdentifier;
- (bool)hasPhoneticLocaleIdentifier;
- (id)inputLanguage;
- (bool)hasInputLanguage;
- (long long)geoId;
- (int)localSearchProviderID;
- (bool)hasGeoId;
- (void)setHasGeoId:(bool)arg1;
- (void)setGeoId:(long long)arg1;
- (bool)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (id)serviceTags;
- (id)clientCapabilities;
- (bool)hasSequenceNumber;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setSequenceNumber:(int)arg1;
- (bool)hasClientCapabilities;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (void)clearServiceTags;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (bool)hasAddress;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)setAddress:(id)arg1;
- (int)knownAccuracy;
- (bool)hasKnownAccuracy;
- (void)setHasKnownAccuracy:(bool)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (id)mapRegion;
- (bool)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (id)zilchPoints;
- (bool)hasZilchPoints;
- (void)setZilchPoints:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (id)location;
- (double)timestamp;
- (void)setMaxResults:(int)arg1;
- (int)maxResults;
- (int)sequenceNumber;
- (id)search;
- (void)setTimestamp:(double)arg1;
- (void)setLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)address;
- (id)dictionaryRepresentation;
- (id)initWithTraits:(id)arg1;
- (void)_applyDisplayableSearchProperties;
- (void)_applyBasicSearchProperties;

@end
