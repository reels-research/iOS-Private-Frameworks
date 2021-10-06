/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell {
    PKPaymentTransactionGroupItem * _groupItem;
    PKDashboardPaymentTransactionItem * _item;
    PKPaymentTransactionView * _transactionView;
}

@property (nonatomic, retain) PKPaymentTransactionGroupItem *groupItem;
@property (nonatomic, retain) PKDashboardPaymentTransactionItem *item;
@property (nonatomic, readonly) PKPaymentTransactionView *transactionView;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (id)groupItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (double)maxWidthForTransactionCellInWidth:(double)arg1;
- (void)prepareForReuse;
- (void)setGroupItem:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setShowsBottomSeparator:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transactionView;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end