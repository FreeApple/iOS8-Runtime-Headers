/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCacheEntry : NSObject  {
    id _object;
    struct lruEntry { id x1; long long x2; struct { struct lruEntry {} *x_3_1_1; struct lruEntry {} **x_3_1_2; } x3; } *_entry;
}


- (struct lruEntry { id x1; long long x2; struct { struct lruEntry {} *x_3_1_1; struct lruEntry {} **x_3_1_2; } x3; }*)lruListEntry;
- (void)setObject:(id)arg1;
- (id)object;
- (void)dealloc;

@end
