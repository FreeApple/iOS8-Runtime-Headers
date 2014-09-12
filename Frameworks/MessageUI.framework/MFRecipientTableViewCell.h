/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipient, UIColor, UIImageView, MFRecipientTableViewCellDetailView, MFRecipientTableViewCellTitleView;

@interface MFRecipientTableViewCell : UITableViewCell  {
    MFRecipientTableViewCellTitleView *_titleView;
    MFRecipientTableViewCellDetailView *_detailView;
    MFComposeRecipient *_recipient;
    UIImageView *_cellImageView;
    UIColor *_tintColor;
    bool_shouldVerticallyCenterTitleLabel;
    bool_shouldHighlightCompleteMatches;
    bool_shouldDimIrrelevantInformation;
}

@property bool shouldHighlightCompleteMatches;
@property bool shouldDimIrrelevantInformation;

+ (id)cellForRecipient:(id)arg1;
+ (id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(bool)arg2;
+ (id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2;
+ (id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(bool)arg3;
+ (id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(double)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(bool)arg4;
+ (double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2;
+ (double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2;
+ (double)_realDetailButtonAccessoryMargin;
+ (double)_deviceSpecificLayoutMargin;
+ (id)_defaultTintColor;
+ (double)heightWithRecipient:(id)arg1 width:(double)arg2;
+ (double)height;
+ (id)identifier;

- (id)recipient;
- (bool)shouldDimIrrelevantInformation;
- (void)setCellImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setTintColor:(id)arg1 animated:(bool)arg2;
- (bool)shouldHighlightCompleteMatches;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForDetailView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTitleView;
- (void)setShouldDimIrrelevantInformation:(bool)arg1;
- (void)setShouldHighlightCompleteMatches:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)dealloc;
- (id)tintColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
