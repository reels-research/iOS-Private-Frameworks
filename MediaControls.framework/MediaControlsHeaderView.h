/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsHeaderView : UIView {
    MTMaterialView * _artworkBackground;
    UIImageView * _artworkView;
    long long  _buttonType;
    MPButton * _doneButton;
    UIButton * _launchNowPlayingAppButton;
    bool  _marqueeEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideSize;
    UIImageView * _placeholderArtworkView;
    MPCPlayerPath * _playerPath;
    UILabel * _primaryLabel;
    MPUMarqueeView * _primaryMarqueeView;
    NSString * _primaryString;
    MediaControlsRouteLabel * _routeLabel;
    bool  _routing;
    MediaControlsRoutingButtonView * _routingButton;
    UILabel * _secondaryLabel;
    MPUMarqueeView * _secondaryMarqueeView;
    NSString * _secondaryString;
    UIView * _shadow;
    bool  _shouldUseOverrideSize;
    long long  _style;
    bool  _transitioning;
}

@property (nonatomic, retain) MTMaterialView *artworkBackground;
@property (nonatomic, retain) UIImageView *artworkView;
@property (nonatomic) long long buttonType;
@property (nonatomic, retain) MPButton *doneButton;
@property (nonatomic, retain) UIButton *launchNowPlayingAppButton;
@property (nonatomic) bool marqueeEnabled;
@property (nonatomic) struct CGSize { double x1; double x2; } overrideSize;
@property (nonatomic, retain) UIImageView *placeholderArtworkView;
@property (nonatomic, copy) MPCPlayerPath *playerPath;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) MPUMarqueeView *primaryMarqueeView;
@property (nonatomic, copy) NSString *primaryString;
@property (nonatomic, retain) MediaControlsRouteLabel *routeLabel;
@property (getter=isRouting, nonatomic) bool routing;
@property (nonatomic, retain) MediaControlsRoutingButtonView *routingButton;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) MPUMarqueeView *secondaryMarqueeView;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic, retain) UIView *shadow;
@property (nonatomic) bool shouldUseOverrideSize;
@property (nonatomic) long long style;
@property (getter=isTransitioning, nonatomic) bool transitioning;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateRTL;
- (void)_updateStyle;
- (id)artworkBackground;
- (id)artworkView;
- (long long)buttonType;
- (void)clearOverrideSize;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRouting;
- (bool)isTransitioning;
- (id)launchNowPlayingAppButton;
- (struct CGSize { double x1; double x2; })layoutTextInAvailableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 setFrames:(bool)arg2;
- (bool)marqueeEnabled;
- (struct CGSize { double x1; double x2; })overrideSize;
- (id)placeholderArtworkView;
- (id)playerPath;
- (id)primaryLabel;
- (id)primaryMarqueeView;
- (id)primaryString;
- (id)routeLabel;
- (id)routingButton;
- (id)secondaryLabel;
- (id)secondaryMarqueeView;
- (id)secondaryString;
- (void)setArtworkBackground:(id)arg1;
- (void)setArtworkView:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setLaunchNowPlayingAppButton:(id)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setOverrideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholderArtworkView:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryMarqueeView:(id)arg1;
- (void)setPrimaryString:(id)arg1;
- (void)setRouteLabel:(id)arg1;
- (void)setRouting:(bool)arg1;
- (void)setRoutingButton:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryMarqueeView:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setShouldUseOverrideSize:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTransitioning:(bool)arg1;
- (id)shadow;
- (bool)shouldUseOverrideSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArtworkStyle;

// Image: /System/Library/AccessibilityBundles/MediaControls.axbundle/MediaControls

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityCombinedTitleElement;
- (bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityElements;
- (void)layoutSubviews;

@end
