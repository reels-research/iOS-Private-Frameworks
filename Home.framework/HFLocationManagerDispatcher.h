/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFLocationManagerDispatcher : NSObject <CLLocationManagerDelegate> {
    int  _cachedAuthorizationStatus;
    bool  _hasInitializedAuthorizationStatus;
    CLLocationManager * _locationManager;
    NSHashTable * _locationObservers;
    NSMutableArray * _pendingAuthorizationStatusFutures;
}

@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic, readonly) NAFuture *authorizationStatusFuture;
@property (nonatomic) int cachedAuthorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitializedAuthorizationStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocationManager *locationManager;
@property (nonatomic, retain) NSHashTable *locationObservers;
@property (nonatomic, readonly) NSMutableArray *pendingAuthorizationStatusFutures;
@property (readonly) Class superclass;

+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (void)_authorizeHomeKitLocationServices;
- (void)_updateCachedAuthorizationStatus:(int)arg1;
- (void)_updateMacAuthorizationStatus:(int)arg1;
- (void)addObserver:(id)arg1;
- (int)authorizationStatus;
- (id)authorizationStatusFuture;
- (int)cachedAuthorizationStatus;
- (void)dispatchLocationManagerObserverMessage:(SEL)arg1 withBlock:(id /* block */)arg2 sender:(id)arg3;
- (bool)hasInitializedAuthorizationStatus;
- (id)init;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (id)locationObservers;
- (id)pendingAuthorizationStatusFutures;
- (void)removeObserver:(id)arg1;
- (void)setCachedAuthorizationStatus:(int)arg1;
- (void)setHasInitializedAuthorizationStatus:(bool)arg1;
- (void)setLocationObservers:(id)arg1;

@end
