/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {
    RTRoutineManagerRegistrantAction * _actionRegistrant;
    RTRoutineManagerRegistrantApplicationPrediction * _applicationPredictionRegistrant;
    RTTokenBucket * _clientThrottle;
    RTEventAgentHelper * _eventAgentHelper;
    id /* block */  _leechedLowConfidenceVisitHandler;
    id /* block */  _leechedVisitHandler;
    id /* block */  _nextPredictedLocationsOfInterestHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _restorationIdentifier;
    RTRoutineManagerRegistrantScenarioTrigger * _scenarioTriggerRegistrant;
    id /* block */  _vehicleEventsHandler;
    id /* block */  _visitHandler;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) RTRoutineManagerRegistrantAction *actionRegistrant;
@property (nonatomic, retain) RTRoutineManagerRegistrantApplicationPrediction *applicationPredictionRegistrant;
@property (nonatomic, retain) RTTokenBucket *clientThrottle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RTEventAgentHelper *eventAgentHelper;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ leechedLowConfidenceVisitHandler;
@property (nonatomic, copy) id /* block */ leechedVisitHandler;
@property (nonatomic, copy) id /* block */ nextPredictedLocationsOfInterestHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *restorationIdentifier;
@property (nonatomic, retain) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ vehicleEventsHandler;
@property (nonatomic, copy) id /* block */ visitHandler;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;

- (void).cxx_destruct;
- (void)_createConnection;
- (id)_proxyForServicingSelector:(SEL)arg1;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(id /* block */)arg2;
- (id)actionRegistrant;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(id /* block */)arg4;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 handler:(id /* block */)arg3;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 withHandler:(id /* block */)arg3;
- (id)applicationPredictionRegistrant;
- (void)clearAllVehicleEvents;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)arg1;
- (void)clearRoutineWithHandler:(id /* block */)arg1;
- (id)clientThrottle;
- (void)createConnection;
- (void)dealloc;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (id)eventAgentHelper;
- (void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(id /* block */)arg1;
- (void)fetchAllLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)fetchAllRoutesForSettingsWithHandler:(id /* block */)arg1;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* block */)arg1;
- (void)fetchCloudSyncAuthorizationState:(id /* block */)arg1;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(id /* block */)arg3;
- (void)fetchLastVehicleEventsWithHandler:(id /* block */)arg1;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(id /* block */)arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id /* block */)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)fetchPathToDiagnosticFilesWithHandler:(id /* block */)arg1;
- (void)fetchPredictedApplications:(id /* block */)arg1;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchPredictedConditionsForAction:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchPredictedExitDatesWithHandler:(id /* block */)arg1;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(id /* block */)arg4;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchPredictedRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocation:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id /* block */)arg2;
- (void)fetchRoutineStateWithHandler:(id /* block */)arg1;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(id /* block */)arg3;
- (void)handleDaemonStart;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (id /* block */)leechedLowConfidenceVisitHandler;
- (id /* block */)leechedVisitHandler;
- (id /* block */)nextPredictedLocationsOfInterestHandler;
- (void)onActionConditions:(id)arg1 error:(id)arg2;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(id /* block */)arg3;
- (void)provideFeedbackForAction:(id)arg1 engagementResult:(long long)arg2 handler:(id /* block */)arg3;
- (id)queue;
- (void)removeLocationOfInterest:(id)arg1 handler:(id /* block */)arg2;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)restorationIdentifier;
- (id)scenarioTriggerRegistrant;
- (void)setActionRegistrant:(id)arg1;
- (void)setApplicationPredictionRegistrant:(id)arg1;
- (void)setClientThrottle:(id)arg1;
- (void)setEventAgentHelper:(id)arg1;
- (void)setLeechedLowConfidenceVisitHandler:(id /* block */)arg1;
- (void)setLeechedVisitHandler:(id /* block */)arg1;
- (void)setMapItem:(id)arg1 forLocationOfInterestWithIdentifier:(id)arg2;
- (void)setNextPredictedLocationsOfInterestHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setRoutineEnabled:(bool)arg1;
- (void)setRoutineEnabled:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)setScenarioTriggerRegistrant:(id)arg1;
- (void)setVehicleEventsHandler:(id /* block */)arg1;
- (void)setVisitHandler:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(long long)arg2 handler:(id /* block */)arg3;
- (void)sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 handler:(id /* block */)arg4;
- (void)startLeechingLowConfidenceVisitsWithHandler:(id /* block */)arg1;
- (void)startLeechingVisitsWithHandler:(id /* block */)arg1;
- (void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(id /* block */)arg2;
- (void)startMonitoringForPredictedApplicationsWithHandler:(id /* block */)arg1;
- (void)startMonitoringNextPredictedLocationsOfInterestWithHandler:(id /* block */)arg1;
- (void)startMonitoringPredictedConditionsForAction:(id)arg1 handler:(id /* block */)arg2;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)arg1;
- (void)startMonitoringVisitsWithHandler:(id /* block */)arg1;
- (void)stopLeechingLowConfidenceVisits;
- (void)stopLeechingVisits;
- (void)stopMonitoringForPredictedApplications;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)stopMonitoringPredictedConditionsForAction:(id)arg1 handler:(id /* block */)arg2;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)stopMonitoringVisits;
- (void)submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 handler:(id /* block */)arg3;
- (void)updateCloudSyncProvisionedForAccount:(bool)arg1 handler:(id /* block */)arg2;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(id /* block */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(id /* block */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(id /* block */)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(id /* block */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(id /* block */)arg5;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(id /* block */)arg5;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(id /* block */)arg3;
- (id /* block */)vehicleEventsHandler;
- (id /* block */)visitHandler;
- (id)xpcConnection;

@end
