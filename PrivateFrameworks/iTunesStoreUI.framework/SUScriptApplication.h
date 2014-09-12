/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber;

@interface SUScriptApplication : SUScriptObject  {
}

@property(getter=isDelayingTerminate,readonly) id delayingTerminate;
@property(getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode;
@property(retain) id iconBadgeNumber;
@property(readonly) id screenHeight;
@property(readonly) id screenWidth;
@property id statusBarHidden;
@property long long statusBarStyle;
@property(getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary;
@property(readonly) NSNumber * exitStoreReasonButton;
@property(readonly) NSNumber * exitStoreReasonDownloadComplete;
@property(readonly) NSNumber * exitStoreReasonFatalError;
@property(readonly) NSNumber * exitStoreReasonGotoMainStore;
@property(readonly) NSNumber * exitStoreReasonOther;
@property(readonly) NSNumber * exitStoreReasonPurchase;
@property(readonly) long long statusBarAnimationFade;
@property(readonly) long long statusBarAnimationNone;
@property(readonly) long long statusBarAnimationSlide;
@property(readonly) long long statusBarStyleDefault;
@property(readonly) long long statusBarStyleBlackOpaque;
@property(readonly) long long statusBarStyleBlackTranslucent;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (long long)statusBarStyleBlackTranslucent;
- (long long)statusBarStyleBlackOpaque;
- (long long)statusBarStyleDefault;
- (long long)statusBarAnimationSlide;
- (long long)statusBarAnimationNone;
- (long long)statusBarAnimationFade;
- (id)exitStoreReasonPurchase;
- (id)exitStoreReasonOther;
- (id)exitStoreReasonGotoMainStore;
- (id)exitStoreReasonFatalError;
- (id)exitStoreReasonDownloadComplete;
- (id)exitStoreReasonButton;
- (void)setIconBadgeNumber:(id)arg1;
- (id)isDelayingTerminate;
- (id)iconBadgeNumber;
- (void)showNewsstand;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(bool)arg2;
- (void)returnToLibrary;
- (void)exitStoreWithReason:(id)arg1;
- (void)endDelayingTerminate;
- (void)beginDelayingTerminate;
- (id)wasLaunchedFromLibrary;
- (id)scriptAttributeKeys;
- (id)screenWidth;
- (id)screenHeight;
- (id)attributeKeys;
- (void)setStatusBarStyle:(long long)arg1 animated:(bool)arg2;
- (id)isRunningInStoreDemoMode;
- (void)setStatusBarHidden:(bool)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarHidden:(id)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (long long)statusBarStyle;
- (id)statusBarHidden;

@end
