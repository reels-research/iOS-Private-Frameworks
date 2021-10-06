/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmScheduler : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTAlarmObserver, MTScheduledListDelegate> {
    id /* block */  _currentDateProvider;
    <MTAlarmScheduleDelegate> * _delegate;
    <MTNotificationCenter> * _notificationCenter;
    MTScheduledList * _scheduledAlarms;
    <MTSchedulingDelegate> * _schedulingDelegate;
    <NAScheduler> * _serializer;
    <MTAlarmStorage> * _storage;
    <MTTaskScheduler> * _taskScheduler;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTAlarmScheduleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MTNotificationCenter> *notificationCenter;
@property (nonatomic, readonly) MTScheduledList *scheduledAlarms;
@property (nonatomic, readonly) <MTSchedulingDelegate> *schedulingDelegate;
@property (nonatomic, readonly) <NAScheduler> *serializer;
@property (nonatomic, readonly) <MTAlarmStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTTaskScheduler> *taskScheduler;

+ (id)_intervalToCheckForAlarmsToFireBeforeDate:(id)arg1;

- (void).cxx_destruct;
- (void)_fireScheduledAlarm:(id)arg1 firedDate:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_lastAlarmTriggerDate;
- (id)_nextScheduledAlertIncludingBedtimeNotification:(bool)arg1;
- (id)_nextTriggerDateForScheduling;
- (void)_queue_fireTriggeredAlarmsWithCompletionBlock:(id /* block */)arg1;
- (void)_queue_triggerDidFireForAlarmWithCompletionBlock:(id /* block */)arg1;
- (void)_queue_unregisterTimer;
- (void)_queue_updateNextAlarmTimerWithCompletion:(id /* block */)arg1;
- (void)_rescheduleAlarmsWithCompletion:(id /* block */)arg1;
- (void)_scheduleAlarms:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setLastAlarmTriggerDate:(id)arg1;
- (void)_unscheduleAlarms:(id)arg1;
- (void)cleanDeliveredNotifications;
- (id /* block */)currentDateProvider;
- (id)delegate;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 schedulingDelegate:(id)arg4 taskScheduler:(id)arg5 currentDateProvider:(id /* block */)arg6;
- (id)nextAlarm;
- (id)nextAlarmIncludingBedtimeNotification:(bool)arg1;
- (id)nextScheduledAlarmIncludingBedtimeNotification:(bool)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateIncludingBedtimeNotification:(bool)arg1;
- (id)notificationCenter;
- (void)printDiagnostics;
- (void)rescheduleAlarmsWithCompletion:(id /* block */)arg1;
- (void)scheduleAlarms:(id)arg1;
- (id)scheduledAlarms;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)schedulingDelegate;
- (id)serializer;
- (void)setDelegate:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)sourceIdentifier;
- (id)storage;
- (id)taskScheduler;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(id /* block */)arg2;
- (void)unscheduleAlarms:(id)arg1;

@end
