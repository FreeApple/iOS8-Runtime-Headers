/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSString, NSMutableArray, WebBookmarkCollection;

@interface WebBookmarkList : NSObject  {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    bool_customQuery;
    NSString *_query;
    unsigned int _folderID;
    WebBookmarkCollection *_collection;
}

@property(readonly) unsigned int folderID;


- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (unsigned int)folderID;
- (unsigned int)bookmarkCount;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (id)initWithFolderID:(unsigned int)arg1 inCollection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4 includeHidden:(bool)arg5;
- (id)initWithBookmarksWhere:(id)arg1 collection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4;
- (id)bookmarkArray;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (void)dealloc;

@end
