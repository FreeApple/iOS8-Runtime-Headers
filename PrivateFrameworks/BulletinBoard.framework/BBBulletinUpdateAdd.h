/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinUpdateAdd : BBBulletinUpdate  {
    bool_shouldPlayLightsAndSirens;
}

@property(readonly) bool shouldPlayLightsAndSirens;

+ (bool)supportsSecureCoding;

- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3 shouldPlayLightsAndSirens:(bool)arg4;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3;
- (bool)shouldPlayLightsAndSirens;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
