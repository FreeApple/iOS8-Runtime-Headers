/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker  {
    unsigned long long _chapterIndex;
    NSArray *_chapters;
    bool_hasArtworkAtPlaybackTime;
}

@property unsigned long long chapterIndex;
@property(retain) NSArray * chapters;
@property bool hasArtworkAtPlaybackTime;


- (id)chapters;
- (void)setHasArtworkAtPlaybackTime:(bool)arg1;
- (void)setChapters:(id)arg1;
- (void)setChapterIndex:(unsigned long long)arg1;
- (unsigned long long)chapterIndex;
- (bool)hasArtworkAtPlaybackTime;
- (void).cxx_destruct;

@end
