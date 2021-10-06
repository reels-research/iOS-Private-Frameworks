/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHAchievementProgressEngine : NSObject {
    _HKDelayedOperation * _delayedOperation;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSNumber * _overrideDelay;
    NSObject<OS_dispatch_queue> * _providerQueue;
    NSHashTable * _providers;
}

@property (nonatomic, retain) _HKDelayedOperation *delayedOperation;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSNumber *overrideDelay;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *providerQueue;
@property (nonatomic, retain) NSHashTable *providers;

- (void).cxx_destruct;
- (void)_notifyObserversOfProgressUpdate;
- (struct NSObject { Class x1; }*)_queue_providerForTemplate:(id)arg1;
- (void)addObserver:(struct NSObject { Class x1; }*)arg1;
- (id)delayedOperation;
- (void)deregisterProgressProvider:(struct NSObject { Class x1; }*)arg1;
- (id)init;
- (id)observerQueue;
- (id)observers;
- (id)overrideDelay;
- (bool)populateProgressAndGoalForAchievement:(id)arg1;
- (unsigned long long)providerCount;
- (id)providerQueue;
- (id)providers;
- (void)registerProgressProvider:(struct NSObject { Class x1; }*)arg1;
- (void)removeObserver:(struct NSObject { Class x1; }*)arg1;
- (void)requestProgressUpdateForProgressProvider:(struct NSObject { Class x1; }*)arg1;
- (void)setDelayedOperation:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOverrideDelay:(id)arg1;
- (void)setProviderQueue:(id)arg1;
- (void)setProviders:(id)arg1;
- (bool)shouldPopulateProgressForAchievement:(id)arg1;

@end
