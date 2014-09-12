/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;

@interface SUSimpleMenuViewController : SUMenuViewController  {
    NSString *_cancelButtonTitle;
    NSArray *_titles;
}

@property(copy) NSArray * titles;
@property(copy) NSString * cancelButtonTitle;


- (id)cancelButtonTitle;
- (id)initWithTitles:(id)arg1;
- (bool)isMenuItemEnabledAtIndex:(long long)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)reloadContentSizeForViewInPopover;
- (void)setCancelButtonTitle:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)dealloc;
- (id)titles;
- (void)setTitles:(id)arg1;

@end
