/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray, GEOVersionManifest;

@interface GEOResources : PBCodable <NSCopying> {
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributionBadges;
    NSMutableArray *_attributions;
    NSString *_authToken;
    NSString *_autocompleteURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessCallerIDURL;
    NSString *_businessNameResolutionURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSString *_forwardGeocoderURL;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    NSString *_locationShiftURL;
    NSString *_mapMatchURL;
    NSString *_polyLocationShiftURL;
    NSString *_problemCategoriesURL;
    NSString *_problemNotificationAvailabilityURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSMutableArray *_regionalResources;
    NSString *_releaseInfo;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_searchURL;
    NSString *_simpleETAURL;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileGroups;
    NSMutableArray *_tileSets;
    NSString *_usageURL;
    GEOVersionManifest *_versionManifest;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
}

@property(retain) NSMutableArray * tileGroups;
@property(retain) NSMutableArray * tileSets;
@property(retain) NSMutableArray * styleSheets;
@property(retain) NSMutableArray * textures;
@property(retain) NSMutableArray * fonts;
@property(retain) NSMutableArray * icons;
@property(retain) NSMutableArray * regionalResources;
@property(retain) NSMutableArray * xmls;
@property(retain) NSMutableArray * attributionBadges;
@property(retain) NSMutableArray * attributions;
@property(readonly) bool hasAuthToken;
@property(retain) NSString * authToken;
@property(readonly) bool hasResourcesURL;
@property(retain) NSString * resourcesURL;
@property(readonly) bool hasSearchURL;
@property(retain) NSString * searchURL;
@property(readonly) bool hasSearchAttributionManifestURL;
@property(retain) NSString * searchAttributionManifestURL;
@property(readonly) bool hasAutocompleteURL;
@property(retain) NSString * autocompleteURL;
@property(readonly) bool hasReverseGeocoderURL;
@property(retain) NSString * reverseGeocoderURL;
@property(readonly) bool hasForwardGeocoderURL;
@property(retain) NSString * forwardGeocoderURL;
@property(readonly) bool hasDirectionsURL;
@property(retain) NSString * directionsURL;
@property(readonly) bool hasEtaURL;
@property(retain) NSString * etaURL;
@property(readonly) bool hasLocationShiftURL;
@property(retain) NSString * locationShiftURL;
@property(readonly) bool hasReleaseInfo;
@property(retain) NSString * releaseInfo;
@property(readonly) bool hasBatchReverseGeocoderURL;
@property(retain) NSString * batchReverseGeocoderURL;
@property(readonly) bool hasMapMatchURL;
@property(retain) NSString * mapMatchURL;
@property(readonly) bool hasSimpleETAURL;
@property(retain) NSString * simpleETAURL;
@property(retain) NSMutableArray * styleSheetChecksums;
@property(retain) NSMutableArray * textureChecksums;
@property(retain) NSMutableArray * fontChecksums;
@property(retain) NSMutableArray * iconChecksums;
@property(retain) NSMutableArray * xmlChecksums;
@property(readonly) bool hasAddressCorrectionInitURL;
@property(retain) NSString * addressCorrectionInitURL;
@property(readonly) bool hasAddressCorrectionUpdateURL;
@property(retain) NSString * addressCorrectionUpdateURL;
@property(readonly) bool hasPolyLocationShiftURL;
@property(retain) NSString * polyLocationShiftURL;
@property(readonly) bool hasProblemSubmissionURL;
@property(retain) NSString * problemSubmissionURL;
@property(readonly) bool hasProblemStatusURL;
@property(retain) NSString * problemStatusURL;
@property(readonly) bool hasReverseGeocoderVersionsURL;
@property(retain) NSString * reverseGeocoderVersionsURL;
@property(readonly) bool hasProblemCategoriesURL;
@property(retain) NSString * problemCategoriesURL;
@property(readonly) bool hasUsageURL;
@property(retain) NSString * usageURL;
@property(readonly) bool hasBusinessCallerIDURL;
@property(retain) NSString * businessCallerIDURL;
@property(readonly) bool hasProblemNotificationAvailabilityURL;
@property(retain) NSString * problemNotificationAvailabilityURL;
@property(readonly) bool hasAnnouncementsURL;
@property(retain) NSString * announcementsURL;
@property(retain) NSMutableArray * announcementsSupportedLanguages;
@property(readonly) bool hasBusinessNameResolutionURL;
@property(retain) NSString * businessNameResolutionURL;
@property(readonly) bool hasDispatcherURL;
@property(retain) NSString * dispatcherURL;
@property(readonly) bool hasProblemOptInURL;
@property(retain) NSString * problemOptInURL;
@property(readonly) bool hasVersionManifest;
@property(retain) GEOVersionManifest * versionManifest;


- (id)problemOptInURL;
- (id)dispatcherURL;
- (id)businessNameResolutionURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsURL;
- (id)problemNotificationAvailabilityURL;
- (id)businessCallerIDURL;
- (id)usageURL;
- (id)problemCategoriesURL;
- (id)reverseGeocoderVersionsURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (id)polyLocationShiftURL;
- (id)addressCorrectionUpdateURL;
- (id)addressCorrectionInitURL;
- (id)xmlChecksums;
- (id)iconChecksums;
- (id)fontChecksums;
- (id)textureChecksums;
- (id)styleSheetChecksums;
- (id)simpleETAURL;
- (id)mapMatchURL;
- (id)releaseInfo;
- (id)locationShiftURL;
- (id)etaURL;
- (id)autocompleteURL;
- (id)searchAttributionManifestURL;
- (id)resourcesURL;
- (id)authToken;
- (id)attributionBadges;
- (id)xmls;
- (id)regionalResources;
- (id)fonts;
- (id)textures;
- (id)tileGroups;
- (bool)hasVersionManifest;
- (bool)hasProblemOptInURL;
- (bool)hasDispatcherURL;
- (bool)hasBusinessNameResolutionURL;
- (bool)hasAnnouncementsURL;
- (bool)hasProblemNotificationAvailabilityURL;
- (bool)hasBusinessCallerIDURL;
- (bool)hasUsageURL;
- (bool)hasProblemCategoriesURL;
- (bool)hasReverseGeocoderVersionsURL;
- (bool)hasProblemStatusURL;
- (bool)hasProblemSubmissionURL;
- (bool)hasPolyLocationShiftURL;
- (bool)hasAddressCorrectionUpdateURL;
- (bool)hasAddressCorrectionInitURL;
- (bool)hasSimpleETAURL;
- (bool)hasMapMatchURL;
- (bool)hasBatchReverseGeocoderURL;
- (bool)hasReleaseInfo;
- (bool)hasLocationShiftURL;
- (bool)hasEtaURL;
- (bool)hasDirectionsURL;
- (bool)hasForwardGeocoderURL;
- (bool)hasReverseGeocoderURL;
- (bool)hasAutocompleteURL;
- (bool)hasSearchAttributionManifestURL;
- (bool)hasSearchURL;
- (bool)hasResourcesURL;
- (bool)hasAuthToken;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (void)clearAnnouncementsSupportedLanguages;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (void)clearXmlChecksums;
- (unsigned long long)xmlChecksumsCount;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (void)clearIconChecksums;
- (unsigned long long)iconChecksumsCount;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (void)clearFontChecksums;
- (unsigned long long)fontChecksumsCount;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (void)clearTextureChecksums;
- (unsigned long long)textureChecksumsCount;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (void)clearStyleSheetChecksums;
- (unsigned long long)styleSheetChecksumsCount;
- (id)attributionBadgeAtIndex:(unsigned long long)arg1;
- (void)clearAttributionBadges;
- (unsigned long long)attributionBadgesCount;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (void)clearXmls;
- (unsigned long long)xmlsCount;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (void)clearRegionalResources;
- (unsigned long long)regionalResourcesCount;
- (id)iconAtIndex:(unsigned long long)arg1;
- (void)clearIcons;
- (unsigned long long)iconsCount;
- (id)fontAtIndex:(unsigned long long)arg1;
- (void)clearFonts;
- (unsigned long long)fontsCount;
- (id)textureAtIndex:(unsigned long long)arg1;
- (void)clearTextures;
- (unsigned long long)texturesCount;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (void)clearStyleSheets;
- (unsigned long long)styleSheetsCount;
- (id)tileGroupAtIndex:(unsigned long long)arg1;
- (void)clearTileGroups;
- (unsigned long long)tileGroupsCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addAttributionBadge:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addTileGroup:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setBusinessNameResolutionURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setProblemNotificationAvailabilityURL:(id)arg1;
- (void)setBusinessCallerIDURL:(id)arg1;
- (void)setUsageURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setXmlChecksums:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setFontChecksums:(id)arg1;
- (void)setTextureChecksums:(id)arg1;
- (void)setStyleSheetChecksums:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setMapMatchURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setLocationShiftURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setForwardGeocoderURL:(id)arg1;
- (void)setReverseGeocoderURL:(id)arg1;
- (void)setAutocompleteURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSearchURL:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setAttributionBadges:(id)arg1;
- (void)setXmls:(id)arg1;
- (void)setRegionalResources:(id)arg1;
- (void)setFonts:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setStyleSheets:(id)arg1;
- (void)setTileGroups:(id)arg1;
- (id)batchReverseGeocoderURL;
- (id)reverseGeocoderURL;
- (id)forwardGeocoderURL;
- (id)tileSets;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (void)clearTileSets;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)searchURL;
- (id)directionsURL;
- (id)versionManifest;
- (id)attributions;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (void)clearAttributions;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)styleSheets;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)setIcons:(id)arg1;
- (id)icons;

@end
