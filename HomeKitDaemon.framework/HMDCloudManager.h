/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudManager : HMFObject <APSConnectionDelegate> {
    bool  _accountActive;
    id /* block */  _accountActiveUpdateHandler;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _clientCallbackQueue;
    HMDCloudCache * _cloudCache;
    id /* block */  _cloudDataDeletedNotificationHandler;
    HMDCloudDataSyncStateFilter * _cloudDataSyncStateFilter;
    bool  _cloudHomeDataRecordExists;
    id /* block */  _cloudMetadataDeletedNotificationHandler;
    HMFMessageDispatcher * _configSyncDispatcher;
    CKContainer * _container;
    id /* block */  _controllerKeyAvailableNotificationHandler;
    NSObject<OS_dispatch_source> * _controllerKeyPollTimer;
    NSMutableArray * _currentBackoffTimerValuesInMinutes;
    id /* block */  _dataDecryptionFailedHandler;
    CKDatabase * _database;
    CKServerChangeToken * _databaseServerChangeToken;
    id /* block */  _fetchCompletionHandler;
    bool  _firstV3Fetch;
    HMDHomeManager * _homeManager;
    bool  _keychainSyncEnabled;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_source> * _pollTimer;
    int  _proxSetupNotificationToken;
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_source> * _retryTimer;
    NSUUID * _uuid;
    NSObject<OS_dispatch_source> * _watchdogControllerKeyPollTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool accountActive;
@property (nonatomic, copy) id /* block */ accountActiveUpdateHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (nonatomic, retain) HMDCloudCache *cloudCache;
@property (nonatomic, copy) id /* block */ cloudDataDeletedNotificationHandler;
@property (nonatomic, retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (nonatomic) bool cloudHomeDataRecordExists;
@property (nonatomic, copy) id /* block */ cloudMetadataDeletedNotificationHandler;
@property (nonatomic, retain) HMFMessageDispatcher *configSyncDispatcher;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, copy) id /* block */ controllerKeyAvailableNotificationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *controllerKeyPollTimer;
@property (nonatomic, retain) NSMutableArray *currentBackoffTimerValuesInMinutes;
@property (nonatomic, copy) id /* block */ dataDecryptionFailedHandler;
@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, retain) CKServerChangeToken *databaseServerChangeToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool decryptionFailed;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (getter=isFirstV3Fetch, nonatomic) bool firstV3Fetch;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, readonly) HMDCloudHomeManagerZone *homeManagerZone;
@property (nonatomic) bool keychainSyncEnabled;
@property (nonatomic, readonly) HMDCloudLegacyZone *legacyZone;
@property (nonatomic, readonly) HMDCloudMetadataZone *metadataZone;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *pollTimer;
@property (nonatomic) int proxSetupNotificationToken;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *retryTimer;
@property (nonatomic, readonly) NSData *serverTokenData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)isControllerKeyAvailable;

- (void).cxx_destruct;
- (void)__addCKDatabaseOperation:(id)arg1;
- (void)__deleteRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__deleteRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__deleteRecordZonesWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__fetchAllRecordZonesWithCompletionHandler:(id /* block */)arg1;
- (void)__fetchRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__fetchSubscriptionWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__saveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)__saveSubscription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_accountIsActive;
- (void)_addHomeZoneName:(id)arg1 owner:(id)arg2;
- (void)_auditProxSetupNotification;
- (id)_changeTokenFromData:(id)arg1;
- (void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_createZoneAndFetchChanges:(id /* block */)arg1;
- (void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchDatabaseZoneChanges;
- (void)_fetchLegacyTransaction:(id)arg1 forceFetch:(bool)arg2 accountCompletionHandler:(id /* block */)arg3 dataCompletionHandler:(id /* block */)arg4;
- (void)_fetchTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_forceCleanCloud:(bool)arg1 fetchTransaction:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleAccountStatus:(long long)arg1 completionHandler:(id /* block */)arg2 error:(id)arg3;
- (void)_handleControllerKeyAvailable;
- (void)_handleKeychainSyncStateChanged:(bool)arg1;
- (bool)_isProxSetupRunning;
- (void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(long long)arg4 completionHandler:(id /* block */)arg5 moreRecordsComing:(bool)arg6 emptyRecord:(bool)arg7;
- (bool)_processFetchedTransaction:(id)arg1;
- (void)_registerForProxSetupNotifications;
- (void)_registerForPushNotifications;
- (void)_removeAllHomeZonesCompletionHandler:(id /* block */)arg1;
- (void)_removeHomeZoneName:(id)arg1;
- (void)_removeZonesTransactions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resetCloudCache:(id /* block */)arg1;
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_resetCloudServerTokenData;
- (void)_resetCloudZonesIgnoreHomeManager:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_resetHomeDataRecordState;
- (void)_scheduleZoneFetch:(id)arg1;
- (id)_serverTokenData;
- (void)_setupSubscriptionForZone:(id)arg1;
- (void)_startControllerKeyPollTimer;
- (void)_startControllerKeyPollTimerWithBackoff;
- (void)_startControllerKeyPollTimerWithValue:(long long)arg1;
- (void)_startFetchPollTimer;
- (void)_startFetchRetryTimer;
- (void)_startWatchdogControllerKeyPollTimer;
- (void)_stopControllerKeyPollTimer;
- (void)_stopFetchPollTimer;
- (void)_stopFetchRetryTimer;
- (void)_stopWatchdogControllerKeyPollTimer;
- (void)_updateServerTokenStatusOnCloudFilter;
- (void)_uploadLegacyTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_uploadTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_validFetchRetryCKErrorCode:(long long)arg1;
- (void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_verifyZonesExist:(id)arg1 zoneIndex:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (bool)accountActive;
- (id /* block */)accountActiveUpdateHandler;
- (void)addHomeZoneName:(id)arg1 owner:(id)arg2;
- (id)callbackQueue;
- (id)clientCallbackQueue;
- (id)cloudCache;
- (id /* block */)cloudDataDeletedNotificationHandler;
- (id)cloudDataSyncStateFilter;
- (bool)cloudHomeDataRecordExists;
- (id /* block */)cloudMetadataDeletedNotificationHandler;
- (id)configSyncDispatcher;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (id /* block */)controllerKeyAvailableNotificationHandler;
- (id)controllerKeyPollTimer;
- (id)currentBackoffTimerValuesInMinutes;
- (id /* block */)dataDecryptionFailedHandler;
- (id)database;
- (id)databaseServerChangeToken;
- (void)dealloc;
- (bool)decryptionFailed;
- (id /* block */)fetchCompletionHandler;
- (void)fetchCurrentAccountStateWithCompletionHandler:(id /* block */)arg1;
- (void)fetchDatabaseZoneChanges;
- (void)fetchLegacyTransaction:(id)arg1 forceFetch:(bool)arg2 accountCompletionHandler:(id /* block */)arg3 dataCompletionHandler:(id /* block */)arg4;
- (void)fetchTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleKeychainStateChangedNotification:(id)arg1;
- (id)homeManager;
- (id)homeManagerZone;
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 homeManager:(id)arg4 callbackQueue:(id)arg5;
- (void)initializeServerTokenStatusOnCloudFilter;
- (bool)isFirstV3Fetch;
- (bool)keychainSyncEnabled;
- (id)legacyZone;
- (bool)legacyZoneHasRecordsAvaliable;
- (id)metadataZone;
- (id)msgDispatcher;
- (id)pollTimer;
- (int)proxSetupNotificationToken;
- (id)pushConnection;
- (void)removeHomeZoneName:(id)arg1;
- (void)removeZonesTransactions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetCloudCache:(id /* block */)arg1;
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)resetCloudServerTokenData:(id)arg1;
- (id)retryTimer;
- (id)serverTokenData;
- (void)setAccountActive:(bool)arg1;
- (void)setAccountActiveUpdateCallback:(id /* block */)arg1;
- (void)setAccountActiveUpdateHandler:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setClientCallbackQueue:(id)arg1;
- (void)setCloudCache:(id)arg1;
- (void)setCloudDataDeletedNotificationBlock:(id /* block */)arg1;
- (void)setCloudDataDeletedNotificationHandler:(id /* block */)arg1;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setCloudHomeDataRecordExists:(bool)arg1;
- (void)setCloudMetadataDeletedNotificationBlock:(id /* block */)arg1;
- (void)setCloudMetadataDeletedNotificationHandler:(id /* block */)arg1;
- (void)setConfigSyncDispatcher:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setControllerKeyAvailableNotificationBlock:(id /* block */)arg1;
- (void)setControllerKeyAvailableNotificationHandler:(id /* block */)arg1;
- (void)setControllerKeyPollTimer:(id)arg1;
- (void)setCurrentBackoffTimerValuesInMinutes:(id)arg1;
- (void)setDataAvailableFromCloudCompletionBlock:(id /* block */)arg1;
- (void)setDataDecryptionFailedCompletionBlock:(id /* block */)arg1;
- (void)setDataDecryptionFailedHandler:(id /* block */)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDatabaseServerChangeToken:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setFirstV3Fetch:(bool)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setKeychainSyncEnabled:(bool)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPollTimer:(id)arg1;
- (void)setProxSetupNotificationToken:(int)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWatchdogControllerKeyPollTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)updateAccountStatusChanged:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateCloudDataSyncFilterState:(bool)arg1;
- (void)updateServerTokenStatusOnCloudFilter;
- (void)uploadLegacyTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)watchdogControllerKeyPollTimer;
- (id)workQueue;

@end
