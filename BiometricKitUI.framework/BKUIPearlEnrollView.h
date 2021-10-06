/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlEnrollView : UIView <BKUIVideoCaptureSesssionDelegate> {
    bool  _active;
    bool  _blurInProgress;
    UIView * _cameraShadeView;
    CAShapeLayer * _circleMaskLayer;
    UIView * _circleMaskView;
    unsigned long long  _correctionSamplesCount;
    BKUIPearlCrossHairsView * _crossHairs;
    double  _currentCorrectedPitch;
    NSString * _debugFrameInformation;
    UILabel * _debugLabel;
    bool  _debugOverlayVisible;
    NSString * _debugStatusInformation;
    NSString * _debugTemplateInformation;
    <BKUIPearlEnrollViewDelegate> * _delegate;
    bool  _didStartCapture;
    bool  _entryAnimationAlreadyRan;
    NSArray * _entryAnimationImages;
    UIImageView * _entryAnimationView;
    unsigned long long  _fillHoldoffFrameCount;
    unsigned long long  _frameCount;
    NSTimer * _nudgeTimer;
    unsigned long long  _nudgesNudged;
    bool  _nudgesPaused;
    bool  _nudging;
    unsigned long long  _pendingRaiseLowerGuidanceState;
    BKUIPearlPillContainerView * _pillContainer;
    double  _pitchCorrection;
    double  _pitchCorrectionSamples;
    double  _pitchMax;
    double  _pitchMin;
    UILayoutGuide * _portalLayoutGuide;
    NSArray * _portalLayoutGuideConstraints;
    BKUIPearlPositioningGuideView * _positioningGuide;
    bool  _progressiveBlur;
    NSTimer * _raiseLowerGuidanceDelayTimer;
    bool  _raiseLowerGuidanceStatePending;
    UILabel * _repositionPhoneLabel;
    CAShapeLayer * _roundedRectMaskLayer;
    UIView * _roundedRectMaskView;
    NSDate * _startTime;
    int  _state;
    NSDate * _stateStart;
    bool  _stateTransitionInProgress;
    BKUIPearlMovieLoopView * _tutorialMovieView;
    AVPlayer * _tutorialPlayer;
    BKUIPearlVideoCaptureSession * _videoCaptureSession;
}

@property (nonatomic) bool active;
@property (nonatomic) bool debugOverlayVisible;
@property (nonatomic) <BKUIPearlEnrollViewDelegate> *delegate;
@property (nonatomic, retain) BKUIPearlPillContainerView *pillContainer;
@property (nonatomic, readonly) UILayoutGuide *portalLayoutGuide;
@property (nonatomic, retain) NSArray *portalLayoutGuideConstraints;
@property (nonatomic) int state;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

- (void).cxx_destruct;
- (bool)_animateCircleMaskWithPositioningGuide;
- (void)_animateToEntryAnimationWithCompletion:(id /* block */)arg1;
- (void)_animateToFinishedWithCompletion:(id /* block */)arg1;
- (void)_animateToFirstScanCompleteWithCompletion:(id /* block */)arg1;
- (void)_animateToFirstScanWithCompletion:(id /* block */)arg1;
- (void)_animateToNeedsCenterBinWithCompletion:(id /* block */)arg1;
- (void)_animateToNeedsPositioningFromState:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)_animateToPartialCaptureWithCompletion:(id /* block */)arg1;
- (void)_animateToScanningStateWithCompletion:(id /* block */)arg1;
- (void)_animateToSecondScanCompleteWithCompletion:(id /* block */)arg1;
- (void)_animateToSecondScanWithCompletion:(id /* block */)arg1;
- (void)_animateToState:(int)arg1 fromState:(int)arg2 completion:(id /* block */)arg3;
- (void)_animateToTutorialWithCompletion:(id /* block */)arg1;
- (id)_enrollMaskPathWithRadius:(double)arg1;
- (id)_maskPathWithRadius:(double)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_needsPositioningPreviewTransform;
- (double)_nonOccludingCircleMaskRadius;
- (void)_nudgeIfNecessary;
- (double)_previewZoomLevel;
- (double)_progressiveBlurAmountForPitch:(double)arg1;
- (void)_recordDataFrameWithFaceState:(id)arg1;
- (void)_runTutorialLoopWithDuration:(double)arg1 delay:(double)arg2 loopDelay:(double)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_scanningAndPartialCapturePreviewTransform;
- (void)_setRaiseLowerGuidanceLabelState:(unsigned long long)arg1;
- (void)_setState:(int)arg1 completion:(id /* block */)arg2;
- (void)_startNudgeTimer;
- (void)_stopNudgeTimer;
- (void)_updateCorrectionEstimates:(double)arg1 yaw:(double)arg2;
- (void)_updateDebugOverlay;
- (bool)active;
- (double)completedRingRadius;
- (void)dealloc;
- (bool)debugOverlayVisible;
- (id)delegate;
- (bool)expectsRunningVideoCaptureSession:(id)arg1;
- (id)initWithVideoCaptureSession:(id)arg1;
- (void)layoutSubviews;
- (double)percentOfPillsCompleted;
- (id)pillContainer;
- (double)pillRingRadius;
- (struct CGPoint { double x1; double x2; })portalCenter;
- (id)portalLayoutGuide;
- (id)portalLayoutGuideConstraints;
- (struct CGPoint { double x1; double x2; })portalOffset;
- (double)portalRadius;
- (id)previewLayer;
- (void)setActive:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCameraBlurAmount:(double)arg1 useShade:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setCameraBlurred:(bool)arg1;
- (void)setDebugOverlayVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntryAnimationImages:(id)arg1;
- (void)setFailed;
- (void)setMovieViewHidden:(bool)arg1;
- (void)setNudgesPaused:(bool)arg1;
- (void)setPillContainer:(id)arg1;
- (void)setPitch:(double)arg1 yaw:(double)arg2;
- (void)setPortalLayoutGuideConstraints:(id)arg1;
- (void)setSplashImageView:(id)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 completion:(id /* block */)arg2;
- (void)setSuspended:(bool)arg1;
- (void)startCapture;
- (int)state;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })tutorialMovieSize;
- (double)tutorialRingRadius;
- (void)updatePortalLayoutGuide;
- (void)updateWithFaceState:(id)arg1;
- (void)updateWithProgress:(id)arg1;
- (bool)useRegularPadLayout;
- (void)willDisappear;

// Image: /System/Library/AccessibilityBundles/BiometricKitUI.axbundle/BiometricKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axSpokenGuidance;
- (void)_setAXSpokenGuidance:(id)arg1;
- (void)_updateRaiseLowerGuidanceLabelIfNeededForPitch:(double)arg1;
- (id)init;

@end
