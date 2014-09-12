/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceCardPhotosControllerDelegate>, NSString, _MKPlacePhotosCollectionView, MKMapItem;

@interface MKPlacePhotosViewController : UITableViewController <UICollectionViewDataSource, UICollectionViewDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider> {
    bool_showAddPhotoButton;
    bool_showMorePhotosButton;
    bool_hasAttribution;
    bool_showAttribution;
    MKMapItem *_mapItem;
    <MKPlaceCardPhotosControllerDelegate> *_photosControllerDelegate;
    unsigned long long _photosCount;
    double _photoWidth;
    _MKPlacePhotosCollectionView *_photoGrid;
}

@property(retain) MKMapItem * mapItem;
@property <MKPlaceCardPhotosControllerDelegate> * photosControllerDelegate;
@property bool hasAttribution;
@property(readonly) bool showAttributionButtons;
@property bool showMorePhotosButton;
@property bool showAddPhotoButton;
@property unsigned long long photosCount;
@property double photoWidth;
@property(retain) _MKPlacePhotosCollectionView * photoGrid;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool requiresPreferredContentSizeInStackingView;
@property bool showAttribution;


- (double)photoWidth;
- (void)_morePhotos;
- (void)_addPhoto;
- (double)_photoCellHeight;
- (void)setPhotoGrid:(id)arg1;
- (bool)showAddPhotoButton;
- (bool)showMorePhotosButton;
- (bool)showAttributionButtons;
- (id)photoGrid;
- (void)setPhotoWidth:(double)arg1;
- (void)_calculatePhotoSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)photosControllerDelegate;
- (void)setShowMorePhotosButton:(bool)arg1;
- (void)setShowAddPhotoButton:(bool)arg1;
- (void)setHasAttribution:(bool)arg1;
- (bool)showAttribution;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setPhotosCount:(unsigned long long)arg1;
- (void)setShowAttribution:(bool)arg1;
- (void)setPhotosControllerDelegate:(id)arg1;
- (id)photos;
- (bool)hasAttribution;
- (unsigned long long)photosCount;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (id)init;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
