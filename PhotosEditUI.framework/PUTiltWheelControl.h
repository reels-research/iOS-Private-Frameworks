/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUTiltWheelControl : UIControl <PUTiltWheelDataSource> {
    bool  __needsDataReload;
    struct CGPoint { 
        double x; 
        double y; 
    }  __panPreviousPoint;
    PXUISnappingController * __snappingController;
    PUTiltWheel * __tiltWheel;
    PUTiltWheelTriangleView * __triangleView;
    double  _maxTiltAngle;
    double  _minTiltAngle;
    double  _tiltAngle;
    int  _wheelOrientation;
}

@property (setter=_setNeedsDataReload:, nonatomic) bool _needsDataReload;
@property (setter=_setPanPreviousPoint:, nonatomic) struct CGPoint { double x1; double x2; } _panPreviousPoint;
@property (setter=_setSnappingController:, nonatomic, retain) PXUISnappingController *_snappingController;
@property (setter=_setTiltWheel:, nonatomic, retain) PUTiltWheel *_tiltWheel;
@property (setter=_setTriangleView:, nonatomic, retain) PUTiltWheelTriangleView *_triangleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxTiltAngle;
@property (nonatomic) double minTiltAngle;
@property (readonly) Class superclass;
@property (nonatomic) double tiltAngle;
@property (nonatomic) int wheelOrientation;

// Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI

- (void).cxx_destruct;
- (double)_angleBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2 measuredFrom:(struct CGPoint { double x1; double x2; })arg3;
- (double)_circumferenceVelocityInPan:(id)arg1;
- (bool)_needsDataReload;
- (struct CGPoint { double x1; double x2; })_panPreviousPoint;
- (void)_setNeedsDataReload:(bool)arg1;
- (void)_setPanPreviousPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSnappingController:(id)arg1;
- (void)_setTiltAngleFromUserInteraction:(double)arg1;
- (void)_setTiltWheel:(id)arg1;
- (void)_setTriangleView:(id)arg1;
- (id)_snappingController;
- (double)_tiltAngleForDraggedRotation:(double)arg1;
- (id)_tiltWheel;
- (double)_tiltWheelSize;
- (id)_triangleView;
- (void)_updateTiltWheelConstraintsIfNeeded;
- (void)_updateTiltWheelTransform;
- (void)_updateTriangleConstraintsIfNeeded;
- (void)handlePanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxTiltAngle;
- (double)minTiltAngle;
- (void)setMaxTiltAngle:(double)arg1;
- (void)setMinTiltAngle:(double)arg1;
- (void)setTiltAngle:(double)arg1;
- (void)setTiltAngle:(double)arg1 animated:(bool)arg2;
- (void)setWheelOrientation:(int)arg1;
- (double)tiltAngle;
- (unsigned long long)tiltWheelMarkedIndicatorStep:(id)arg1;
- (long long)tiltWheelMaximumIndicatedDegree:(id)arg1;
- (long long)tiltWheelMinimumIndicatedDegree:(id)arg1;
- (unsigned long long)tiltWheelNumericIndicatorStep:(id)arg1;
- (int)tiltWheelOrientation:(id)arg1;
- (void)updateConstraints;
- (int)wheelOrientation;

// Image: /System/Library/AccessibilityBundles/PhotosEditUI.axbundle/PhotosEditUI

+ (Class)safeCategoryBaseClass;

- (double)_axDegreesToRadians:(double)arg1;
- (double)_axRadiansToDegrees:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForTiltAngle:(double)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
