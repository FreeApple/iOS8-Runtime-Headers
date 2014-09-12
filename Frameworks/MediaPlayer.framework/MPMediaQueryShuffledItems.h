/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSMutableArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _activeShuffleType;
    bool_dirty;
    NSMutableArray *_orderedArray;
    MPMediaQuery *_sourceMediaQuery;
    NSArray *_sourceMediaQueryItems;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _focusedRange;
}

@property(readonly) MPMediaQuery * sourceMediaQuery;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } focusedRange;
@property(copy,readonly) NSArray * items;
@property(readonly) unsigned long long realShuffleType;

+ (bool)supportsSecureCoding;

- (void)setFocusedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })focusedRange;
- (id)sourceMediaQuery;
- (void)unshuffle;
- (void)shuffleItemsWithInitialIndex:(unsigned long long)arg1;
- (void)shuffleAlbumsWithInitialIndex:(unsigned long long)arg1;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1;
- (id)initWithSourceMediaQuery:(id)arg1;
- (id)_includeInShuffleItemsForQuery:(id)arg1;
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned long long)arg1;
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned long long)arg1;
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned long long)arg1;
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned long long)arg2;
- (void)_rebuildCaches;
- (id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned long long)arg3;
- (unsigned long long)realShuffleType;
- (void)_resetCaches;
- (id)items;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
