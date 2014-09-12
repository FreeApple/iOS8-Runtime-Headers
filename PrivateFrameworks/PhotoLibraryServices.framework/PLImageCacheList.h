/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, PLLoadRequestKey;

@interface PLImageCacheList : NSObject  {
    NSObject<OS_dispatch_queue> *_isolation;
    unsigned int _length;
    unsigned int _lastFailLocation;
    id *_keys;
    unsigned long long *_keyHashes;
    id *_images;
    PLLoadRequestKey *_dummy[1];
}

+ (id)newImageCacheList;

- (void)removeImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)_init;

@end
