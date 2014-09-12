/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UITableView, UITextLabel, NSString, UIView, UIProgressIndicator, UINavigationBar;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_table;
    UIProgressIndicator *_progressIndicator;
    UITextLabel *_loadingLabel;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)removeLoadingUI;
- (void)addLoadingUI;
- (void)_setCell:(id)arg1 isChecked:(bool)arg2;
- (void)_exitAnimated:(bool)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
