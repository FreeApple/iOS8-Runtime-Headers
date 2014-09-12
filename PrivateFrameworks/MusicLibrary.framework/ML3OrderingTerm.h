/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding> {
    int _direction;
    NSString *_property;
    NSString *_collation;
}

@property(readonly) NSString * property;
@property(readonly) int direction;
@property(readonly) NSString * collation;

+ (id)orderingTermWithProperty:(id)arg1;
+ (id)orderingTermWithProperty:(id)arg1 direction:(int)arg2;

- (id)collation;
- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;
- (id)initWithProperty:(id)arg1 direction:(int)arg2;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)property;
- (id)initWithProperty:(id)arg1;
- (int)direction;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
