/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UILabel, NSString;

@interface SKUIGiftTableSectionHeaderView : UIView  {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    UILabel *_label;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(copy) NSString * label;


- (void)setBackgroundColor:(id)arg1;
- (id)label;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void).cxx_destruct;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
