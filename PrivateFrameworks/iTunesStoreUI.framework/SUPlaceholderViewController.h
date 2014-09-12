/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController  {
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    bool_hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}

@property(copy) SUGradient * backgroundGradient;
@property(copy) SUGradient * defaultBackgroundGradient;
@property(readonly) SULoadingView * loadingView;
@property bool shouldShowLoadingView;


- (bool)shouldShowLoadingView;
- (void)setShouldShowLoadingView:(bool)arg1;
- (id)_copyActiveGradient;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadLoadingView;
- (void)_reloadBackgroundGradient;
- (id)defaultBackgroundGradient;
- (void)parentViewControllerHierarchyDidChange;
- (void)setScriptProperties:(id)arg1;
- (id)copyDefaultScriptProperties;
- (id)loadingView;
- (id)copyArchivableContext;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)setDefaultBackgroundGradient:(id)arg1;
- (void)setLoading:(bool)arg1;
- (id)init;
- (void)dealloc;
- (id)backgroundGradient;
- (void)setBackgroundGradient:(id)arg1;
- (void)loadView;

@end
