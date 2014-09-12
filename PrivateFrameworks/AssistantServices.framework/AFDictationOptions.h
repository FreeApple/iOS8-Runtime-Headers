/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying> {
    NSString *_applicationName;
    NSString *_applicationVersion;
    NSString *_fieldLabel;
    NSString *_fieldIdentifier;
    NSString *_interactionIdentifier;
    long long _keyboardType;
    NSString *_prefixText;
    NSString *_postfixText;
    NSString *_selectedText;
    long long _returnKeyType;
    long long _transcriptionMode;
    NSString *_languageCodeOverride;
}

@property(copy) NSString * applicationName;
@property(copy) NSString * applicationVersion;
@property(copy) NSString * fieldLabel;
@property(copy) NSString * fieldIdentifier;
@property(copy) NSString * interactionIdentifier;
@property long long keyboardType;
@property(copy) NSString * prefixText;
@property(copy) NSString * postfixText;
@property(copy) NSString * selectedText;
@property long long returnKeyType;
@property long long transcriptionMode;
@property(copy) NSString * languageCodeOverride;

+ (bool)supportsSecureCoding;

- (id)dictationOptionsWithoutTextContext;
- (void)setTranscriptionMode:(long long)arg1;
- (long long)transcriptionMode;
- (void)setLanguageCodeOverride:(id)arg1;
- (id)languageCodeOverride;
- (void)setInteractionIdentifier:(id)arg1;
- (id)interactionIdentifier;
- (id)fieldIdentifier;
- (id)fieldLabel;
- (id)applicationName;
- (id)applicationVersion;
- (long long)returnKeyType;
- (void)setKeyboardType:(long long)arg1;
- (long long)keyboardType;
- (id)selectedText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)postfixText;
- (void)setSelectedText:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (id)prefixText;
- (void)setApplicationVersion:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;

@end
