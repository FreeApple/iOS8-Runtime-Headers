/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell  {
    NSArray *_details;
}

@property(retain) NSArray * details;


- (void)setDetailsWithCertificateTrust:(struct __SecTrust { }*)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(bool)arg3;
- (void)setCertificateTrust:(struct __SecTrust { }*)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(bool)arg3;
- (void)setDetails:(id)arg1;
- (id)details;
- (void).cxx_destruct;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
