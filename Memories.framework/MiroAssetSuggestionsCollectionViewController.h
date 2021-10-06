/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAssetSuggestionsCollectionViewController : UICollectionViewController {
    NSMutableArray * _allAssets;
    NSArray * _assets;
    <MiroAssetSuggestionsCollectionViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    NSString * _memoryLocalizedTitle;
    UIBarButtonItem * _showAllButton;
    bool  _showDebugInterfaces;
}

@property (nonatomic, readonly) NSMutableArray *allAssets;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic) <MiroAssetSuggestionsCollectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, copy) NSString *memoryLocalizedTitle;
@property (nonatomic, retain) UIBarButtonItem *showAllButton;
@property (nonatomic) bool showDebugInterfaces;

+ (unsigned long long)_indexOAssetWithCreationDate:(id)arg1 inChronologicallySortedAssets:(id)arg2 insertionIndex:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (id)_assetAtIndex:(unsigned long long)arg1;
- (long long)_indexOfAssetID:(id)arg1;
- (id)_selectedAssets;
- (void)_setupPopoverPresentationIfNecessary:(id)arg1 fromView:(id)arg2;
- (void)_updateDebugLabelsOnCell:(id)arg1 withAsset:(id)arg2;
- (void)_updateLayoutWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)arg1;
- (id)allAssets;
- (id)assets;
- (bool)assetsArePhotosOnly;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)done:(id)arg1;
- (id)doneButton;
- (id)memoryLocalizedTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)selectCellsWithAssetIDs:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setMemoryLocalizedTitle:(id)arg1;
- (void)setShowAllButton:(id)arg1;
- (void)setShowDebugInterfaces:(bool)arg1;
- (void)showAll:(id)arg1;
- (id)showAllButton;
- (bool)showDebugInterfaces;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
