/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle  {
    unsigned long long _deleteCount;
}

+ (int)type;
+ (bool)supportsSecureCoding;

- (id)label;
- (id)initWithCandidate:(id)arg1 deleteCount:(unsigned long long)arg2;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
