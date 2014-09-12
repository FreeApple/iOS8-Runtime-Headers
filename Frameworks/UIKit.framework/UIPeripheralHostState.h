/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary;

@interface UIPeripheralHostState : NSObject  {
    struct UIPeripheralAnimationGeometry { 
        struct CGPoint { 
            double x; 
            double y; 
        } outPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } inPosition; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        double targetFrameHeightDelta; 
    } _geometry;
    NSDictionary *_screenGeometry;
    bool_inPositionIsDestination;
}

@property struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; } geometry;
@property(retain) NSDictionary * screenGeometry;
@property bool inPositionIsDestination;

+ (id)stateWithGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })arg1 inPositionIsDestination:(bool)arg2;

- (void)dealloc;
- (bool)inPositionIsDestination;
- (id)screenGeometry;
- (void)setScreenGeometry:(id)arg1;
- (void)setInPositionIsDestination:(bool)arg1;
- (void)setGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometry;

@end
