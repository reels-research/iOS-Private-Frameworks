/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeechEndHostTimeEstimator : NSObject {
    bool  _endPointNotified;
    unsigned long long  _lastAudioChunkHostTime;
    unsigned long long  _numAudioSampleForwarded;
    double  _trailingSilenceDurationAtEndpoint;
}

@property (nonatomic) bool endPointNotified;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

- (void)addNumSamples:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;
- (bool)endPointNotified;
- (unsigned long long)estimatedSpeechEndHostTime;
- (id)init;
- (unsigned long long)lastAudioChunkHostTime;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)arg1;
- (unsigned long long)numAudioSampleForwarded;
- (void)reset;
- (void)setEndPointNotified:(bool)arg1;
- (void)setLastAudioChunkHostTime:(unsigned long long)arg1;
- (void)setNumAudioSampleForwarded:(unsigned long long)arg1;
- (void)setTrailingSilenceDurationAtEndpoint:(double)arg1;
- (double)trailingSilenceDurationAtEndpoint;

@end
