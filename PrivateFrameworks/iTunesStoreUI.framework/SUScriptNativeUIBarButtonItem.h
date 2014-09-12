/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject  {
    bool_isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (id)systemItemString;
- (bool)isShowingConfirmation;
- (void)showConfirmationWithTitle:(id)arg1 animated:(bool)arg2;
- (void)setStyleFromString:(id)arg1;
- (void)connectButtonAction;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(bool)arg1;
- (bool)isBackButton;
- (void)setupNativeObject;
- (void)destroyNativeObject;
- (void)setLoading:(bool)arg1;
- (bool)isLoading;
- (void)setTitle:(id)arg1;
- (id)title;
- (long long)tag;
- (void)setImage:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (int)buttonType;
- (id)styleString;
- (void)setTag:(long long)arg1;

@end
