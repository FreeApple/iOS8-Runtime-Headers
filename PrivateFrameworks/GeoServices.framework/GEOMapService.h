/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapService : NSObject  {
}

+ (id)sharedService;

- (id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2;
- (id)_geoMapItemsForUpdatedPlacesInResolution:(id)arg1;
- (id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 traits:(id)arg3;
- (void)_geoMapItemsForResponseData:(id)arg1 handler:(id)arg2;
- (void)submitUsageForTraits:(id)arg1;
- (void)submitUsageForTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)ticketForURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForMerchantCode:(id)arg1 paymentNetwork:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedAddressSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAddressSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)_geoMapItemForData:(id)arg1;
- (id)ticketForRefinementFromCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForOptInToProblemSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (id)ticketForMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (void)trackMapItem:(id)arg1;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)_ticketForFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(bool)arg4 includeETA:(bool)arg5 traits:(id)arg6;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeETA:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 traits:(id)arg4;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)defaultTraits;
- (id)_ticketForAutoCompleteFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4;
- (id)_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(bool)arg4 traits:(id)arg5;
- (id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 traits:(id)arg4;
- (id)_ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_ticketForMUIDs:(id)arg1 traits:(id)arg2;
- (id)_ticketForSearchQuery:(id)arg1 hint:(id)arg2 maxResults:(unsigned int)arg3 suppressResultsRequiringAttribution:(bool)arg4 traits:(id)arg5;
- (int)defaultLocalSearchProviderID;
- (id)searchURL;
- (id)directionsURL;
- (int)localSearchProviderID;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2;

@end
