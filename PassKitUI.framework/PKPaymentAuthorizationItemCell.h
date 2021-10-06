/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {
    NSString * _accessibilityLabel;
    UIImageView * _alertView;
    UIImageView * _arrowView;
    NSMutableArray * _constraints;
    bool  _constraintsDirty;
    NSAttributedString * _label;
    UIImage * _labelImage;
    UIImageView * _labelImageView;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    UIView * _separatorView;
    bool  _showsDisclosure;
    bool  _showsSeperator;
    NSAttributedString * _value;
    NSMutableArray * _valueViews;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSAttributedString *label;
@property (nonatomic, copy) UIImage *labelImage;
@property (nonatomic) bool showsDisclosure;
@property (nonatomic) bool showsSeperator;
@property (nonatomic, copy) NSAttributedString *value;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2;
- (id)_createValueView;
- (id)accessibilityLabel;
- (id)addValue:(id)arg1 type:(unsigned long long)arg2;
- (id)colorForValueType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (id)labelImage;
- (void)prepareForReuse;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelImage:(id)arg1;
- (void)setShowsDisclosure:(bool)arg1;
- (void)setShowsSeperator:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (bool)showsDisclosure;
- (bool)showsSeperator;
- (void)updateConstraints;
- (id)value;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_createSubviews;
- (unsigned long long)accessibilityTraits;

@end
