/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView> {
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    double _lastViewPhaseChangeDate;
    bool_indicatorIsVisible;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setToolbarVisible:(bool)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(bool)arg1;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showLoadingIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
