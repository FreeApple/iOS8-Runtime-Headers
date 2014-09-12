/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy : NSObject <NSSecureCoding, NSFastEnumeration> {
}

@property(readonly) unsigned long long length;
@property(readonly) id* keys;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;

- (id)initForKeys:(id)arg1;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (id)initForKeys:(id*)arg1 count:(unsigned long long)arg2;
- (id*)keys;
- (unsigned long long)length;
- (unsigned long long)indexForKey:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
