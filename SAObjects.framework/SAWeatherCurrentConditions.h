/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (nonatomic, retain) SAWeatherBarometricPressure *barometricPressure;
@property (nonatomic, retain) SAWeatherCondition *condition;
@property (nonatomic, copy) NSNumber *dayOfWeek;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dewPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *heatIndex;
@property (nonatomic, copy) NSString *moonPhase;
@property (nonatomic, copy) NSString *percentHumidity;
@property (nonatomic, copy) NSNumber *percentOfMoonFaceVisible;
@property (nonatomic, copy) NSString *sunrise;
@property (nonatomic, copy) NSString *sunset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *temperature;
@property (nonatomic, copy) NSString *timeOfObservation;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic, copy) NSString *totalDailyPrecipitation;
@property (nonatomic, copy) NSNumber *uvIndex;
@property (nonatomic, copy) NSString *visibility;
@property (nonatomic, copy) NSString *windChill;
@property (nonatomic, retain) SAWeatherWindSpeed *windSpeed;

+ (id)currentConditions;
+ (id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)barometricPressure;
- (id)condition;
- (id)dayOfWeek;
- (id)dewPoint;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)heatIndex;
- (id)moonPhase;
- (id)percentHumidity;
- (id)percentOfMoonFaceVisible;
- (void)setBarometricPressure:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDayOfWeek:(id)arg1;
- (void)setDewPoint:(id)arg1;
- (void)setHeatIndex:(id)arg1;
- (void)setMoonPhase:(id)arg1;
- (void)setPercentHumidity:(id)arg1;
- (void)setPercentOfMoonFaceVisible:(id)arg1;
- (void)setSunrise:(id)arg1;
- (void)setSunset:(id)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTimeOfObservation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTotalDailyPrecipitation:(id)arg1;
- (void)setUvIndex:(id)arg1;
- (void)setVisibility:(id)arg1;
- (void)setWindChill:(id)arg1;
- (void)setWindSpeed:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (id)temperature;
- (id)timeOfObservation;
- (id)timeZone;
- (id)totalDailyPrecipitation;
- (id)uvIndex;
- (id)visibility;
- (id)windChill;
- (id)windSpeed;

@end
