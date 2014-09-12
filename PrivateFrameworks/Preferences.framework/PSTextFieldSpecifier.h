/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier  {
    SEL bestGuess;
    NSString *_placeholder;
}

+ (id)specifierWithSpecifier:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;

- (bool)isEqualToSpecifier:(id)arg1;
- (void)dealloc;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;

@end
