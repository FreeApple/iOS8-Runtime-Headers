/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPRegion;

@interface CPRegion : CPChunk  {
    boolisTextRegion;
    boolisImageRegion;
    boolisCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}


- (void)setNextRegion:(id)arg1;
- (id)nextRegion;
- (bool)isZone;
- (void)setIsCompoundShape:(bool)arg1;
- (bool)isCompoundShape;
- (bool)isBodyZone;
- (bool)isTableCellRegion;
- (void)setIsTextRegion:(bool)arg1;
- (bool)isTextRegion;
- (bool)isListItemRegion;
- (bool)isParagraphRegion;
- (bool)isShapeRegion;
- (bool)isImageRegion;
- (void)setIsImageRegion:(bool)arg1;
- (bool)isRowRegion;
- (bool)isGraphicalRegion;
- (bool)isBoxRegion;
- (bool)isIndivisible;
- (void)accept:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (int)order;
- (void)setOrder:(int)arg1;
- (bool)isRotated;

@end
