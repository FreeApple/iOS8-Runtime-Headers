/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

+ (bool)supportsSecureCoding;

- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(bool)arg3 error:(id*)arg4;
- (id)initWithDocumentIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
