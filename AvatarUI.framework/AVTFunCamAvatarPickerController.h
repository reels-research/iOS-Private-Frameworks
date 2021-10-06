/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTFunCamAvatarPickerController : UIViewController <AVTAvatarPicker, AVTObjectViewController, AVTViewSessionProviderDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    AVTCenteringCollectionViewDelegate * _centeringDelegate;
    <NSObject> * _changeNotificationToken;
    UICollectionView * _collectionView;
    UIView * _container;
    NSArray * _editableRecords;
    AVTRenderingScope * _editableRecordsListRenderingScope;
    AVTEngagementLayout * _engagementLayout;
    AVTUIEnvironment * _environment;
    UICollectionViewFlowLayout * _gridLayout;
    AVTRenderingScope * _gridRenderingScope;
    _AVTAvatarRecordImageProvider * _imageProvider;
    NSArray * _items;
    UIView * _listBottomClippingView;
    AVTFunCamAvatarPickerListLayout * _listLayout;
    <AVTUILogger> * _logger;
    unsigned long long  _mode;
    AVTAvatarListImageItem * _noneItem;
    NSArray * _puppetRecords;
    <AVTAvatarRecord> * _selectedAvatarRecord;
    <AVTAvatarStoreInternal> * _store;
    <AVTAvatarPickerDelegate> * avatarPickerDelegate;
    <AVTPresenterDelegate> * presenterDelegate;
}

@property (nonatomic) <AVTAvatarPickerDelegate> *avatarPickerDelegate;
@property (nonatomic, retain) AVTCenteringCollectionViewDelegate *centeringDelegate;
@property (nonatomic, retain) <NSObject> *changeNotificationToken;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIView *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *editableRecords;
@property (nonatomic, readonly) AVTRenderingScope *editableRecordsListRenderingScope;
@property (nonatomic, retain) AVTEngagementLayout *engagementLayout;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) UICollectionViewFlowLayout *gridLayout;
@property (nonatomic, readonly) AVTRenderingScope *gridRenderingScope;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) UIView *listBottomClippingView;
@property (nonatomic, retain) AVTFunCamAvatarPickerListLayout *listLayout;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) AVTAvatarListImageItem *noneItem;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic, retain) NSArray *puppetRecords;
@property (nonatomic, retain) <AVTAvatarRecord> *selectedAvatarRecord;
@property (nonatomic, retain) <AVTAvatarStoreInternal> *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

+ (id)createClippingViewForSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+ (id)funCamAvatarPickerControllerForStore:(id)arg1;
+ (id /* block */)imageItemInsetsForGrid;
+ (id /* block */)imageItemInsetsForList;
+ (id)itemsFromRecords:(id)arg1;
+ (id)newGridLayout;
+ (id)sessionProviderWithEnvironment:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)avatarPickerDelegate;
- (void)buildCollectionView;
- (bool)canCreateAvatar;
- (id)centeringDelegate;
- (id)changeNotificationToken;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)container;
- (id)editableRecords;
- (id)editableRecordsListRenderingScope;
- (id)engagementLayout;
- (id)environment;
- (struct CGSize { double x1; double x2; })gridItemSize;
- (id)gridLayout;
- (id)gridRenderingScope;
- (id)imageProvider;
- (long long)indexForRecord:(id)arg1;
- (long long)indexForRecordIdentifier:(id)arg1;
- (id)indexPathForNoneItem;
- (id)initWithStore:(id)arg1 environment:(id)arg2;
- (bool)isDisplayingGridLayout;
- (id)items;
- (id)listBottomClippingView;
- (id)listLayout;
- (void)loadView;
- (id)logger;
- (unsigned long long)mode;
- (id)noneItem;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preloadAll;
- (id)presenterDelegate;
- (id)puppetRecords;
- (void)reloadData;
- (void)reloadModel;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)selectItemAtCenterNotifyDelegate:(bool)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3;
- (void)selectItemForAvatarRecord:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3;
- (id)selectedAvatarRecord;
- (id)selectedIndexPath;
- (void)sendSelectionEventToDelegateForItemAtIndexPath:(id)arg1;
- (void)sessionProviderDidEndCameraSession:(id)arg1;
- (void)sessionProviderWillStartCameraSession:(id)arg1;
- (void)setAvatarPickerDelegate:(id)arg1;
- (void)setCenteringDelegate:(id)arg1;
- (void)setChangeNotificationToken:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setEditableRecords:(id)arg1;
- (void)setEngagementLayout:(id)arg1;
- (void)setGridLayout:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setListBottomClippingView:(id)arg1;
- (void)setListLayout:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setNoneItem:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setPuppetRecords:(id)arg1;
- (void)setSelectedAvatarRecord:(id)arg1;
- (void)setStore:(id)arg1;
- (void)startObservingChangesIfNeeded;
- (id)store;
- (void)updateViewForCurrentMode;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/AvatarUI.axbundle/AvatarUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axFunCamAvatarCarousel;
- (id)_axLabelForIndexPath:(id)arg1;
- (void)_setAXFunCamAvatarCarousel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;

@end
