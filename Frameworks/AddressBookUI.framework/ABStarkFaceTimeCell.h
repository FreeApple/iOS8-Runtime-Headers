/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABTransportButton, NSDictionary, <ABPropertyCellDelegate>, UILabel;

@interface ABStarkFaceTimeCell : ABContactCell  {
    <ABPropertyCellDelegate> *_delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    ABTransportButton *_transportIcon;
}

@property <ABPropertyCellDelegate> * delegate;
@property(copy) NSDictionary * labelTextAttributes;
@property(retain) UILabel * faceTimeLabel;
@property(readonly) ABTransportButton * transportIcon;

+ (bool)requiresConstraintBasedLayout;

- (void)setFaceTimeLabel:(id)arg1;
- (id)faceTimeLabel;
- (void)transportButtonClicked:(id)arg1;
- (id)labelTextAttributes;
- (id)constantConstraints;
- (id)transportIcon;
- (void)setLabelTextAttributes:(id)arg1;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
