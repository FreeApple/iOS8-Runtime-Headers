/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Predicate : NSObject <NSCoding, NSCopying> {
}


- (id)SQLForEntityClass:(Class)arg1;
- (bool)isFalseAlways;
- (bool)isTrueAlways;
- (id)spotlightPredicate;
- (bool)isDynamicForEntityClass:(Class)arg1;
- (id)predicateOptimizedForEntityClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
