/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface ABBannerView : UITableViewCell  {
    NSString *_title;
    NSString *_value;
}

@property(copy) NSString * title;
@property(copy) NSString * value;

+ (float)defaultHeight;

- (void)showMenu;
- (void)setTitle:(id)arg1 value:(id)arg2;
- (void)menuDidHide:(id)arg1;
- (void)cellWasDoubleTapped:(id)arg1;
- (void)cellWasLongPressed:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (void)copy:(id)arg1;
- (void)_updateLabel;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
