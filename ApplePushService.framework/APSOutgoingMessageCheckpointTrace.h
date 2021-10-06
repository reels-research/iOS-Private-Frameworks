/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace {
    CUTCheckpointRange * _messageOnQueue;
    CUTCheckpointRange * _sendToDaemon;
    CUTCheckpointRange * _waitForACK;
}

@property (nonatomic, readonly) CUTCheckpointRange *messageOnQueue;
@property (nonatomic, readonly) CUTCheckpointRange *sendToDaemon;
@property (nonatomic, readonly) CUTCheckpointRange *waitForACK;

- (void)dealloc;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)messageOnQueue;
- (id)sendToDaemon;
- (id)waitForACK;

@end
