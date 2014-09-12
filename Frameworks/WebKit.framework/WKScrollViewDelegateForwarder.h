/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKWebView, <UIScrollViewDelegate>;

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
    WKWebView *_internalDelegate;
    <UIScrollViewDelegate> *_externalDelegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
