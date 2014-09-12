/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class MPMusicPlayerController, <TKTonePickerViewControllerDelegate>, UIBarButtonItem, <TKTonePickerStyleProvider>, TKTonePickerTableViewCellLayoutManager, TKToneClassicsTableViewController, NSMutableArray, UIView, MPMediaPickerController, NSString, TKTonePickerController, NSNumber, TKVibrationPickerViewController, UIImage;

@interface TKTonePickerViewController : UITableViewController <TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerTableViewControllerHelper, TKTonePickerTableViewLayoutMarginsObserver, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, MPMediaPickerControllerDelegate> {
    bool_showsStoreButtonInNavigationBar;
    bool_needsScrollPositionReset;
    bool_showsMedia;
    <TKTonePickerViewControllerDelegate> *_delegate;
    TKTonePickerController *_tonePickerController;
    UIImage *_checkmarkImage;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManager;
    TKToneClassicsTableViewController *_toneClassicsTableViewController;
    UIBarButtonItem *_storeBarButtonItem;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    <TKTonePickerStyleProvider> *_styleProvider;
    UIView *_defaultSectionHeaderView;
    UIView *_mediaSectionHeaderView;
    NSMutableArray *_regularToneSectionHeaderViews;
    NSMutableArray *_mediaItems;
    MPMediaPickerController *_mediaPickerController;
    MPMusicPlayerController *_storedMusicPlayer;
}

@property(readonly) int alertType;
@property(copy) NSString * accountIdentifier;
@property bool showsDefault;
@property(copy) NSString * defaultToneIdentifier;
@property bool showsNone;
@property(getter=isNoneAtTop) bool noneAtTop;
@property(copy) NSString * noneString;
@property bool showsNothingSelected;
@property bool showsStoreButtonInNavigationBar;
@property(copy) NSString * selectedToneIdentifier;
@property <TKTonePickerViewControllerDelegate> * delegate;
@property bool showsMedia;
@property(getter=isMediaAtTop) bool mediaAtTop;
@property(copy) NSNumber * selectedMediaIdentifier;
@property bool showsVibrations;
@property(copy) NSString * selectedVibrationIdentifier;
@property(retain) <TKTonePickerStyleProvider> * styleProvider;
@property(setter=_setTonePickerController:,retain) TKTonePickerController * _tonePickerController;
@property(setter=_setStyleProvider:,retain) <TKTonePickerStyleProvider> * _styleProvider;
@property(setter=_setCheckmarkImage:,retain) UIImage * _checkmarkImage;
@property(setter=_setTableViewCellLayoutManager:,retain) TKTonePickerTableViewCellLayoutManager * _tableViewCellLayoutManager;
@property(setter=_setNeedsScrollPositionReset:) bool _needsScrollPositionReset;
@property(setter=_setShowsStoreButtonInNavigationBar:) bool _showsStoreButtonInNavigationBar;
@property(setter=_setStoreBarButtonItem:,retain) UIBarButtonItem * _storeBarButtonItem;
@property(setter=_setDefaultSectionHeaderView:,retain) UIView * _defaultSectionHeaderView;
@property(setter=_setMediaSectionHeaderView:,retain) UIView * _mediaSectionHeaderView;
@property(setter=_setRegularToneSectionHeaderViews:,retain) NSMutableArray * _regularToneSectionHeaderViews;
@property(setter=_setMediaPickerController:,retain) MPMediaPickerController * _mediaPickerController;
@property(setter=_setMediaItems:,retain) NSMutableArray * _mediaItems;
@property(setter=_setStoredMusicPlayer:,retain) MPMusicPlayerController * _storedMusicPlayer;
@property(readonly) MPMusicPlayerController * _musicPlayer;
@property(setter=_setToneClassicsTableViewController:,retain) TKToneClassicsTableViewController * _toneClassicsTableViewController;
@property(setter=_setVibrationPickerViewController:,retain) TKVibrationPickerViewController * _vibrationPickerViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)removeMediaItems:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (id)selectedMediaIdentifier;
- (void)setShowsMedia:(bool)arg1;
- (void)setShowsStoreButtonInNavigationBar:(bool)arg1;
- (bool)showsStoreButtonInNavigationBar;
- (void)vibrationPickerViewControllerWasDismissed:(id)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)tonePickerTableViewWillDisappear:(bool)arg1;
- (void)_togglePlayMediaItemWithIdentifier:(id)arg1;
- (void)updateCell:(id)arg1 withDetailText:(id)arg2;
- (void)updateCell:(id)arg1 withCheckedStatus:(bool)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3;
- (void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3;
- (id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2;
- (id)_pickerRowItemForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3;
- (void)_configureTextColorOfLabelInCell:(id)arg1 checked:(bool)arg2;
- (id)_musicPlayer;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (id)_storedMusicPlayer;
- (id)_mediaItems;
- (unsigned long long)_addMediaIdentifierToList:(id)arg1;
- (id)_mediaItemForIdentifier:(id)arg1;
- (id)selectedIdentifier:(bool*)arg1;
- (void)setSelectedMediaIdentifier:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification;
- (void)_resetScrollingPosition;
- (id)_tableViewCellLayoutManager;
- (double)_minimumTextIndentationForTableView:(id)arg1 withCheckmarkImage:(id)arg2;
- (id)_regularToneSectionHeaderViews;
- (id)_mediaSectionHeaderView;
- (id)_defaultSectionHeaderView;
- (void)_setNeedsScrollPositionReset:(bool)arg1;
- (bool)_needsScrollPositionReset;
- (void)_updateMinimumTextIndentation;
- (void)loadViewForTonePickerTableViewController:(id)arg1;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (id)_storeBarButtonItem;
- (void)_configureNavigationBarIfNeeded;
- (bool)_showsStoreButtonInNavigationBar;
- (id)_tonePickerController;
- (void)_setStoreBarButtonItem:(id)arg1;
- (void)_setRegularToneSectionHeaderViews:(id)arg1;
- (void)_setMediaSectionHeaderView:(id)arg1;
- (void)_setDefaultSectionHeaderView:(id)arg1;
- (void)_setStoredMusicPlayer:(id)arg1;
- (void)_setMediaItems:(id)arg1;
- (void)_setMediaPickerController:(id)arg1;
- (id)_mediaPickerController;
- (void)_setToneClassicsTableViewController:(id)arg1;
- (id)_toneClassicsTableViewController;
- (void)_setVibrationPickerViewController:(id)arg1;
- (id)_vibrationPickerViewController;
- (void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1;
- (bool)showsMedia;
- (void)_setTableViewCellLayoutManager:(id)arg1;
- (void)_setCheckmarkImage:(id)arg1;
- (void)_setTonePickerController:(id)arg1;
- (void)_setShowsStoreButtonInNavigationBar:(bool)arg1;
- (bool)showsVibrations;
- (void)setMediaAtTop:(bool)arg1;
- (id)selectedTonePickerItem;
- (void)setNoneString:(id)arg1;
- (bool)showsNone;
- (bool)showsDefault;
- (void)setDefaultToneIdentifier:(id)arg1;
- (void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(bool)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
- (void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
- (id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
- (bool)isMediaAtTop;
- (bool)tonePickerControllerShouldShowMedia:(id)arg1;
- (void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsPresentingToneStore:(id)arg1;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
- (void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(bool)arg3;
- (void)_goToStore;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (bool)showsNothingSelected;
- (id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
- (id)noneString;
- (id)defaultToneIdentifier;
- (bool)isNoneAtTop;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (int)alertType;
- (id)selectedVibrationIdentifier;
- (id)selectedToneIdentifier;
- (void)setShowsVibrations:(bool)arg1;
- (void)setShowsDefault:(bool)arg1;
- (void)setNoneAtTop:(bool)arg1;
- (void)setShowsNone:(bool)arg1;
- (void)setShowsNothingSelected:(bool)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (void)setSelectedToneIdentifier:(id)arg1;
- (id)initWithAlertType:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_reloadData;
- (id)_checkmarkImage;
- (void)_setStyleProvider:(id)arg1;
- (id)_styleProvider;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)applicationWillSuspend;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
