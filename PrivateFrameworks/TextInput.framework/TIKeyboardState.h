/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIDocumentState, NSString, TIKeyboardCandidate, TITextInputTraits, TIKeyboardLayout, TIKeyboardLayoutState;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { 
        long long integerValue; 
        struct { 
            unsigned int userSelectedCurrentCandidate : 1; 
            unsigned int shouldSkipCandidateSelection : 1; 
            unsigned int suppressingCandidateSelection : 1; 
            unsigned int needsCandidateMetadata : 1; 
            unsigned int keyboardEventsLagging : 1; 
            unsigned int hardwareKeyboardMode : 1; 
            unsigned int splitKeyboardMode : 1; 
            unsigned int wordLearningEnabled : 1; 
            unsigned int autocorrectionEnabled : 1; 
            unsigned int shortcutConversionEnabled : 1; 
            unsigned int typologyLoggingEnabled : 1; 
            unsigned int autocapitalizationEnabled : 1; 
        } fields; 
    } _mask;
    union { 
        long long integerValue; 
        struct { 
            unsigned int displayed : 1; 
            unsigned int autoDisplayMode : 1; 
        } fields; 
    } _autocorrectionListUIState;
    int _shiftState;
    NSString *_clientIdentifier;
    NSString *_inputMode;
    NSString *_recipientIdentifier;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIDocumentState *_documentState;
    NSString *_inputForMarkedText;
    NSString *_searchStringForMarkedText;
    TIKeyboardCandidate *_currentCandidate;
    TITextInputTraits *_textInputTraits;
    NSString *_responseContext;
}

@property(copy) NSString * clientIdentifier;
@property(copy) NSString * inputMode;
@property(copy) NSString * recipientIdentifier;
@property(retain) TIKeyboardLayout * keyLayout;
@property int shiftState;
@property(copy) TIKeyboardLayoutState * layoutState;
@property(retain) TIDocumentState * documentState;
@property(copy) NSString * inputForMarkedText;
@property(copy) NSString * searchStringForMarkedText;
@property(retain) TIKeyboardCandidate * currentCandidate;
@property bool userSelectedCurrentCandidate;
@property bool shouldSkipCandidateSelection;
@property bool suppressingCandidateSelection;
@property bool needsCandidateMetadata;
@property bool keyboardEventsLagging;
@property bool hardwareKeyboardMode;
@property bool splitKeyboardMode;
@property bool wordLearningEnabled;
@property bool autocorrectionEnabled;
@property bool shortcutConversionEnabled;
@property bool autocapitalizationEnabled;
@property(retain) TITextInputTraits * textInputTraits;
@property(copy) NSString * responseContext;
@property unsigned long long autocapitalizationType;
@property unsigned long long keyboardType;
@property bool secureTextEntry;
@property bool autocorrectionListUIDisplayed;
@property bool autocorrectionListUIAutoDisplayMode;

+ (bool)supportsSecureCoding;

- (void)setAutocorrectionListUIAutoDisplayMode:(bool)arg1;
- (bool)autocorrectionListUIAutoDisplayMode;
- (bool)autocorrectionListUIDisplayed;
- (id)responseContext;
- (bool)autocapitalizationEnabled;
- (bool)shortcutConversionEnabled;
- (bool)autocorrectionEnabled;
- (bool)wordLearningEnabled;
- (bool)splitKeyboardMode;
- (bool)keyboardEventsLagging;
- (bool)needsCandidateMetadata;
- (bool)suppressingCandidateSelection;
- (bool)shouldSkipCandidateSelection;
- (bool)userSelectedCurrentCandidate;
- (id)inputForMarkedText;
- (id)layoutState;
- (id)keyLayout;
- (id)recipientIdentifier;
- (id)clientIdentifier;
- (void)setSecureTextEntry:(bool)arg1;
- (bool)secureTextEntry;
- (void)setKeyboardType:(unsigned long long)arg1;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (void)_createTextInputTraitsIfNecessary;
- (unsigned long long)autocapitalizationType;
- (id)textInputTraits;
- (id)inputMode;
- (id)searchStringForMarkedText;
- (id)currentCandidate;
- (id)documentState;
- (bool)hardwareKeyboardMode;
- (unsigned long long)keyboardType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setKeyboardEventsLagging:(bool)arg1;
- (void)setUserSelectedCurrentCandidate:(bool)arg1;
- (void)setSuppressingCandidateSelection:(bool)arg1;
- (void)setShiftState:(int)arg1;
- (int)shiftState;
- (void)setAutocapitalizationEnabled:(bool)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setInputForMarkedText:(id)arg1;
- (void)setShouldSkipCandidateSelection:(bool)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setWordLearningEnabled:(bool)arg1;
- (void)setSplitKeyboardMode:(bool)arg1;
- (void)setAutocorrectionEnabled:(bool)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setAutocorrectionListUIDisplayed:(bool)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setShortcutConversionEnabled:(bool)arg1;
- (void)setNeedsCandidateMetadata:(bool)arg1;
- (void)setCurrentCandidate:(id)arg1;
- (void)setLayoutState:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setHardwareKeyboardMode:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;

@end
