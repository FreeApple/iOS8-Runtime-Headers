/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell  {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}


- (id)_subtitleLabel;
- (id)_notTrustedGradient;
- (id)_trustedLabel;
- (id)_certificateImage;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void).cxx_destruct;
- (id)_titleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)rowHeight;
- (void)layoutSubviews;

@end
