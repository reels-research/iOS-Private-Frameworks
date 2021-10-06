/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlCoachingDeviceView : UIView {
    BKUIRotationArrowAnimationLayer * _animationLayer;
    bool  _animationRunning;
    UIImage * _deviceImage;
    UIImageView * _deviceView;
    bool  _isDisplayZoomEnabled;
    long long  _orientation;
}

@property (nonatomic, retain) BKUIRotationArrowAnimationLayer *animationLayer;
@property (nonatomic) bool animationRunning;
@property (nonatomic, retain) UIImage *deviceImage;
@property (nonatomic, retain) UIImageView *deviceView;
@property (nonatomic) bool isDisplayZoomEnabled;
@property (nonatomic, readonly) long long orientation;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

- (void).cxx_destruct;
- (id)_colorForStroke;
- (id)animationLayer;
- (bool)animationRunning;
- (id)deviceImage;
- (id)deviceView;
- (id)initWithCompactLayout:(bool)arg1;
- (bool)isDisplayZoomEnabled;
- (void)layoutSubviews;
- (long long)orientation;
- (void)resetDevice;
- (void)rotateDeviceToAngle:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setAnimationLayer:(id)arg1;
- (void)setAnimationRunning:(bool)arg1;
- (void)setDeviceHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDeviceImage:(id)arg1;
- (void)setDeviceView:(id)arg1;
- (void)setIsDisplayZoomEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)startAnimation;
- (void)stopAnimation;

// Image: /System/Library/AccessibilityBundles/BiometricKitUI.axbundle/BiometricKitUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityOverridesInvalidFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
