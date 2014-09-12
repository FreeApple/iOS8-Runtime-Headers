/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceInfo : NSObject  {
    int swFaceId;
    int swLastFrameSeen;
    int hwFaceId;
    int hwLastFrameSeen;
    struct CGPoint { 
        double x; 
        double y; 
    } swCenter;
    struct CGSize { 
        double width; 
        double height; 
    } swSize;
    struct CGPoint { 
        double x; 
        double y; 
    } hwCenter;
    struct CGSize { 
        double width; 
        double height; 
    } hwSize;
}

@property int swFaceId;
@property struct CGPoint { double x1; double x2; } swCenter;
@property struct CGSize { double x1; double x2; } swSize;
@property int swLastFrameSeen;
@property int hwFaceId;
@property struct CGPoint { double x1; double x2; } hwCenter;
@property struct CGSize { double x1; double x2; } hwSize;
@property int hwLastFrameSeen;


- (int)hwLastFrameSeen;
- (int)swLastFrameSeen;
- (float)overlapWithSwRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)overlapWithHwRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swFaceRect;
- (int)swFaceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hwFaceRect;
- (int)hwFaceId;
- (struct CGSize { double x1; double x2; })swSize;
- (struct CGPoint { double x1; double x2; })swCenter;
- (struct CGSize { double x1; double x2; })hwSize;
- (struct CGPoint { double x1; double x2; })hwCenter;
- (void)setHwLastFrameSeen:(int)arg1;
- (void)setHwSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHwCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHwFaceId:(int)arg1;
- (void)setSwLastFrameSeen:(int)arg1;
- (void)setSwSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSwCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSwFaceId:(int)arg1;
- (id)init;

@end
