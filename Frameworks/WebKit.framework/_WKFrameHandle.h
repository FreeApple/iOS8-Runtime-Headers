/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface _WKFrameHandle : NSObject <WKObject, NSCopying, NSSecureCoding> {
    struct ObjectStorage<API::FrameHandle> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    } _frameHandle;
}

@property(readonly) unsigned long long _frameID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;

+ (bool)supportsSecureCoding;

- (unsigned long long)_frameID;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
