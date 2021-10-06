/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamImageQuadEditOverlay : UIView <ICDocCamImageQuadEditPanGestureRecognizerDelegate> {
    <ICDocCamImageQuadEditOverlayDelegate> * _delegate;
    UIImage * _image;
    UIColor * _invalidRectColor;
    bool  _isDisplayingValidQuad;
    bool  _isTempOverlay;
    NSArray * _knobAccessibilityElements;
    UIColor * _knobColor;
    double  _knobHeight;
    CALayer * _knobLayer;
    NSArray * _knobs;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastGestureTranslation;
    CALayer * _loupeContentsLayer;
    CALayer * _loupeLayer;
    long long  _orientation;
    CAShapeLayer * _outlineLayer;
    ICDocCamImageQuadEditPanGestureRecognizer * _panGR;
    NSMutableArray * _panHistory;
    unsigned long long  _panHistoryIdx;
    ICDocCamImageQuad * _quad;
    CALayer * _selectedKnob;
    double  _tempOverlayMagnification;
    bool  _tempOverlayQuadIsValid;
    UIColor * _validRectColor;
}

@property (nonatomic, readonly) ICDocCamImageQuad *adjustedQuad;
@property (nonatomic, readonly) bool containsPointOutsideOfOverlayBounds;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICDocCamImageQuadEditOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIColor *invalidRectColor;
@property (nonatomic) bool isDisplayingValidQuad;
@property (nonatomic, readonly) bool isDraggingKnob;
@property (nonatomic, readonly) bool isQuadValid;
@property (nonatomic) bool isTempOverlay;
@property (nonatomic, copy) NSArray *knobAccessibilityElements;
@property (nonatomic, retain) UIColor *knobColor;
@property (nonatomic) double knobHeight;
@property (nonatomic, retain) CALayer *knobLayer;
@property (nonatomic, retain) NSArray *knobs;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastGestureTranslation;
@property (nonatomic, retain) CALayer *loupeContentsLayer;
@property (nonatomic, retain) CALayer *loupeLayer;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) CAShapeLayer *outlineLayer;
@property (nonatomic, readonly) UIBezierPath *outlinePath;
@property (nonatomic, retain) ICDocCamImageQuadEditPanGestureRecognizer *panGR;
@property (nonatomic, retain) NSMutableArray *panHistory;
@property (nonatomic) unsigned long long panHistoryIdx;
@property (nonatomic, retain) ICDocCamImageQuad *quad;
@property (nonatomic, retain) CALayer *selectedKnob;
@property (readonly) Class superclass;
@property (nonatomic) double tempOverlayMagnification;
@property (nonatomic) bool tempOverlayQuadIsValid;
@property (nonatomic, readonly) UIColor *validRectColor;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (bool)accessibilityIgnoresInvertColors;
- (id)adjustedQuad;
- (id)closestKnobToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)commonInit;
- (bool)containsPointOutsideOfOverlayBounds;
- (id)delegate;
- (void)didPan:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidRectColor;
- (bool)isDisplayingValidQuad;
- (bool)isDraggingKnob;
- (bool)isQuadValid;
- (bool)isTempOverlay;
- (id)knobAccessibilityElements;
- (id)knobColor;
- (double)knobHeight;
- (id)knobLayer;
- (id)knobs;
- (struct CGPoint { double x1; double x2; })lastGestureTranslation;
- (void)layoutSubviews;
- (id)loupeContentsLayer;
- (id)loupeLayer;
- (long long)orientation;
- (id)outlineLayer;
- (id)outlinePath;
- (id)panGR;
- (id)panHistory;
- (unsigned long long)panHistoryIdx;
- (id)quad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectFromApplyingOrientation:(long long)arg1 toContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)selectedKnob;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 orientation:(long long)arg2;
- (void)setIsDisplayingValidQuad:(bool)arg1;
- (void)setIsTempOverlay:(bool)arg1;
- (void)setKnobAccessibilityElements:(id)arg1;
- (void)setKnobColor:(id)arg1;
- (void)setKnobHeight:(double)arg1;
- (void)setKnobLayer:(id)arg1;
- (void)setKnobs:(id)arg1;
- (void)setLastGestureTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLoupeContentsLayer:(id)arg1;
- (void)setLoupeLayer:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOutlineLayer:(id)arg1;
- (void)setPanGR:(id)arg1;
- (void)setPanHistory:(id)arg1;
- (void)setPanHistoryIdx:(unsigned long long)arg1;
- (void)setQuad:(id)arg1;
- (void)setSelectedKnob:(id)arg1;
- (void)setTempOverlayMagnification:(double)arg1;
- (void)setTempOverlayMagnification:(double)arg1 animationDuration:(double)arg2;
- (void)setTempOverlayQuadIsValid:(bool)arg1;
- (void)setUpKnobs;
- (void)setupLoupeLayerIfNeeded;
- (double)tempOverlayMagnification;
- (bool)tempOverlayQuadIsValid;
- (void)touchesBeganOnQuadEditPanGestureRecognizerDelegate:(id)arg1;
- (void)unselectAllKnobs;
- (void)updateKnobLocationsToRect:(id)arg1;
- (void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;
- (void)updateOutlineAndKnobColorForIsValid:(bool)arg1;
- (void)updateOutlineLayer;
- (void)updateSelectedKnobContents;
- (id)validRectColor;

@end
