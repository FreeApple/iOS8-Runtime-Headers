/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadDrawStyle : VKRenderStyle  {
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } width;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } strokeWidth;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } labelHeight;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } widthDropoff;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } fillColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } strokeColor;
    struct VKProfileSparseRamp<bool> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                boolvalue; 
                unsigned char hi; 
            } v[2]; 
            bool*extra; 
        } u; 
        unsigned char count; 
    } simpleLine;
    struct VKProfileSparseRamp<int> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    } zIndices;
    struct VKProfileSparseRamp<int> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    } fillZIndices;
    struct VKProfileSparseRamp<bool> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                boolvalue; 
                unsigned char hi; 
            } v[2]; 
            bool*extra; 
        } u; 
        unsigned char count; 
    } strokeColorInterpolate;
    struct VKProfileSparseRamp<bool> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                boolvalue; 
                unsigned char hi; 
            } v[2]; 
            bool*extra; 
        } u; 
        unsigned char count; 
    } fillColorInterpolate;
    unsigned char railroadPattern;
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } alternateFillColor;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } patternScaler;
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } patternScalerQuantizationFactor;
    struct VKProfileSparseRamp<bool> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                boolvalue; 
                unsigned char hi; 
            } v[2]; 
            bool*extra; 
        } u; 
        unsigned char count; 
    } renderEndCaps;
}

+ (int)renderStyleID;

- (bool)visibleAtZoom:(float)arg1;
- (unsigned char)railroadPattern;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
