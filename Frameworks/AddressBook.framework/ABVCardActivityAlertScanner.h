/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABVCardActivityAlertScanner : NSObject  {
    NSString *_string;
    unsigned long long _position;
}

+ (id)scanAlertValueFromString:(id)arg1;
+ (bool)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scannerWithString:(id)arg1;

- (void)scanPastWhitespace;
- (unsigned short)scanCharacterWithEscaping:(bool)arg1;
- (bool)scanPastCharacter:(unsigned short)arg1;
- (unsigned short)scanCharacter;
- (id)scanUnquotedStringValue;
- (id)scanQuotedStringValue;
- (unsigned short)nextUnescapedCharacter;
- (bool)atEnd;
- (bool)scanPastKeyValueSeparator;
- (id)scanStringValue;
- (bool)scanPastItemDelimiter;
- (id)scanKeyValuePair;
- (id)scanAlertValue;
- (unsigned short)nextCharacter;
- (id)initWithString:(id)arg1;
- (void)dealloc;
- (unsigned long long)position;

@end
