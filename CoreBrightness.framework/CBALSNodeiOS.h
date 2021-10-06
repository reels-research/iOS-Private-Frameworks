/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBALSNodeiOS : NSObject {
    struct __IOHIDServiceClient { } * _alsService;
    bool  _colorSupport;
    CBALSEvent * _currentALSEvent;
    float  _fastIntegrationTime;
    NSObject<OS_os_log> * _logHandle;
    int  _orientation;
    int  _placement;
    float  _slowIntegrationTime;
    float  _superFastIntegrationTime;
}

@property struct __IOHIDServiceClient { }*alsService;
@property (nonatomic, retain) CBALSEvent *currentALSEvent;
@property int orientation;

- (struct __IOHIDServiceClient { }*)alsService;
- (bool)conformsToHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)currentALSEvent;
- (void)dealloc;
- (bool)handleALSEvent:(id)arg1;
- (void)initALSProperties;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (bool)isColorSupported;
- (int)orientation;
- (void)setAlsService:(struct __IOHIDServiceClient { }*)arg1;
- (void)setCurrentALSEvent:(id)arg1;
- (void)setOrientation:(int)arg1;

@end
