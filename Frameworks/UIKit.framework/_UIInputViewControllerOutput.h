/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TIKeyboardOutput, NSString;

@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {
    bool_shouldDismiss;
    bool_shouldAdvanceInputMode;
    TIKeyboardOutput *_keyboardOutput;
    long long _positionOffset;
    NSString *_primaryLanguage;
}

@property(retain) TIKeyboardOutput * keyboardOutput;
@property long long positionOffset;
@property bool shouldDismiss;
@property bool shouldAdvanceInputMode;
@property(copy) NSString * primaryLanguage;

+ (bool)supportsSecureCoding;

- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setKeyboardOutput:(id)arg1;
- (void)setShouldAdvanceInputMode:(bool)arg1;
- (void)setShouldDismiss:(bool)arg1;
- (void)setPositionOffset:(long long)arg1;
- (void)createKeyboardOutputIfNecessary;
- (bool)shouldDismiss;
- (bool)shouldAdvanceInputMode;
- (void)setPrimaryLanguage:(id)arg1;
- (id)primaryLanguage;
- (long long)positionOffset;
- (id)keyboardOutput;

@end
