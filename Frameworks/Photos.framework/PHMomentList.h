/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSDate;

@interface PHMomentList : PHCollectionList  {
    short _granularityLevel;
    short _generationType;
    int _sortIndex;
    NSDate *_representativeDate;
}

@property(readonly) short granularityLevel;
@property(readonly) NSDate * representativeDate;
@property(readonly) int sortIndex;
@property(readonly) short generationType;

+ (id)identifierCode;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)managedEntityName;

- (long long)collectionListType;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)collectionHasFixedOrder;
- (bool)isMeaningful;
- (id)representativeDate;
- (int)sortIndex;
- (short)granularityLevel;
- (short)generationType;
- (void).cxx_destruct;
- (id)description;

@end
