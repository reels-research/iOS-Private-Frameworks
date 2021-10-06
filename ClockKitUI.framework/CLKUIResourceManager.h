/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIResourceManager : NSObject {
    NSMutableDictionary * _atlasesByUuid;
    NSMutableDictionary * _providersByKey;
    NSMutableDictionary * _recentProvidersForUuid;
}

+ (id)sharedInstance;
+ (id)sharedMetalInstance;

- (void).cxx_destruct;
- (id)_newAtlasForUuid:(id)arg1;
- (void)_purgeAllUnconditionally;
- (void)_purgeAtlases:(id)arg1;
- (void)dealloc;
- (id)delegateForUuid:(id)arg1;
- (id)init;
- (void)purge:(id)arg1;
- (void)purgeAllUnused;
- (id)textureForUuid:(void *)arg1 delegate:(void *)arg2 rect:(void *)arg3; // needs 3 arg types, found 2: id, id

@end