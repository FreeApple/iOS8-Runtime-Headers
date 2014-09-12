/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * category;
@property(copy) NSString * originalCommandId;
@property(copy) NSDictionary * timings;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metrics;

- (id)timings;
- (id)encodedClassName;
- (void)setTimings:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (id)originalCommandId;
- (id)category;
- (id)groupIdentifier;
- (void)setCategory:(id)arg1;

@end
