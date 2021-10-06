/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconContentView : UIView {
    double  _aspectRatio;
    <HUIconContentViewDelegate> * _delegate;
    bool  _disableContinuousAnimation;
    unsigned long long  _displayContext;
    unsigned long long  _displayStyle;
    <HFIconDescriptor> * _iconDescriptor;
    unsigned long long  _iconSize;
    long long  _primaryState;
    long long  _renderingMode;
    UIVisualEffect * _vibrancyEffect;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) <HUIconContentViewDelegate> *delegate;
@property (nonatomic) bool disableContinuousAnimation;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) long long primaryState;
@property (nonatomic) long long renderingMode;
@property (nonatomic, retain) UIVisualEffect *vibrancyEffect;

+ (Class)iconContentViewClassForIconDescriptor:(id)arg1;
+ (id)iconImageNamed:(id)arg1 withSize:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_updateOverrideRenderingModeForSubviewsOfView:(id)arg1;
- (double)aspectRatio;
- (id)delegate;
- (bool)disableContinuousAnimation;
- (unsigned long long)displayContext;
- (unsigned long long)displayStyle;
- (id)iconDescriptor;
- (unsigned long long)iconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateRenderingMode;
- (id)managedVisualEffectViews;
- (long long)primaryState;
- (long long)renderingMode;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)setAspectRatio:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableContinuousAnimation:(bool)arg1;
- (void)setDisplayContext:(unsigned long long)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setPrimaryState:(long long)arg1;
- (void)setRenderingMode:(long long)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (id)vibrancyEffect;
- (bool)wantsManagedVibrancyEffect;

@end
