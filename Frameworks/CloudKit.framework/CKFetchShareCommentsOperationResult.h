/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKCommentCursor;

@interface CKFetchShareCommentsOperationResult : CKOperationResult  {
    CKCommentCursor *_cursor;
}

@property(retain) CKCommentCursor * cursor;

+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)cursor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setCursor:(id)arg1;

@end
