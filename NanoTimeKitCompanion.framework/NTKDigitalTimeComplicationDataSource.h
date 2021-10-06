/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (Class)richComplicationDisplayViewClassForType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;

- (id)_templateWithShouldDisplayIdealizeState:(bool)arg1;
- (bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (void)resume;
- (bool)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
