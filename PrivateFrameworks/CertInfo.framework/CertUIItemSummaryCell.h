/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UIImageView, UILabel, UIView;

@interface CertUIItemSummaryCell : UITableViewCell  {
    UIImageView *_itemImageView;
    UIView *_itemTitleView;
    UILabel *_itemTitleLabel;
    UILabel *_itemSubtitleLabel;
}

@property(retain) UIImageView * itemImageView;
@property(retain) UIView * itemTitleView;
@property(retain) UILabel * itemTitleLabel;
@property(retain) UILabel * itemSubtitleLabel;

+ (double)titleOriginX;

- (void)setItemSubtitleLabel:(id)arg1;
- (void)setItemTitleLabel:(id)arg1;
- (void)setItemTitleView:(id)arg1;
- (void)setItemImageView:(id)arg1;
- (double)cellHeight;
- (id)itemSubtitleLabel;
- (id)itemTitleLabel;
- (id)itemTitleView;
- (id)itemImageView;
- (id)_profileImageAppropriateForDevice;
- (void)_setupCell;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
