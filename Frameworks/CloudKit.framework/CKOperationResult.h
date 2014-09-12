/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, NSError, NSArray;

@interface CKOperationResult : NSObject <NSSecureCoding> {
    NSString *_operationID;
    NSError *_error;
    NSArray *_requestUUIDs;
}

@property(retain) NSString * operationID;
@property(retain) NSError * error;
@property(retain) NSArray * requestUUIDs;

+ (bool)supportsSecureCoding;

- (void)setRequestUUIDs:(id)arg1;
- (id)requestUUIDs;
- (void)setOperationID:(id)arg1;
- (id)operationID;
- (id)CKPropertiesDescription;
- (void)setError:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
