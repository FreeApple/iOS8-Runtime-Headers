/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, <MPArtworkDataSource>, NSCache;

@interface MPArtworkCatalog : NSObject  {
    struct CGSize { 
        double width; 
        double height; 
    } _fittingSize;
    bool_loadingRepresentation;
    double _destinationScale;
    id _token;
    <MPArtworkDataSource> *_dataSource;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _configurationBlock;

}

@property double destinationScale;
@property struct CGSize { double x1; double x2; } fittingSize;
@property(readonly) struct CGSize { double x1; double x2; } scaledFittingSize;
@property(retain) id token;
@property <MPArtworkDataSource> * dataSource;
@property(readonly) NSCache * cache;
@property(copy) NSString * cacheIdentifier;
@property id requestingContext;
@property id destination;
@property(copy) id configurationBlock;
@property(getter=isLoadingRepresentation) bool loadingRepresentation;

+ (void)setCachePurgesWhenEnteringBackground:(bool)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCacheLimit:(unsigned long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;

- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (bool)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (void)setDestination:(id)arg1 configurationBlock:(id)arg2;
- (id)bestImageFromDisk;
- (void)requestImageWithCompletionHandler:(id)arg1;
- (void)setFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })scaledFittingSize;
- (void)setDestinationScale:(double)arg1;
- (void)_loadBestRepresentationIfNeeded;
- (void)_updateWithRepresentation:(id)arg1;
- (id)requestingContext;
- (id)cacheIdentifier;
- (void)setRequestingContext:(id)arg1;
- (void)setCacheIdentifier:(id)arg1;
- (void)_updateRepresentation;
- (void)setLoadingRepresentation:(bool)arg1;
- (double)destinationScale;
- (struct CGSize { double x1; double x2; })fittingSize;
- (bool)isLoadingRepresentation;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;
- (void)setDataSource:(id)arg1;
- (id)destination;
- (id)token;
- (void)setToken:(id)arg1;
- (id)dataSource;
- (id)cache;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)setConfigurationBlock:(id)arg1;
- (id)configurationBlock;
- (void)setDestination:(id)arg1;

@end
