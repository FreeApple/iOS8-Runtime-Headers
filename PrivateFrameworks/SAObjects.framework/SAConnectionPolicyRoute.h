/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSNumber;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable> {
}

@property(copy) NSString * cname;
@property(copy) NSString * host;
@property(copy) NSNumber * mptcp;
@property long long priority;
@property(copy) NSString * resolver;
@property(copy) NSString * resolverProtocol;
@property(copy) NSString * routeId;
@property(copy) NSNumber * timeout;
@property(copy) NSString * type;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)connectionPolicyRoute;

- (void)setRouteId:(id)arg1;
- (id)routeId;
- (void)setResolverProtocol:(id)arg1;
- (id)resolverProtocol;
- (void)setResolver:(id)arg1;
- (id)resolver;
- (void)setMptcp:(id)arg1;
- (id)mptcp;
- (void)setCname:(id)arg1;
- (id)cname;
- (id)encodedClassName;
- (id)timeout;
- (void)setHost:(id)arg1;
- (id)host;
- (void)setType:(id)arg1;
- (void)setPriority:(long long)arg1;
- (long long)priority;
- (id)type;
- (void)setTimeout:(id)arg1;
- (id)groupIdentifier;

@end
