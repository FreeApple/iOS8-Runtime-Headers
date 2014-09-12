/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying> {
    NSString *_bundleIdentifier;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property(readonly) bool hasBundleIdentifier;
@property(retain) NSString * bundleIdentifier;
@property(readonly) bool hasUserPrivacySettings;
@property(retain) CKDPUserPrivacySettings * userPrivacySettings;

+ (id)options;

- (id)userPrivacySettings;
- (bool)hasUserPrivacySettings;
- (void)setUserPrivacySettings:(id)arg1;
- (bool)hasBundleIdentifier;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (id)bundleIdentifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
