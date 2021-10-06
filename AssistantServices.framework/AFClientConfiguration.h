/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _deviceRingerSwitchState;
    bool  _isAccessibilityVibrationDisabled;
    bool  _isAccessibilityVoiceOverTouchEnabled;
    bool  _isDeviceInCarDNDMode;
    bool  _isDeviceInSetupFlow;
    bool  _isDeviceInStarkMode;
    float  _outputVolume;
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

@property (nonatomic, readonly) long long deviceRingerSwitchState;
@property (nonatomic, readonly) bool isAccessibilityVibrationDisabled;
@property (nonatomic, readonly) bool isAccessibilityVoiceOverTouchEnabled;
@property (nonatomic, readonly) bool isDeviceInCarDNDMode;
@property (nonatomic, readonly) bool isDeviceInSetupFlow;
@property (nonatomic, readonly) bool isDeviceInStarkMode;
@property (nonatomic, readonly) float outputVolume;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceRingerSwitchState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceRingerSwitchState:(long long)arg1 isDeviceInSetupFlow:(bool)arg2 isDeviceInCarDNDMode:(bool)arg3 isDeviceInStarkMode:(bool)arg4 isAccessibilityVoiceOverTouchEnabled:(bool)arg5 isAccessibilityVibrationDisabled:(bool)arg6 outputVolume:(float)arg7 tapToSiriAudioPlaybackRequest:(id)arg8 twoShotAudioPlaybackRequest:(id)arg9;
- (bool)isAccessibilityVibrationDisabled;
- (bool)isAccessibilityVoiceOverTouchEnabled;
- (bool)isDeviceInCarDNDMode;
- (bool)isDeviceInSetupFlow;
- (bool)isDeviceInStarkMode;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (float)outputVolume;
- (id)tapToSiriAudioPlaybackRequest;
- (id)twoShotAudioPlaybackRequest;

@end
