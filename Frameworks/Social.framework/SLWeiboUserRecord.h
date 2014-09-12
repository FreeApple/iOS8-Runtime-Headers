/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSNumber, NSURL;

@interface SLWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSNumber *_uid;
    NSURL *_objectID;
}

@property(copy) NSNumber * uid;
@property(retain) NSURL * objectID;

+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setValuesWithUserDictionary:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)uid;

@end
