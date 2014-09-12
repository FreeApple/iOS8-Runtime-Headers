/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UILabel, UIImageView, PKPassSnapshotter;

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell  {
    UILabel *_displayLabel;
    UILabel *_censoredPANLabel;
    UIImageView *_cardArtView;
    PKPassSnapshotter *_passSnapshotter;
}

@property(retain) PKPassSnapshotter * passSnapshotter;


- (id)passSnapshotter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_censoredPANLabelFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_displayLabelFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cardArtFrame;
- (void)setPassSnapshotter:(id)arg1;
- (void)_updateCellContent;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;

@end
