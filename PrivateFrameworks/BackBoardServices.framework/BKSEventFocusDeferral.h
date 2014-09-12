/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {
    BKSEventFocusDeferralProperties *_properties;
    BKSEventFocusDeferralProperties *_deferredProperties;
}

@property(readonly) BKSEventFocusDeferralProperties * properties;
@property(readonly) BKSEventFocusDeferralProperties * deferredProperties;

+ (bool)supportsSecureCoding;

- (id)deferredPropertiesForProperties:(id)arg1;
- (id)deferredProperties;
- (bool)defersProperties:(id)arg1;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)properties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
