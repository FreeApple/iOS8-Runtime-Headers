/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSLock, NSMutableSet, NSMutableDictionary;

@interface __NSBundleTables : NSObject  {
    NSLock *_lock;
    NSMutableSet *_staticFrameworks;
    NSMutableSet *_loadedBundles;
    NSMutableSet *_loadedFrameworks;
    NSMutableDictionary *_resolvedPathToBundles;
    struct __CFDictionary { } *_bundleForClassMap;
}

+ (id)bundleTables;

- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)addBundle:(id)arg1 forPath:(id)arg2;
- (void)addBundle:(id)arg1 type:(unsigned long long)arg2;
- (id)bundleForPath:(id)arg1;
- (id)allFrameworks;
- (void)addStaticFrameworkBundles:(id)arg1;
- (id)allBundles;
- (id)loadedBundles;
- (void)setBundle:(id)arg1 forClass:(Class)arg2;
- (id)bundleForClass:(Class)arg1;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3;

@end
