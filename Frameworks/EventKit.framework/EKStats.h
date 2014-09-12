/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSMutableDictionary;

@interface EKStats : NSObject  {
    int _domain;
    NSMutableDictionary *_scalarOperations;
    NSMutableDictionary *_distributionOperations;
}

+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)clearDistribution:(id)arg1 domain:(int)arg2;
+ (void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;
+ (void)clearScalar:(id)arg1 domain:(int)arg2;
+ (void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;
+ (bool)enabled;

- (id)initWithDomain:(int)arg1;
- (void)setDistribution:(id)arg1 value:(double)arg2;
- (void)addToScalar:(id)arg1 value:(long long)arg2;
- (void)setScalar:(id)arg1 value:(long long)arg2;
- (void)clearScalar:(id)arg1;
- (void)pushToDistribution:(id)arg1 value:(double)arg2;
- (void)clearDistribution:(id)arg1;
- (void)commit;
- (void)dealloc;

@end
