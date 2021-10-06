/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication {
    <HMDRemoteLoginInitiatorAuthenticationDelegate> * _delegate;
}

@property (nonatomic, readonly) <HMDRemoteLoginInitiatorAuthenticationDelegate> *delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2;
- (void)authenticate;
- (id)delegate;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;
- (int)loginType;

@end
