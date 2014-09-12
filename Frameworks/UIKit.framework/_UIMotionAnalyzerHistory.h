/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionAnalyzerHistory : NSObject  {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _lastAppliedViewerOffset;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    } _lastAppliedRelativeQuaternion;
    bool_isApplyingHysteresis;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    } _relativeQuaternionOnHysteresisEntry;
}



@end
