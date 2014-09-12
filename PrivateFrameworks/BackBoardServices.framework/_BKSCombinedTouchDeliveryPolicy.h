/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy  {
    NSArray *_policies;
}

@property(readonly) NSArray * policies;

+ (bool)supportsSecureCoding;

- (id)policies;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
- (id)matchSharingTouchesPolicy:(id)arg1 orCancelTouchesPolicy:(id)arg2 orCombinedPolicy:(id)arg3;
- (id)initWithPolicies:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
