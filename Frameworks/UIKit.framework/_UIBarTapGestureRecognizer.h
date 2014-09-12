/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer  {
    bool_failWhenTappingInBars;
    long long _tapCategory;
}

@property(readonly) long long tapCategory;
@property bool failWhenTappingInBars;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (id)description;
- (void)setFailWhenTappingInBars:(bool)arg1;
- (bool)failWhenTappingInBars;
- (long long)_categoryForTapLocation:(struct CGPoint { double x1; double x2; })arg1;
- (long long)tapCategory;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
