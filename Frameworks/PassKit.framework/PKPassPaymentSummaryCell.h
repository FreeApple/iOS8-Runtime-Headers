/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString, <PKPassPaymentSummaryCellDelegate>, UILabel, UIImage, UIButton;

@interface PKPassPaymentSummaryCell : UITableViewCell  {
    UILabel *_amountLabel;
    UIButton *_detailsButton;
    <PKPassPaymentSummaryCellDelegate> *_delegate;
}

@property(retain) NSString * primaryText;
@property long long primaryTextNumberOfLines;
@property(retain) NSString * detailText;
@property(retain) NSString * amountText;
@property(retain) UIImage * image;
@property bool showDetailsButton;
@property <PKPassPaymentSummaryCellDelegate> * delegate;

+ (double)heightWithPrimaryText:(id)arg1 primaryTextNumberOfLines:(long long)arg2 detailText:(id)arg3 amountText:(id)arg4 image:(id)arg5 showDetailsButton:(bool)arg6 width:(double)arg7;
+ (struct CGSize { double x1; double x2; })_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4;
+ (id)_detailTextFont;
+ (id)_primaryTextFont;
+ (id)_detailsButtonFont;
+ (id)_amountTextFont;

- (bool)showDetailsButton;
- (id)amountText;
- (id)primaryText;
- (long long)primaryTextNumberOfLines;
- (void)setShowDetailsButton:(bool)arg1;
- (void)setAmountText:(id)arg1;
- (void)setPrimaryTextNumberOfLines:(long long)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)_detailsButtonPressed:(id)arg1;
- (void)setDetailText:(id)arg1;
- (id)detailText;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
