/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController> {
    CCUIButtonModuleView * _buttonModuleView;
    bool  _expanded;
}

@property (nonatomic, readonly) CCUIButtonModuleView *buttonView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *selectedGlyphColor;
@property (nonatomic, retain) UIImage *selectedGlyphImage;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (id)buttonView;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (id)glyphColor;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (id)glyphState;
- (bool)isExpanded;
- (bool)isSelected;
- (double)preferredExpandedContentHeight;
- (id)selectedGlyphColor;
- (id)selectedGlyphImage;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedGlyphColor:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/ControlCenterUIKit.axbundle/ControlCenterUIKit

+ (Class)safeCategoryBaseClass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityControlCenterButtonFrame;
- (id)_accessibilityControlCenterButtonHint;
- (id)_accessibilityControlCenterButtonIdentifier;
- (bool)_accessibilityControlCenterButtonIsToggle;
- (id)_accessibilityControlCenterButtonLabel;
- (id)_accessibilityControlCenterButtonPath;
- (unsigned long long)_accessibilityControlCenterButtonTraits;
- (id)_accessibilityControlCenterElementToFocusAfterClose;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewDidLoad;

@end
