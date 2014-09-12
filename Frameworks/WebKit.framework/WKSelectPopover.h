/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKContentView;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    WKContentView *_view;
    struct RetainPtr<WKSelectTableViewController> { 
        void *m_ptr; 
    } _tableViewController;
    struct RetainPtr<UIKeyboard> { 
        void *m_ptr; 
    } _keyboard;
}


- (id)initWithView:(id)arg1 hasGroups:(bool)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;

@end
