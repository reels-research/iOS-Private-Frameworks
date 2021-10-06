/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    float  _SNR;
    float  _accelStandardDeviation;
    int  _activeDeviceMask;
    NSDictionary * _apsSubjectDistance;
    bool  _burst;
    unsigned long long  _captureFlags;
    int  _captureTime;
    int  _captureType;
    int  _clientIDType;
    bool  _depthEnabled;
    int  _devicePosition;
    int  _deviceType;
    float  _exposureDuration;
    float  _gyroStandardDeviation;
    float  _iso;
    float  _lensPosition;
    bool  _livePhotoEnabled;
    int  _luxLevel;
    float  _normalizedSNR;
    int  _numberOfFaces;
    NSString * _portType;
    unsigned int  _processingFlags;
    unsigned long long  _sceneFlags;
    int  _sensorTemperature;
    int  _shutterLag;
    int  _streamingTime;
    bool  _timeLapse;
    unsigned int  _timeSinceLastCaptureInSession;
    float  _zoom;
}

@property (nonatomic) float SNR;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) int activeDeviceMask;
@property (nonatomic, retain) NSDictionary *apsSubjectDistance;
@property (nonatomic) bool burst;
@property (nonatomic) unsigned long long captureFlags;
@property (nonatomic) int captureTime;
@property (nonatomic) int captureType;
@property (nonatomic) int clientIDType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool depthEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition;
@property (nonatomic) int deviceType;
@property (nonatomic) float exposureDuration;
@property (nonatomic) float gyroStandardDeviation;
@property (readonly) unsigned long long hash;
@property (nonatomic) float iso;
@property (nonatomic) float lensPosition;
@property (nonatomic) bool livePhotoEnabled;
@property (nonatomic) int luxLevel;
@property (nonatomic) float normalizedSNR;
@property (nonatomic) int numberOfFaces;
@property (nonatomic, retain) NSString *portType;
@property (nonatomic) unsigned int processingFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic) int sensorTemperature;
@property (nonatomic) int shutterLag;
@property (nonatomic) int streamingTime;
@property (readonly) Class superclass;
@property (nonatomic) bool timeLapse;
@property (nonatomic) unsigned int timeSinceLastCaptureInSession;
@property (nonatomic) float zoom;

- (float)SNR;
- (float)accelStandardDeviation;
- (int)activeDeviceMask;
- (id)apsSubjectDistance;
- (bool)burst;
- (unsigned long long)captureFlags;
- (int)captureTime;
- (int)captureType;
- (int)clientIDType;
- (void)dealloc;
- (bool)depthEnabled;
- (int)devicePosition;
- (int)deviceType;
- (id)eventDictionary;
- (id)eventName;
- (float)exposureDuration;
- (float)gyroStandardDeviation;
- (id)init;
- (float)iso;
- (float)lensPosition;
- (bool)livePhotoEnabled;
- (int)luxLevel;
- (float)normalizedSNR;
- (int)numberOfFaces;
- (id)portType;
- (unsigned int)processingFlags;
- (void)reset;
- (unsigned long long)sceneFlags;
- (int)sensorTemperature;
- (void)setAccelStandardDeviation:(float)arg1;
- (void)setActiveDeviceMask:(int)arg1;
- (void)setApsSubjectDistance:(id)arg1;
- (void)setBurst:(bool)arg1;
- (void)setCaptureFlags:(unsigned long long)arg1;
- (void)setCaptureTime:(int)arg1;
- (void)setCaptureType:(int)arg1;
- (void)setClientIDType:(int)arg1;
- (void)setDepthEnabled:(bool)arg1;
- (void)setDevicePosition:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setExposureDuration:(float)arg1;
- (void)setGyroStandardDeviation:(float)arg1;
- (void)setIso:(float)arg1;
- (void)setLensPosition:(float)arg1;
- (void)setLivePhotoEnabled:(bool)arg1;
- (void)setLuxLevel:(int)arg1;
- (void)setNormalizedSNR:(float)arg1;
- (void)setNumberOfFaces:(int)arg1;
- (void)setPortType:(id)arg1;
- (void)setProcessingFlags:(unsigned int)arg1;
- (void)setSNR:(float)arg1;
- (void)setSceneFlags:(unsigned long long)arg1;
- (void)setSensorTemperature:(int)arg1;
- (void)setShutterLag:(int)arg1;
- (void)setStreamingTime:(int)arg1;
- (void)setTimeLapse:(bool)arg1;
- (void)setTimeSinceLastCaptureInSession:(unsigned int)arg1;
- (void)setZoom:(float)arg1;
- (int)shutterLag;
- (int)streamingTime;
- (bool)timeLapse;
- (unsigned int)timeSinceLastCaptureInSession;
- (float)zoom;

@end
