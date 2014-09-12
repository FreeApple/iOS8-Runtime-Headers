/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy> {
    NSObject<OS_dispatch_queue> *_requestQ;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 requesterHandler:(id)arg3;
- (void)trackPlaceData:(id)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 requesterHandler:(id)arg4;
- (void)requestMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3 requesterHandler:(id)arg4;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (id)init;
- (void)dealloc;

@end
