/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString;

@interface CKObjCType : NSObject  {
    long long _code;
    NSString *_encoding;
    NSString *_name;
    NSString *_className;
    unsigned long long _size;
    unsigned long long _flags;
}

@property(readonly) long long code;
@property(readonly) NSString * encoding;
@property(readonly) NSString * name;
@property(readonly) NSString * className;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long flags;
@property(getter=isNumber,readonly) bool number;
@property(getter=isIntegerNumber,readonly) bool integerNumber;
@property(getter=isFloatingPointNumber,readonly) bool floatingPointNumber;
@property(getter=isObject,readonly) bool object;

+ (id)typeForValue:(id)arg1;
+ (id)typeForEncoding:(const char *)arg1;

- (id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (bool)isFloatingPointNumber;
- (bool)isIntegerNumber;
- (void)getBytes:(void*)arg1 forObject:(id)arg2;
- (id)objectWithBytes:(const void*)arg1;
- (bool)isObject;
- (bool)isNumber;
- (id)encoding;
- (id)name;
- (long long)code;
- (void).cxx_destruct;
- (unsigned long long)size;
- (unsigned long long)flags;
- (id)className;

@end
