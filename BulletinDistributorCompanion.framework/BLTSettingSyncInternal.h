/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSyncInternal : NSObject <BLTSettingSyncingClient> {
    BLTSettingSyncServer * _connection;
    BLTMuteSync * _muteSync;
    BLTSectionConfiguration * _sectionConfiguration;
    BBSettingsGateway * _settingsGateway;
    BLTWristStateObserver * _wristStateObserver;
}

@property (nonatomic, retain) BLTSettingSyncServer *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWristDetectDisabled;
@property (nonatomic, retain) BLTMuteSync *muteSync;
@property (nonatomic, readonly) BLTSectionConfiguration *sectionConfiguration;
@property (nonatomic, retain) BBSettingsGateway *settingsGateway;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)connect;
- (id)connection;
- (void)dealloc;
- (void)disableStandaloneTestMode;
- (void)enableNotifications:(bool)arg1 sectionID:(id)arg2 mirror:(bool)arg3;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (id)init;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (bool)isWristDetectDisabled;
- (id)muteSync;
- (void)removeSectionWithSectionID:(id)arg1;
- (id)sectionConfiguration;
- (void)setConnection:(id)arg1;
- (void)setMuteSync:(id)arg1;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(bool)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(bool)arg3 fromRemote:(bool)arg4;
- (void)setSectionInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 category:(id)arg4;

@end
