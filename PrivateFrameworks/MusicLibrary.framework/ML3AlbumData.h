/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3AlbumData : NSObject  {
    int _userRating;
    int _albumYear;
    NSString *_sortAlbum;
    long long _albumPid;
}

@property(retain) NSString * sortAlbum;
@property long long albumPid;
@property int userRating;
@property int albumYear;


- (void)setAlbumPid:(long long)arg1;
- (id)initWithState:(long long)arg1 sortAlbum:(id)arg2 userRating:(int)arg3 albumYear:(int)arg4;
- (void)setAlbumYear:(int)arg1;
- (int)albumYear;
- (void)setSortAlbum:(id)arg1;
- (id)sortAlbum;
- (long long)albumPid;
- (int)userRating;
- (void)setUserRating:(int)arg1;
- (void).cxx_destruct;

@end
