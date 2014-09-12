/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, CKShareID;

@interface CKModifyShareCommentsOperationInfo : CKOperationInfo  {
    CKShareID *_shareID;
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
}

@property(retain) CKShareID * shareID;
@property(retain) NSArray * commentsToSave;
@property(retain) NSArray * commentIDsToDelete;

+ (bool)supportsSecureCoding;

- (void)setCommentIDsToDelete:(id)arg1;
- (id)commentIDsToDelete;
- (void)setCommentsToSave:(id)arg1;
- (id)commentsToSave;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
