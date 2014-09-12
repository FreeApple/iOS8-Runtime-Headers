/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView, <CAMTimerButtonDelegate>;

@interface CAMTimerButton : CAMExpandableMenuButton  {
    bool_hideOffWhenCollapsed;
    <CAMTimerButtonDelegate> *_delegate;
    UIImageView *__glyphView;
}

@property <CAMTimerButtonDelegate> * delegate;
@property long long duration;
@property bool hideOffWhenCollapsed;
@property(readonly) UIImageView * _glyphView;


- (void)setHideOffWhenCollapsed:(bool)arg1;
- (id)hiddenIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (bool)hideOffWhenCollapsed;
- (id)_glyphView;
- (void)setDuration:(long long)arg1 animated:(bool)arg2;
- (void)_commonCAMTimerButtonInitialization;
- (id)initWithExpansionOrientation:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)setDuration:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (long long)duration;
- (id)headerView;

@end
