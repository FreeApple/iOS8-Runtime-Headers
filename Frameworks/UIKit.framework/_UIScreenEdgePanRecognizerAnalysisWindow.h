/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIScreenEdgePanRecognizer, UIDelayedAction, NSMutableArray, UIView;

@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow  {
    NSMutableArray *_failureMessageLabels;
    UIDelayedAction *_messageFadeAction;
    UIView *_backgroundView;
    _UIScreenEdgePanRecognizer *_recognizer;
    long long _maximumVisibleOverlayItems;
}

@property _UIScreenEdgePanRecognizer * recognizer;
@property long long maximumVisibleOverlayItems;


- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setMaximumVisibleOverlayItems:(long long)arg1;
- (long long)maximumVisibleOverlayItems;
- (void)setRecognizer:(id)arg1;
- (id)recognizer;
- (void)pushStatusMessage:(id)arg1 toVisualOverlay:(bool)arg2;
- (void)pushFailureMessage:(id)arg1 toVisualOverlay:(bool)arg2;
- (void)pushMessage:(id)arg1 toVisualOverlay:(bool)arg2;
- (void)fadeOldestMessage;
- (void)dismissMessages;
- (bool)_isWindowServerHostingManaged;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
