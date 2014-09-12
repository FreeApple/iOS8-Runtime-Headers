/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray, GEOSearchAttributionInfo, NSString;

@interface GEOMapItemAttribution : NSObject  {
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

@property(readonly) NSString * providerName;
@property(readonly) NSArray * attributionURLs;
@property(readonly) NSArray * attributionApps;
@property(readonly) bool requiresAttributionInCallout;


- (bool)requiresAttributionInCallout;
- (id)providerSnippetLogoPathForScale:(double)arg1;
- (id)providerLogoPathForScale:(double)arg1;
- (id)providerName;
- (id)attributionApps;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)attributionURLs;
- (void)dealloc;

@end
