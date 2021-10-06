/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDDeviceTraits : NSObject <NSCopying> {
    long long  _deploymentTargetValue;
    long long  _displayGamutValue;
    long long  _dynamicDisplayModeValue;
    long long  _graphicsFeatureSetClassValue;
    NSArray * _graphicsFeatureSetFallbackValues;
    long long  _graphicsPerformanceClass;
    NSArray * _hostedIdiomValues;
    long long  _idiomValue;
    long long  _memoryPerformanceClass;
    double  _scale;
    long long  _sizeClassHorizontal;
    long long  _sizeClassVertical;
    long long  _subtype;
    NSArray * _subtypeFallbackValues;
}

@property (nonatomic, retain) NSString *deploymentTarget;
@property (nonatomic) long long deploymentTargetValue;
@property (nonatomic, retain) NSString *displayGamut;
@property (nonatomic) long long displayGamutValue;
@property (nonatomic, retain) NSString *dynamicDisplayMode;
@property (nonatomic) long long dynamicDisplayModeValue;
@property (nonatomic, retain) NSString *graphicsFeatureSetClass;
@property (nonatomic) long long graphicsFeatureSetClassValue;
@property (nonatomic, copy) NSArray *graphicsFeatureSetFallbackValues;
@property (nonatomic, retain) NSArray *graphicsFeatureSetFallbacks;
@property (nonatomic) long long graphicsPerformanceClass;
@property (nonatomic, copy) NSArray *hostedIdiomValues;
@property (nonatomic, retain) NSArray *hostedIdioms;
@property (nonatomic, retain) NSString *idiom;
@property (nonatomic) long long idiomValue;
@property (nonatomic) long long memoryPerformanceClass;
@property (nonatomic) double scale;
@property (nonatomic) long long subtype;
@property (nonatomic, retain) NSArray *subtypeFallbackValues;

- (long long)_deploymentTargetFromTraitString:(id)arg1;
- (id)_deploymentTargetToTraitString:(long long)arg1;
- (long long)_displayGamutFromTraitString:(id)arg1;
- (id)_displayGamutToTraitString:(long long)arg1;
- (long long)_dynamicDisplayModeFromTraitString:(id)arg1;
- (id)_dynamicDisplayModeToTraitString:(long long)arg1;
- (long long)_graphicsFeatureSetClassFromTraitString:(id)arg1;
- (id)_graphicsFeatureSetClassToTraitString:(long long)arg1;
- (long long)_idiomFromTraitString:(id)arg1;
- (id)_idiomToTraitString:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deploymentTarget;
- (long long)deploymentTargetValue;
- (id)description;
- (id)displayGamut;
- (long long)displayGamutValue;
- (id)dynamicDisplayMode;
- (long long)dynamicDisplayModeValue;
- (id)graphicsFeatureSetClass;
- (long long)graphicsFeatureSetClassValue;
- (id)graphicsFeatureSetFallbackValues;
- (id)graphicsFeatureSetFallbacks;
- (long long)graphicsPerformanceClass;
- (id)hostedIdiomValues;
- (id)hostedIdioms;
- (id)idiom;
- (long long)idiomValue;
- (id)init;
- (long long)memoryPerformanceClass;
- (double)scale;
- (void)setDeploymentTarget:(id)arg1;
- (void)setDeploymentTargetValue:(long long)arg1;
- (void)setDisplayGamut:(id)arg1;
- (void)setDisplayGamutValue:(long long)arg1;
- (void)setDynamicDisplayMode:(id)arg1;
- (void)setDynamicDisplayModeValue:(long long)arg1;
- (void)setGraphicsFeatureSetClass:(id)arg1;
- (void)setGraphicsFeatureSetClassValue:(long long)arg1;
- (void)setGraphicsFeatureSetFallbackValues:(id)arg1;
- (void)setGraphicsFeatureSetFallbacks:(id)arg1;
- (void)setGraphicsPerformanceClass:(long long)arg1;
- (void)setHostedIdiomValues:(id)arg1;
- (void)setHostedIdioms:(id)arg1;
- (void)setIdiom:(id)arg1;
- (void)setIdiomValue:(long long)arg1;
- (void)setMemoryPerformanceClass:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setSubtypeFallbackValues:(id)arg1;
- (long long)subtype;
- (id)subtypeFallbackValues;

@end
