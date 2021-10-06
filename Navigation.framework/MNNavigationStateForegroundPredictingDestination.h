/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStateForegroundPredictingDestination : MNNavigationStateCommute

- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;
- (unsigned long long)desiredCommuteSessionState;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (bool)requiresHighMemoryThreshold;
- (void)stopPredictingDestinations;
- (long long)type;
- (void)updateMapsActive:(bool)arg1;

@end
