/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLAdjustmentModel : NSObject {
    double  _autoBlackLevelAtShadowsMaxLevel;
    double  _autoShadowsMaxLevel;
    double  _blackLevel;
    double  _brightness;
    CIFilter * _colorBalanceFilter;
    CIFilter * _colorFilter;
    double  _contrast;
    CIFilter * _curvesFilter;
    CIFilter * _faceBalanceFilter;
    double  _faceBalanceWarmth;
    bool  _hasColor;
    bool  _hasExposure;
    bool  _hasFaceBalance;
    bool  _hasPentaCurve;
    bool  _hasSaturation;
    bool  _hasSkyAndGrass;
    bool  _hasUnderwaterBalance;
    bool  _hasWhiteBalance;
    long long  _highlightShadowAdjustVersion;
    CIFilter * _highlightsAndShadowsFilter;
    double  _histogramAverageLinearBlue;
    double  _histogramAverageLinearGreen;
    double  _histogramAverageLinearRed;
    double  _histogramBlackPoint;
    double  _histogramWhitePoint;
    bool  _isChainBuilt;
    bool  _reprocessFaceBalance;
    bool  _reprocessPentaCurve;
    bool  _reprocessSaturation;
    bool  _reprocessSkyAndGrass;
    bool  _reprocessUnderwaterBalance;
    bool  _reprocessWhiteBalance;
    double  _saturation;
    double  _saturationGrass;
    double  _saturationSky;
    CIFilter * _skyAndGrassFilter;
    CIFilter * _tempAndTintFilter;
    double  _underwaterBalanceDepthStrength;
    CIFilter * _underwaterBalanceFilter;
    double  _underwaterBalanceWaterBlend;
    bool  _useVibrancy;
    CIFilter * _vibranceFilter;
    struct { 
        long long type; 
        double x; 
        double y; 
        double ri; 
        double gq; 
        double b; 
    }  _whiteBalance;
    double  _whiteLevel;
}

@property (nonatomic, retain) CIFilter *colorBalanceFilter;
@property (nonatomic, retain) CIFilter *colorFilter;
@property (nonatomic, retain) CIFilter *curvesFilter;
@property (nonatomic, retain) CIFilter *faceBalanceFilter;
@property (nonatomic, retain) CIFilter *highlightsAndShadowsFilter;
@property (nonatomic, retain) CIFilter *skyAndGrassFilter;
@property (nonatomic, retain) CIFilter *tempAndTintFilter;
@property (nonatomic, retain) CIFilter *underwaterBalanceFilter;
@property (nonatomic, retain) CIFilter *vibranceFilter;

+ (id)exposureValuesForToneCurveData:(id)arg1 highlightsAndShadowsData:(id)arg2 andHistogramData:(id)arg3;
+ (struct CGPoint { double x1; double x2; })pointOnCurveFromPoint:(struct CGPoint { double x1; double x2; })arg1 withSlope:(double)arg2 andCurveData:(double*)arg3;
+ (id)rampImage;

- (void).cxx_destruct;
- (id)adjustedImageFromImage:(id)arg1;
- (void)buildChain;
- (id)colorBalanceFilter;
- (id)colorFilter;
- (id)curvesFilter;
- (id)faceBalanceFilter;
- (bool)hasAdjustments;
- (bool)hasColor;
- (bool)hasExposure;
- (id)highlightsAndShadowsFilter;
- (id)init;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (void)releaseChain;
- (void)reset;
- (void)setColorBalanceFilter:(id)arg1;
- (void)setColorFilter:(id)arg1;
- (void)setCurvesFilter:(id)arg1;
- (void)setFaceBalanceFilter:(id)arg1;
- (void)setHighlightsAndShadowsFilter:(id)arg1;
- (void)setSkyAndGrassFilter:(id)arg1;
- (void)setTempAndTintFilter:(id)arg1;
- (void)setUnderwaterBalanceFilter:(id)arg1;
- (void)setVibranceFilter:(id)arg1;
- (id)skyAndGrassFilter;
- (id)tempAndTintFilter;
- (id)underwaterBalanceFilter;
- (void)updateAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (id)vibranceFilter;

@end
