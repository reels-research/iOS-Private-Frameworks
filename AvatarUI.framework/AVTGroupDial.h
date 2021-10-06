/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTGroupDial : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    NSArray * _cachedGroupTitleSizes;
    AVTCenteringCollectionViewDelegate * _centeringCollectionViewDelegate;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    unsigned long long  _currentScrollDirection;
    long long  _currentSelectedItemIndex;
    <AVTGroupDialDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    NSArray * _groupTitles;
    bool  _hasFinalizedSelection;
    bool  _isMoving;
    AVTGroupDialMaskingView * _maskingView;
    NSIndexPath * _shimmeringItemIndexPath;
}

@property (nonatomic, readonly) NSArray *cachedGroupTitleSizes;
@property (nonatomic, readonly) AVTCenteringCollectionViewDelegate *centeringCollectionViewDelegate;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (nonatomic) long long currentSelectedItemIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTGroupDialDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) NSArray *groupTitles;
@property (nonatomic) bool hasFinalizedSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMoving;
@property (nonatomic, retain) AVTGroupDialMaskingView *maskingView;
@property (nonatomic) long long selectedGroupIndex;
@property (nonatomic) NSIndexPath *shimmeringItemIndexPath;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

+ (double)estimatedContentWidthForTitleSizes:(id)arg1;
+ (bool)shouldScrollGivenTitleSizes:(id)arg1 fittingWidth:(double)arg2;

- (void).cxx_destruct;
- (void)cacheTitleSizes;
- (id)cachedGroupTitleSizes;
- (struct CGSize { double x1; double x2; })cellSizeForItemAtIndex:(long long)arg1;
- (id)centeringCollectionViewDelegate;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (unsigned long long)currentScrollDirection;
- (long long)currentSelectedItemIndex;
- (id)delegate;
- (id)environment;
- (id)groupTitles;
- (bool)hasFinalizedSelection;
- (id)initWithGroupTitles:(id)arg1 environment:(id)arg2;
- (bool)isMoving;
- (void)layoutSubviews;
- (id)maskingView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)selectItemAtIndex:(long long)arg1 updateScrollPosition:(bool)arg2 animated:(bool)arg3;
- (long long)selectedGroupIndex;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setContentPadding:(double)arg1;
- (void)setCurrentScrollDirection:(unsigned long long)arg1;
- (void)setCurrentSelectedItemIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasFinalizedSelection:(bool)arg1;
- (void)setIsMoving:(bool)arg1;
- (void)setMaskingView:(id)arg1;
- (void)setSelectedGroupIndex:(long long)arg1;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(bool)arg2;
- (void)setShimmeringItemIndexPath:(id)arg1;
- (void)setupDial;
- (void)setupMasking;
- (id)shimmeringItemIndexPath;
- (void)startDiscoverability;
- (void)stopDiscoverability;
- (void)updateForEndingScroll;
- (void)updateSelectedState:(bool)arg1 forItemAtIndexPath:(id)arg2 animated:(bool)arg3;

// Image: /System/Library/AccessibilityBundles/AvatarUI.axbundle/AvatarUI

+ (Class)safeCategoryBaseClass;

- (bool)_axScrollDial:(bool)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
