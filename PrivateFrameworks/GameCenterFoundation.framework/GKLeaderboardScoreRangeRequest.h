/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest  {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (bool)supportsSecureCoding;

- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
