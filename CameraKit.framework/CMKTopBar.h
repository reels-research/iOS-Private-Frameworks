/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTopBar : UIView <CMKExpandableMenuButtonDelegate> {
    CMKHDRButton * _HDRButton;
    bool  __HDRButtonExpanded;
    NSMutableArray * __allowedControls;
    UIView * __backgroundView;
    CMKExpandableMenuButton * __expandedMenuButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __expandedMenuButtonTappableInsets;
    bool  __flashButtonExpanded;
    UIView * __flipButtonTopLayoutSpacer;
    bool  __timerButtonExpanded;
    long long  _backgroundStyle;
    <CMKTopBarDelegate> * _delegate;
    CMKElapsedTimeView * _elapsedTimeView;
    CMKFlashButton * _flashButton;
    CMKFlipButton * _flipButton;
    long long  _orientation;
    long long  _style;
    CMKTimerButton * _timerButton;
}

@property (nonatomic, retain) CMKHDRButton *HDRButton;
@property (getter=_isHDRButtonExpanded, setter=_setHDRButtonExpanded:, nonatomic) bool _HDRButtonExpanded;
@property (nonatomic, readonly) NSMutableArray *_allowedControls;
@property (nonatomic, readonly) UIView *_backgroundView;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CMKExpandableMenuButton *_expandedMenuButton;
@property (setter=_setExpandedMenuButtonTappableInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _expandedMenuButtonTappableInsets;
@property (getter=_isFlashButtonExpanded, setter=_setFlashButtonExpanded:, nonatomic) bool _flashButtonExpanded;
@property (nonatomic, readonly) UIView *_flipButtonTopLayoutSpacer;
@property (getter=_isTimerButtonExpanded, setter=_setTimerButtonExpanded:, nonatomic) bool _timerButtonExpanded;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) <CMKTopBarDelegate> *delegate;
@property (nonatomic, retain) CMKElapsedTimeView *elapsedTimeView;
@property (nonatomic, retain) CMKFlashButton *flashButton;
@property (nonatomic, retain) CMKFlipButton *flipButton;
@property (getter=isFloating, nonatomic, readonly) bool floating;
@property (nonatomic) long long orientation;
@property (nonatomic) long long style;
@property (nonatomic, retain) CMKTimerButton *timerButton;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

- (void).cxx_destruct;
- (id)HDRButton;
- (id)_allowedControls;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForStillImageMode;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForVideoMode;
- (id)_backgroundView;
- (bool)_buttonsExpandHorizontally;
- (void)_commonCMKTopBarInitialization;
- (id)_expandedMenuButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expandedMenuButtonTappableInsets;
- (id)_flipButtonTopLayoutSpacer;
- (bool)_isFlashButtonExpanded;
- (bool)_isHDRButtonExpanded;
- (bool)_isTimerButtonExpanded;
- (void)_layoutControls:(id)arg1 apply:(bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_setExpandedMenuButtonTappableInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setFlashButtonExpanded:(bool)arg1;
- (void)_setHDRButtonExpanded:(bool)arg1;
- (void)_setTimerButtonExpanded:(bool)arg1;
- (void)_setupConstraintsForDefaultStyle;
- (void)_setupConstraintsForFloatingRecordingStyle;
- (void)_setupConstraintsForFloatingStyle;
- (void)_setupDefaultBackgroundConstraints;
- (void)_setupDefaultElapsedTimeViewConstraints;
- (void)_setupDefaultFlipButtonConstraints;
- (void)_setupFloatingBackgroundConstraints;
- (void)_setupFloatingFlipButtonConstraints;
- (void)_setupFloatingRecordingBackgroundConstraints;
- (void)_setupFloatingRecordingElapsedTimeViewConstraints;
- (bool)_shouldHideElapsedTimeView;
- (bool)_shouldHideFlashButton;
- (bool)_shouldHideFlipButton;
- (bool)_shouldHideHDRButton;
- (bool)_shouldHideTimerButton;
- (void)_updateBackgroundStyleAnimated:(bool)arg1;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(bool)arg1;
- (void)_updateStyleAnimated:(bool)arg1;
- (long long)backgroundStyle;
- (void)collapseMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (void)configureForMode:(long long)arg1;
- (id)delegate;
- (id)elapsedTimeView;
- (void)expandMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)flashButton;
- (id)flipButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFloating;
- (void)layoutSubviews;
- (long long)orientation;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)setTimerButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)timerButton;

// Image: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityOnlyComparesByXAxis;
- (bool)shouldGroupAccessibilityChildren;

@end
