/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMRange;

@interface UITextRangeImpl : UITextRange  {
    DOMRange *_domRange;
    long long _affinityIfCollapsed;
}

@property(retain) DOMRange * domRange;
@property long long affinity;

+ (id)wrapDOMRange:(id)arg1;
+ (id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2;

- (bool)isEqual:(id)arg1;
- (bool)isEmpty;
- (id)start;
- (void)dealloc;
- (id)description;
- (void)adjustAffinityOfPosition:(id)arg1 isStart:(bool)arg2;
- (void)setAffinity:(long long)arg1;
- (void)setDomRange:(id)arg1;
- (id)domRange;
- (long long)affinity;
- (id)end;

@end
