/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface _UIRemoteKeyboardPlaceholderView : UIView <_UIRemoteKeyboardInputViewPlaceholder> {
    UIView *_mirroredView;
}

@property(retain,readonly) UIView * placeheldView;

+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;
+ (id)placeholderForView:(id)arg1;

- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)placeheldView;
- (bool)refreshPlaceholder;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
