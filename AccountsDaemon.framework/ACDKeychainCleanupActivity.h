/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainCleanupActivity : NSObject {
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_queue> * _activityQueue;
    NSObject<OS_xpc_object> * _xpcActivity;
}

+ (id)sharedActivity;

- (void).cxx_destruct;
- (void)_activityQueue_checkIn;
- (void)_activityQueue_configureXPCActivityWithCriteria:(id)arg1;
- (void)_activityQueue_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2;
- (void)_activityQueue_registerXPCActivityWithCriteria:(id)arg1;
- (void)_activityQueue_removeCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_activityQueue_removeExpiredCredentials;
- (void)_activityQueue_unregisterActivity;
- (void)checkInIfNecessary;
- (id)init;
- (void)queueNonPersistentCredentialRemoval:(id)arg1;

@end
