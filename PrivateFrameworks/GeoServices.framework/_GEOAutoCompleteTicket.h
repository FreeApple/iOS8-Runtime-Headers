/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapServiceTraits, NSString, GEOSearchRequest;

@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket> {
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) GEOMapServiceTraits * traits;


- (void)submitWithAutoCompletionHandler:(id)arg1 networkActivity:(id)arg2;
- (bool)matchesFragment:(id)arg1;
- (id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2;
- (id)traits;
- (void)cancel;
- (void)dealloc;
- (id)description;

@end
