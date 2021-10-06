/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REApplicationCache : RESingleton <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary * _applicationTypes;
    NSObject<OS_dispatch_queue> * _queue;
    REKeyValueMap * _remoteApplicationsMap;
    NSMutableDictionary * _removedApps;
    NSMutableDictionary * _restrictedApps;
    NSMutableDictionary * _watchKitExtensions;
    NARApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessRemoteApplicationsMapWithCompletion:(id /* block */)arg1;
- (void)_applicationsDidChange:(id)arg1;
- (bool)_queue_applicationIsRemoved:(id)arg1;
- (bool)_queue_applicationIsRestricted:(id)arg1;
- (void)_queue_loadApplicationTypes;
- (void)_queue_loadNanoRegistryCompletion:(id /* block */)arg1;
- (void)_queue_loadStateForBundleID:(id)arg1;
- (bool)applicationIsRemote:(id)arg1;
- (bool)applicationIsRemoved:(id)arg1;
- (bool)applicationIsRestricted:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)clearNanoRegistryApplications;
- (void)dealloc;
- (id)init;
- (id)localApplicationForRemoteApplication:(struct NSString { Class x1; }*)arg1;
- (id)remoteApplicationForLocalApplication:(struct NSString { Class x1; }*)arg1;
- (unsigned long long)typeForApplication:(id)arg1;
- (id)watchKitExtensionForApplication:(id)arg1;

@end