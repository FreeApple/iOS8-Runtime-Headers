/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UILabel, NSArray;

@interface CertUIKeyValueCell : UITableViewCell  {
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

@property(retain) UILabel * keyLabel;
@property(retain) UILabel * valueLabel;
@property(retain) NSArray * constraints;


- (void)setValueLabel:(id)arg1;
- (void)setKeyLabel:(id)arg1;
- (void)_setupConstraints;
- (void)setConstraints:(id)arg1;
- (id)keyLabel;
- (id)valueLabel;
- (void)_setup;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void).cxx_destruct;
- (id)constraints;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
