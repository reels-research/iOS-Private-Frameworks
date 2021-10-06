/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
 */

@interface AXHAController : NSObject <AXHALiveListenDelegate, AXIDCControllerBrowserDelegateProtocol> {
    NSDictionary * _availableDevicesDescription;
    bool  _isListening;
    AXDispatchTimer * _liveListenLevelsTimer;
    AXHAXPCMessage * _liveListenMessage;
    NSString * _pairedDeviceUUID;
}

@property (nonatomic, retain) NSDictionary *availableDevicesDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXHAXPCMessage *liveListenMessage;
@property (nonatomic, retain) NSString *pairedDeviceUUID;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)availableDevicesDescription;
- (void)availableRemoteControllersDidChange;
- (id)connectToControllerWithID:(id)arg1;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (void)dealloc;
- (id)disconnectAndForceSlave:(id)arg1;
- (bool)hearingAidsPaired;
- (id)init;
- (id)liveListenController;
- (void)liveListenControllerStateDidChange;
- (id)liveListenMessage;
- (id)pairedDeviceUUID;
- (void)passConnectionToController:(id)arg1 withReason:(long long)arg2;
- (id)readAvailableControllers:(id)arg1;
- (id)readAvailableDevices:(id)arg1;
- (id)readDeviceProperty:(id)arg1;
- (void)readLiveListenLevels;
- (id)registerForAvailableDevicesUpdates:(id)arg1;
- (id)registerForDeviceUpdates:(id)arg1;
- (id)registerForLiveListenUpdates:(id)arg1;
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;
- (void)setAvailableDevicesDescription:(id)arg1;
- (void)setListenForAvailableDeviceUpdates:(bool)arg1;
- (void)setLiveListenMessage:(id)arg1;
- (void)setPairedDeviceUUID:(id)arg1;
- (void)setPairedHearingAid:(id)arg1;
- (void)startSearchCycle;
- (id)toggleLiveListen:(id)arg1;
- (void)trustChainAvailabilityDidChange:(id)arg1;
- (void)willSwitchUser;
- (id)writeDeviceProperty:(id)arg1;

@end
