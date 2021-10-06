/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMFeedbackPortraitUsed : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 variantId:(id)arg3 domain:(struct PPMPortraitDomain_ { unsigned long long x1; })arg4 elementsSpec:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg5 numEffectivesLog2:(unsigned long long)arg6;
- (id)tracker;

@end
