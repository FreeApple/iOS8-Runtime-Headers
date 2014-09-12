/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView, <_UIScrollNotification>, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification> {
    UIScrollView *_scrollView;
    <_UIScrollNotification> *_controller;
}

@property <_UIScrollNotification> * controller;
@property UIScrollView * scrollView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setController:(id)arg1;
- (void)dealloc;
- (id)controller;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;

@end
