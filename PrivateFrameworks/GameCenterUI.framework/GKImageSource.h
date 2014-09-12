/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKThreadsafeCache, NSString, UIImage, GKImageBrush;

@interface GKImageSource : NSObject  {
    bool_shouldRenderDefaultImageWithBrush;
    GKThreadsafeCache *_cache;
    NSString *_name;
    GKImageBrush *_imageBrush;
    UIImage *_defaultImage;
    UIImage *_renderedDefaultImage;
}

@property(readonly) NSString * name;
@property(readonly) GKImageBrush * imageBrush;
@property(retain) UIImage * defaultImage;
@property(retain) UIImage * renderedDefaultImage;
@property bool shouldRenderDefaultImageWithBrush;
@property(retain) GKThreadsafeCache * cache;

+ (id)cacheDirectoryForImageID:(id)arg1;
+ (id)syncQueue;
+ (id)sharedCache;
+ (void)clearCache;

- (void)setShouldRenderDefaultImageWithBrush:(bool)arg1;
- (void)setDefaultImage:(id)arg1;
- (id)defaultImage;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (unsigned long long)cacheCostForImage:(id)arg1;
- (id)subsourceWithBrush:(id)arg1;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (id)cachedImageForKey:(id)arg1;
- (void)validateFileSystemCache;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)renderedDefaultImage;
- (id)fastCachedImageForKey:(id)arg1;
- (id)keyForImageIdentifier:(id)arg1;
- (id)renderedTestImage;
- (bool)shouldUseTestImage;
- (void)setRenderedDefaultImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1;
- (bool)shouldRenderDefaultImageWithBrush;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize { double x1; double x2; })arg2 returnContext:(id*)arg3;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;
- (id)imageBrush;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)cache;
- (id)name;
- (void)dealloc;
- (void)setCache:(id)arg1;

@end
