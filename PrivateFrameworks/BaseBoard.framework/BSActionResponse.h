/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSError, BSSettings, NSString;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider> {
    BSSettings *_info;
    NSError *_error;
}

@property(copy,readonly) BSSettings * info;
@property(retain,readonly) NSError * error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)responseWithInfo:(id)arg1;
+ (id)responseForError:(id)arg1;
+ (id)response;

- (id)info;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)error;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
