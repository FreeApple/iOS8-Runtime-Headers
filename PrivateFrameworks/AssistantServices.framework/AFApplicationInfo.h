/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFApplicationInfo : NSObject <NSSecureCoding> {
    int _pid;
    NSString *_identifier;
}

@property(copy) NSString * identifier;
@property int pid;

+ (bool)supportsSecureCoding;

- (int)pid;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setPid:(int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
