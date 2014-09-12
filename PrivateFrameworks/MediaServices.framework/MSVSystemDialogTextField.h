/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSString;

@interface MSVSystemDialogTextField : NSObject  {
    bool_secure;
    NSString *_title;
    long long _keyboardType;
}

@property(copy) NSString * title;
@property(getter=isSecure) bool secure;
@property long long keyboardType;

+ (id)textFieldWithTitle:(id)arg1;
+ (id)textFieldWithTitle:(id)arg1 secure:(bool)arg2;

- (void)setTitle:(id)arg1;
- (id)title;
- (void)setKeyboardType:(long long)arg1;
- (long long)keyboardType;
- (bool)isSecure;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;
- (void)setSecure:(bool)arg1;

@end
