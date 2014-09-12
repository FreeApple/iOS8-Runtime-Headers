/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {
    bool_temporary;
    int _entityType;
    int _rowID;
}

+ (id)objectIDWithURL:(id)arg1;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;
+ (id)objectIDWithCADObjectID:(struct { int x1; int x2; })arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (bool)supportsSecureCoding;

- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(bool)arg3;
- (struct { int x1; int x2; })CADObjectID;
- (int)rowID;
- (int)entityType;
- (id)URIRepresentation;
- (id)entityName;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isTemporary;
- (id)stringRepresentation;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
