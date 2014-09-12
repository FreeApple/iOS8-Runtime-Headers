/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramNodeInfo : NSObject  {
    int mTreeDepth;
    int mRow;
    struct ODIHRange { 
        float mMid; 
        float mLength; 
    } mXRange;
    boolmConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mXRanges;
}


- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)xRanges;
- (void)addToXOffsetRelativeToParent:(float)arg1;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (float)xOffsetRelativeToParent;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (int)extraRowsBetweenParentAndSelf;
- (void)setConnectToVerticalSide:(bool)arg1;
- (bool)connectToVerticalSide;
- (void)setRow:(int)arg1;
- (void)setTreeDepth:(int)arg1;
- (int)treeDepth;
- (void)setXRange:(struct ODIHRange { float x1; float x2; })arg1;
- (struct ODIHRange { float x1; float x2; })xRange;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)row;

@end
