/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSupportedConfigurationCache : HMFObject {
    HMDSupportedAudioStreamConfiguration * _supportedAudioStreamConfiguration;
    HMDSupportedRTPConfiguration * _supportedRTPConfiguration;
    HMDSupportedVideoStreamConfiguration * _supportedVideoStreamConfiguration;
}

@property (nonatomic, retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (nonatomic, retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration;
@property (nonatomic, retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (bool)isValid;
- (void)setSupportedAudioStreamConfiguration:(id)arg1;
- (void)setSupportedRTPConfiguration:(id)arg1;
- (void)setSupportedVideoStreamConfiguration:(id)arg1;
- (id)supportedAudioStreamConfiguration;
- (id)supportedRTPConfiguration;
- (id)supportedVideoStreamConfiguration;

@end
