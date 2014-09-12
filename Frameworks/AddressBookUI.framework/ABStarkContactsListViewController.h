/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABModel, ABMembersDataSource, AVExternalDevice, <ABStarkContactsListViewControllerDelegate>, ABStarkNoContentBannerView;

@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate> {
    ABMembersDataSource *_dataSource;
    ABModel *_model;
    bool_limitedUI;
    <ABStarkContactsListViewControllerDelegate> *_peoplePickerDelegate;
    ABStarkNoContentBannerView *_overlayView;
    AVExternalDevice *_externalDevice;
}

@property <ABStarkContactsListViewControllerDelegate> * peoplePickerDelegate;
@property(retain) ABStarkNoContentBannerView * overlayView;
@property(retain) AVExternalDevice * externalDevice;
@property bool limitedUI;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setExternalDevice:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)postMessageOverlayIfNecessary;
- (void)setLimitedUI:(bool)arg1;
- (id)externalDevice;
- (void)limitedUINotification:(id)arg1;
- (id)peoplePickerDelegate;
- (bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (bool)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(bool)arg5;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (id)overlayView;
- (bool)limitedUI;
- (id)init;
- (void)dealloc;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLayoutSubviews;

@end
