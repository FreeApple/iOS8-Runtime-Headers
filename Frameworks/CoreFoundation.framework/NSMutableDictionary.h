/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary  {
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)nonRetainingDictionary;
+ (id)retainingKeyDictionary;
+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;
+ (id)MSASDictionaryWithCopyOfDictionary:(id)arg1;
+ (id)dictionaryByInvertingDictionaryIfPossible:(id)arg1;
+ (id)dictionaryByInvertingDictionary:(id)arg1;

- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)removeKeysForObject:(id)arg1;
- (void)removeEntriesPassingTest:(id)arg1;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)_mutate;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)invert;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (void)_web_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;
- (void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedInt:(unsigned int)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)_webkit_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_webkit_setFloat:(float)arg1 forKey:(id)arg2;
- (void)_webkit_setInt:(int)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionaryWithRecursion:(id)arg1;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCSetBoolRestriction:(id)arg1 value:(bool)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (void)mergeWithDictionary:(id)arg1;
- (void)CDVAddObjectsAndKeys:(id)arg1;
- (id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(id)arg2;
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)mf_fixupRFC2231Values;
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)_gkAddEntriesFromFormEncodedString:(id)arg1;
- (void)mf_addObject:(id)arg1 forKey:(id)arg2;
- (void)mf_setInteger:(int)arg1 forKey:(id)arg2;
- (void)mf_setBool:(bool)arg1 forKey:(id)arg2;
- (id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)MSASAddIsErrorRecovery;
- (id)MSASAddNotInterestingKey;
- (id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1;
- (id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1;
- (id)MSASAddIsLocalChange;
- (id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1;
- (id)MSASAddIsGlobalResetSync;
- (id)MSASAddDictionary:(id)arg1;
- (void)pl_enforceCorrectValuesForMinKey:(id)arg1 maxKey:(id)arg2;
- (void)pl_applyOrientation:(long long)arg1 toNormalizedPointWithXKey:(id)arg2 yKey:(id)arg3;
- (void)setAsString:(id)arg1 forKey:(id)arg2;
- (id)addToCacheAndReturnCssString:(id)arg1;
- (id)objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)objectForKey:(id)arg1 withDefaultUsingBlock:(id)arg2;
- (void)blj_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;

@end
