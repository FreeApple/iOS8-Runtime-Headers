/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UIKeyboardEmojiPressIndicationDelegate>, UIKBRenderConfig, UIView, UIKeyboardEmojiImageView, UIKeyboardEmoji;

@interface UIKeyboardEmojiView : UIControl  {
    UIKeyboardEmoji *_emoji;
    UIView *_popup;
    UIKeyboardEmojiImageView *_imageView;
    UIKBRenderConfig *_renderConfig;
    UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;
}

@property(retain) UIKeyboardEmoji * emoji;
@property(retain) UIKBRenderConfig * renderConfig;
@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> * delegate;
@property(retain) UIView * popup;
@property(retain) UIKeyboardEmojiImageView * imageView;

+ (void)recycleEmojiView:(id)arg1;
+ (id)emojiViewForEmoji:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 emoji:(id)arg2;
- (void)setEmoji:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setPopup:(id)arg1;
- (id)popup;
- (void)setImageView:(id)arg1;
- (id)createAndInstallKeyPopupView;
- (void)uninstallPopup;
- (void)setEmoji:(id)arg1;
- (id)emoji;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;
- (id)imageView;

@end
