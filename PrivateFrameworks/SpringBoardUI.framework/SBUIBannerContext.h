/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSString, SBUIBannerItem, <SBUIBannerTarget>, <SBUIBannerSource>, SBUIBannerAction;

@interface SBUIBannerContext : NSObject  {
    SBUIBannerItem *_item;
    <SBUIBannerSource> *_source;
    <SBUIBannerTarget> *_target;
    bool_isValid;
    bool_requestsModalPresentation;
    NSString *_presentingActionIdentifier;
}

@property(retain,readonly) SBUIBannerItem * item;
@property(retain,readonly) <SBUIBannerSource> * source;
@property(retain,readonly) <SBUIBannerTarget> * target;
@property bool requestsModalPresentation;
@property(copy) NSString * presentingActionIdentifier;
@property(readonly) SBUIBannerAction * interactiveAction;
@property(getter=isValid,readonly) bool valid;


- (void)setPresentingActionIdentifier:(id)arg1;
- (void)setRequestsModalPresentation:(bool)arg1;
- (bool)requestsModalPresentation;
- (id)interactiveAction;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;
- (id)presentingActionIdentifier;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(bool)arg5;
- (id)source;
- (bool)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (id)item;
- (id)target;

@end
