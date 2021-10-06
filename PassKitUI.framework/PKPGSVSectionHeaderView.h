/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView> {
    UIButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    <PKPGSVSectionHeaderViewDelegate> * _delegate;
    UILabel * _environmentLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    unsigned long long  _passType;
    bool  _showActivityIndicator;
    UILabel * _titleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long passType;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (void)_addTapped;
- (bool)_shouldShowMoreInfoButtonForBarcodePass;
- (void)addTapped;
- (id)init;
- (void)layoutSubviews;
- (id)leadingView;
- (bool)needsUpdate;
- (unsigned long long)passType;
- (bool)showActivityIndicator;
- (id)trailingView;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)didMoveToWindow;
- (id)initWithPassType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)setShowActivityIndicator:(bool)arg1;

@end
