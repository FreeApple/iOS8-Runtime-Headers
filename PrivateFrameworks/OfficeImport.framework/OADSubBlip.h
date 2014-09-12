/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface OADSubBlip : OCDDelayedMedia  {
    int mType;
    NSData *mData;
    struct CGSize { 
        double width; 
        double height; 
    } mSizeInPoints;
    int mSizeInBytes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mFrame;
}


- (struct CGSize { double x1; double x2; })sizeInPoints;
- (void)setSizeInPoints:(struct CGSize { double x1; double x2; })arg1;
- (int)sizeInBytes;
- (void)setSizeInBytes:(int)arg1;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)data;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id).cxx_construct;
- (bool)isLoaded;
- (void)setData:(id)arg1;

@end
