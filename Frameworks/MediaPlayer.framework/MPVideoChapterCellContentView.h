/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPImageCacheRequest, UIImage, MPTimeMarker, MPImageCache;

@interface MPVideoChapterCellContentView : UIView  {
    unsigned int _current : 1;
    unsigned int _index;
    unsigned int _selected : 1;
    unsigned int _showThumbnailColumn : 1;
    float _timeColumnWidth;
    MPTimeMarker *_timeMarker;
    UIImage *_artwork;
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
}

@property(getter=isCurrent) BOOL current;
@property unsigned int index;
@property(getter=isSelected) BOOL selected;
@property BOOL showThumbnailColumn;
@property float timeColumnWidth;
@property(retain) MPTimeMarker * timeMarker;
@property(retain) UIImage * artwork;
@property(retain) MPImageCache * artworkImageCache;


- (void)setArtwork:(id)arg1;
- (id)artwork;
- (id)artworkImageCache;
- (id)timeMarker;
- (float)timeColumnWidth;
- (BOOL)showThumbnailColumn;
- (BOOL)isCurrent;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
- (void)setArtworkImageCache:(id)arg1;
- (void)setShowThumbnailColumn:(BOOL)arg1;
- (void)setTimeColumnWidth:(float)arg1;
- (void)setCurrent:(BOOL)arg1;
- (void)setTimeMarker:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;

@end