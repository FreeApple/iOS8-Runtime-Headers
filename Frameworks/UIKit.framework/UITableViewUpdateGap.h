/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UIUpdateItem;

@interface UITableViewUpdateGap : NSObject  {
    UIUpdateItem *_firstUpdateItem;
    UIUpdateItem *_lastUpdateItem;
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct { 
        unsigned int hasAutomaticAnimationItems : 1; 
    } _gapFlags;
}

@property(retain) UIUpdateItem * firstUpdateItem;
@property(retain) UIUpdateItem * lastUpdateItem;
@property(readonly) NSArray * updateItems;
@property(readonly) NSArray * deleteItems;
@property(readonly) NSArray * insertItems;
@property(readonly) bool isDeleteBasedGap;
@property(readonly) bool hasInserts;
@property(readonly) bool isSectionBasedGap;
@property(readonly) bool hasAutomaticAnimationItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (bool)hasInserts;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)insertItems;
- (id)deleteItems;
- (id)lastUpdateItem;
- (id)firstUpdateItem;
- (bool)hasAutomaticAnimationItems;
- (bool)isSectionBasedGap;
- (id)updateItems;
- (bool)isDeleteBasedGap;
- (void)addUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (void)setFirstUpdateItem:(id)arg1;

@end
