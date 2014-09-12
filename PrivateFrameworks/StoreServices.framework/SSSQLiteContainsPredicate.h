/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSArray, SSSQLiteQuery;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying> {
    bool_negative;
    SSSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

@property(getter=isNegative,readonly) bool negative;
@property(readonly) SSSQLiteQuery * query;
@property(readonly) NSString * queryProperty;
@property(readonly) NSArray * values;

+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;

- (id)queryProperty;
- (bool)isNegative;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)values;
- (id)query;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
