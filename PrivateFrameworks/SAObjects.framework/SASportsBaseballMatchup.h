/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup  {
}

@property(copy) NSNumber * awayErrors;
@property(copy) NSNumber * awayHits;
@property(copy) NSNumber * balls;
@property(copy) NSNumber * homeErrors;
@property(copy) NSNumber * homeHits;
@property(copy) NSString * inningStatus;
@property(copy) NSNumber * onFirst;
@property(copy) NSNumber * onSecond;
@property(copy) NSNumber * onThird;
@property(copy) NSNumber * outs;
@property(copy) NSNumber * strikes;

+ (id)baseballMatchupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseballMatchup;

- (void)setStrikes:(id)arg1;
- (id)strikes;
- (void)setOuts:(id)arg1;
- (id)outs;
- (void)setOnThird:(id)arg1;
- (id)onThird;
- (void)setOnSecond:(id)arg1;
- (id)onSecond;
- (void)setOnFirst:(id)arg1;
- (id)onFirst;
- (void)setInningStatus:(id)arg1;
- (id)inningStatus;
- (void)setHomeHits:(id)arg1;
- (id)homeHits;
- (void)setHomeErrors:(id)arg1;
- (id)homeErrors;
- (void)setBalls:(id)arg1;
- (id)balls;
- (void)setAwayHits:(id)arg1;
- (id)awayHits;
- (void)setAwayErrors:(id)arg1;
- (id)awayErrors;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
