/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSStorageReporting>, NSString, NSArray, PSWeakReference;

@interface PSUsageBundleApp : NSObject  {
    PSWeakReference *_storageReporterReference;
    float _totalSize;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
}

@property(retain) NSString * name;
@property(retain) NSString * bundleIdentifier;
@property(retain) NSArray * categories;
@property float totalSize;
@property <PSStorageReporting> * usageBundleStorageReporter;

+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2;
+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3;

- (float)totalSize;
- (id)usageBundleStorageReporter;
- (void)setCategories:(id)arg1;
- (void)setTotalSize:(float)arg1;
- (void)setUsageBundleStorageReporter:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (id)bundleIdentifier;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)categories;

@end
