/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface FTRegAccountMonitor : NSObject {
    NSArray * _accounts;
    FTRegConnectionHandler * _connectionHandler;
    struct { 
        unsigned int listeningForNotifications : 1; 
    }  _monitorFlags;
    IMServiceImpl * _service;
    long long  _serviceType;
}

@property (nonatomic, readonly, retain) NSArray *activeAccounts;
@property (nonatomic, retain) IMServiceImpl *service;
@property (nonatomic) long long serviceType;

- (void).cxx_destruct;
- (id)_activeAccounts;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (bool)_shouldHandleAccountNofication:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (void)_updateAccountState:(bool)arg1;
- (id)activeAccounts;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;
- (id)logName;
- (id)service;
- (long long)serviceType;
- (void)setService:(id)arg1;
- (void)setServiceType:(long long)arg1;

@end
