/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSString;

@interface NEPluginPreferences : NSObject  {
    struct __SCPreferences { } *_prefs;
    NSString *_pluginType;
}

@property struct __SCPreferences { }* prefs;
@property(readonly) NSString * pluginType;

+ (void)removePreferencesForPluginType:(id)arg1;

- (void)setPrefs:(struct __SCPreferences { }*)arg1;
- (struct __CFDictionary { }*)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2;
- (bool)setPreferences:(struct __CFDictionary { }*)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3;
- (bool)isFlagSet:(struct __CFString { }*)arg1;
- (id)copyAppURL;
- (void)setPluginTypeEnabled:(bool)arg1 appURLData:(id)arg2;
- (bool)isPluginTypeEnabled;
- (id)initWithPluginType:(id)arg1;
- (id)pluginType;
- (struct __SCPreferences { }*)prefs;
- (void)dealloc;
- (void).cxx_destruct;

@end
