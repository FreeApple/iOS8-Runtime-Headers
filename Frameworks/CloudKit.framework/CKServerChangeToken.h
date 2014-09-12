/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSData;

@interface CKServerChangeToken : NSObject <NSCopying, NSSecureCoding> {
    NSData *_data;
}

@property(retain) NSData * data;

+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)init;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setData:(id)arg1;

@end
