/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebSelectionGraph, UIWebSelection, UIWebSelectionNode;

@interface UIWebSelectionNode : NSObject  {
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    bool_invalid;
}

@property(retain) UIWebSelection * selection;


- (void)invalidate;
- (void)dealloc;
- (int)oppositeEdge:(int)arg1;
- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (id*)nodeByReferenceFromEdge:(int)arg1 outwards:(bool)arg2;
- (id)nodeByMovingEdge:(int)arg1 outwards:(bool)arg2;
- (void)setSelection:(id)arg1;
- (id)selection;

@end
