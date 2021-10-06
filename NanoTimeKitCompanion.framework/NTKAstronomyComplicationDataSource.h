/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyComplicationDataSource : NTKComplicationDataSource {
    CLLocation * _anyLocation;
    CLLocation * _currentLocation;
    struct NSString { Class x1; } * _token;
    unsigned long long  _vista;
}

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (Class)richComplicationDisplayViewClassForType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (id)_currentTimelineEntryWithIdealizedDate:(bool)arg1;
- (void)_handleLocationUpdate:(id)arg1 anyLocation:(id)arg2;
- (void)_invalidate;
- (void)_startObserving;
- (void)_stopObserving;
- (bool)alwaysShowIdealizedTemplateInSwitcher;
- (void)becomeActive;
- (void)becomeInactive;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)pause;
- (void)resume;
- (bool)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
