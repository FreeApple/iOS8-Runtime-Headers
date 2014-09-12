/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying> {
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSString *_nickname;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

@property(copy) NSString * body;
@property(copy) NSString * nickname;
@property float rating;
@property(copy) NSString * title;
@property(readonly) NSURL * submitURL;
@property(readonly) unsigned long long bodyMaxLength;
@property(readonly) unsigned long long nicknameMaxLength;
@property(readonly) unsigned long long titleMaxLength;


- (id)initWithReviewDictionary:(id)arg1;
- (unsigned long long)titleMaxLength;
- (id)submitURL;
- (float)rating;
- (unsigned long long)nicknameMaxLength;
- (id)nickname;
- (unsigned long long)bodyMaxLength;
- (void)setRating:(float)arg1;
- (void)setNickname:(id)arg1;
- (void)setBody:(id)arg1;
- (id)body;
- (void)setTitle:(id)arg1;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
