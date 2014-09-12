/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CIFilter;

@interface CAMEffectsFullsizeView : CAMGLView  {
    CIFilter *_selectedFilter;
    unsigned long long _selectedFilterIndex;
    unsigned long long _filterIndex;
}

@property unsigned long long filterIndex;


- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (id)_updateSelectedFilter;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutGLLayer;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (void)setFilterIndex:(unsigned long long)arg1;
- (unsigned long long)filterIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;

@end
