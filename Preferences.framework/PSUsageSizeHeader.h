/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView> {
    NSLayoutConstraint * _labelLeadingConstraint;
    NSLayoutConstraint * _labelTrailingConstraint;
    UILabel * _sizeLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *labelLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *labelTrailingConstraint;
@property (nonatomic, retain) UILabel *sizeLabel;
@property (nonatomic, retain) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (id)labelLeadingConstraint;
- (id)labelTrailingConstraint;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setLabelLeadingConstraint:(id)arg1;
- (void)setLabelTrailingConstraint:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setSizeLabel:(id)arg1;
- (void)setSizeLabelHidden:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupConstraints;
- (id)sizeLabel;
- (id)titleLabel;
- (void)updateConstraints;

// Image: /System/Library/AccessibilityBundles/PreferencesFramework.axbundle/PreferencesFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
