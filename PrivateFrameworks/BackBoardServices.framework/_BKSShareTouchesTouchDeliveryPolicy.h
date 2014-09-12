/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSObject<OS_xpc_object>;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy  {
    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property(readonly) unsigned int childContextId;
@property(readonly) unsigned int hostContextId;

+ (bool)supportsSecureCoding;

- (unsigned int)hostContextId;
- (unsigned int)childContextId;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
- (id)matchSharingTouchesPolicy:(id)arg1 orCancelTouchesPolicy:(id)arg2 orCombinedPolicy:(id)arg3;
- (id)initWithChildContextId:(unsigned int)arg1 hostContextId:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
