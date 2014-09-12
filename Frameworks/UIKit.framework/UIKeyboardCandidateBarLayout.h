/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray;

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout  {
    struct CGSize { 
        double width; 
        double height; 
    } _contentSize;
    NSMutableArray *_allAttributes;
    NSArray *_edgeDummyCellAttributes;
}

@property(retain) NSMutableArray * allAttributes;
@property(retain) NSArray * edgeDummyCellAttributes;

+ (id)layout;
+ (Class)layoutAttributesClass;
+ (id)dummyCellCollectionViewKind;

- (id)init;
- (void)dealloc;
- (void)setAllAttributes:(id)arg1;
- (void)setEdgeDummyCellAttributes:(id)arg1;
- (id)edgeDummyCellAttributes;
- (id)allAttributes;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;

@end
