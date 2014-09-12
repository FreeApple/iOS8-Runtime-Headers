/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceSharedAttributionDelegate>, NSAttributedString, NSString;

@interface MKSharedAttributionViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {
    NSAttributedString *_attribution;
    <MKPlaceSharedAttributionDelegate> *_delegate;
}

@property(copy) NSAttributedString * attribution;
@property <MKPlaceSharedAttributionDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool requiresPreferredContentSizeInStackingView;


- (bool)requiresPreferredContentSizeInStackingView;
- (void)contentSizeDidChange;
- (void)setAttribution:(id)arg1;
- (id)attribution;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
