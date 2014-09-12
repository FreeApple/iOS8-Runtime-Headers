/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString, BSMutableSettings, NSHashTable, <BSSettingDescriptionProvider>;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding> {
    <BSSettingDescriptionProvider> *_descriptionProvider;
    BSMutableSettings *_changes;
    NSHashTable *_flagRemovals;
    NSHashTable *_objectRemovals;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_newHashTableWithInitialCapacity:(unsigned long long)arg1;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (id)descriptionOfSettingsWithMultilinePrefix:(id)arg1 providerBlock:(id)arg2;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (id)allSettings;
- (void)_enumerateSettingsInTable:(id)arg1 withBlock:(id)arg2;
- (id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(id)arg1;
- (void)applyToSettings:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
