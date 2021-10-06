/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaView : UIView {
    NSString * __arrowString;
    unsigned long long  __arrowUpdateFrame;
    CAMPanoramaArrowView * __arrowView;
    double  __currentAverageSpeed;
    double  __currentPaintingAcceleration;
    CAMPanoramaPaintingStatus * __currentPaintingStatus;
    bool  __currentlyMovingTooFast;
    bool  __currentlyShowingMoveInstructions;
    struct CGPoint { 
        double x; 
        double y; 
    }  __initialArrowCenter;
    double  __initialPaintingAcceleration;
    CAMPanoramaLabel * __instructionLabel;
    NSString * __instructionString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __lastLayoutBounds;
    CAMPanoramaLevelView * __levelView;
    UIView * __maskingView;
    NSString * __moveDownString;
    NSString * __moveUpString;
    double * __previousSpeeds;
    NSString * __speedString;
    UIView * __stripBackgroundView;
    UIView * __stripContainerView;
    double  _currentOrientedAcceleration;
    <CAMPanoramaViewDelegate> * _delegate;
    long long  _direction;
    long long  _layoutStyle;
    bool  _painting;
    CAMPanoramaPreviewView * _previewView;
}

@property (nonatomic, readonly, copy) NSString *_arrowString;
@property (setter=_setArrowUpdateFrame:, nonatomic) unsigned long long _arrowUpdateFrame;
@property (nonatomic, readonly) CAMPanoramaArrowView *_arrowView;
@property (setter=_setCurrentAverageSpeed:, nonatomic) double _currentAverageSpeed;
@property (setter=_setCurrentPaintingAcceleration:, nonatomic) double _currentPaintingAcceleration;
@property (setter=_setCurrentPaintingStatus:, nonatomic, retain) CAMPanoramaPaintingStatus *_currentPaintingStatus;
@property (getter=_isCurrentlyMovingTooFast, setter=_setCurrentlyMovingTooFast:, nonatomic) bool _currentlyMovingTooFast;
@property (getter=_isCurrentlyShowingMoveInstructions, setter=_setCurrentlyShowingMoveInstructions:, nonatomic) bool _currentlyShowingMoveInstructions;
@property (setter=_setInitialArrowCenter:, nonatomic) struct CGPoint { double x1; double x2; } _initialArrowCenter;
@property (setter=_setInitialPaintingAcceleration:, nonatomic) double _initialPaintingAcceleration;
@property (nonatomic, readonly) CAMPanoramaLabel *_instructionLabel;
@property (nonatomic, readonly, copy) NSString *_instructionString;
@property (setter=_setLastLayoutBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _lastLayoutBounds;
@property (nonatomic, readonly) CAMPanoramaLevelView *_levelView;
@property (nonatomic, readonly) UIView *_maskingView;
@property (nonatomic, readonly, copy) NSString *_moveDownString;
@property (nonatomic, readonly, copy) NSString *_moveUpString;
@property (nonatomic, readonly) double*_previousSpeeds;
@property (nonatomic, readonly, copy) NSString *_speedString;
@property (nonatomic, readonly) UIView *_stripBackgroundView;
@property (nonatomic, readonly) UIView *_stripContainerView;
@property (setter=_setCurrentOrientedAcceleration:, nonatomic) double currentOrientedAcceleration;
@property (nonatomic) <CAMPanoramaViewDelegate> *delegate;
@property (nonatomic) long long direction;
@property (nonatomic, readonly) UIView *instructionView;
@property (nonatomic) long long layoutStyle;
@property (getter=isPainting, setter=_setPainting:, nonatomic) bool painting;
@property (nonatomic, readonly) CAMPanoramaPreviewView *previewView;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_arrowString;
- (unsigned long long)_arrowUpdateFrame;
- (id)_arrowView;
- (void)_cancelDelayedMoveInstructions;
- (double)_currentAverageSpeed;
- (double)_currentPaintingAcceleration;
- (id)_currentPaintingStatus;
- (void)_hideArrowInstructionsAfterDelay;
- (void)_hideInstructionLabel;
- (void)_hideSpeedInstructionsAfterDelay;
- (struct CGPoint { double x1; double x2; })_initialArrowCenter;
- (double)_initialPaintingAcceleration;
- (id)_instructionLabel;
- (id)_instructionString;
- (bool)_isCurrentlyMovingTooFast;
- (bool)_isCurrentlyShowingMoveInstructions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastLayoutBounds;
- (id)_levelView;
- (id)_maskingView;
- (id)_moveDownString;
- (id)_moveUpString;
- (double*)_previousSpeeds;
- (void)_resetPaintingUIAnimated:(bool)arg1;
- (void)_setArrowUpdateFrame:(unsigned long long)arg1;
- (void)_setCurrentAverageSpeed:(double)arg1;
- (void)_setCurrentOrientedAcceleration:(double)arg1;
- (void)_setCurrentPaintingAcceleration:(double)arg1;
- (void)_setCurrentPaintingStatus:(id)arg1;
- (void)_setCurrentlyMovingTooFast:(bool)arg1;
- (void)_setCurrentlyShowingMoveInstructions:(bool)arg1;
- (void)_setInitialArrowCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setInitialPaintingAcceleration:(double)arg1;
- (void)_setLastLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPainting:(bool)arg1;
- (void)_showArrowInstructions;
- (void)_showMoveDownInstructions;
- (void)_showMoveDownInstructionsAfterDelay;
- (void)_showMoveUpInstructions;
- (void)_showMoveUpInstructionsAfterDelay;
- (void)_showSpeedInstructions;
- (id)_speedString;
- (id)_stripBackgroundView;
- (id)_stripContainerView;
- (void)_updateInstructionLabelText:(id)arg1;
- (double)currentOrientedAcceleration;
- (void)dealloc;
- (id)delegate;
- (long long)direction;
- (void)finishedProcessingPanorama;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPanoramaPreviewView:(id)arg1 layoutStyle:(long long)arg2;
- (id)instructionView;
- (bool)isPainting;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)previewView;
- (void)setDelegate:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDirection:(long long)arg1 animated:(bool)arg2;
- (void)setLayoutStyle:(long long)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)startPainting;
- (void)startProcessingPanorama;
- (void)stopPainting;
- (void)updateOrientedAcceleration:(double)arg1;
- (void)updatePaintingWithStatus:(id)arg1;
- (void)updateToContentSize:(id)arg1;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
