/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    bool  _logToRegistration;
    unsigned long long  _maxConcurrentMessages;
    FTMessageQueue * _queue;
    unsigned int  _retries;
    bool  _retryInAirplaneMode;
    IMTimer * _timer;
    NSString * _userAgent;
}

@property (readonly) NSArray *allMessages;
@property (readonly) bool busy;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) bool hasQueuedItems;
@property bool logToRegistration;
@property unsigned long long maxConcurrentMessages;
@property (readonly) long long maxLargeMessageSize;
@property (readonly) long long maxMessageSize;
@property (copy) NSNumber *protocolVersion;
@property (readonly) NSArray *queuedMessages;
@property bool retryInAirplaneMode;
@property (copy) NSString *userAgent;

+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2;
+ (id)alloc;

- (void).cxx_destruct;
- (void)_clearRetryTimer;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4;
- (id)_queue;
- (void)_retryTimerHit:(id)arg1;
- (bool)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_setRetryTimer:(double)arg1;
- (void)_signMessage:(id)arg1 useDataSignatures:(bool)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (id)allMessages;
- (bool)busy;
- (void)cancelMessage:(id)arg1;
- (id)currentMessage;
- (void)dealloc;
- (bool)hasQueuedItems;
- (id)init;
- (void)invalidate;
- (bool)logToRegistration;
- (unsigned long long)maxConcurrentMessages;
- (long long)maxLargeMessageSize;
- (long long)maxMessageSize;
- (void)networkStateChanged;
- (id)protocolVersion;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)queuedMessages;
- (bool)retryInAirplaneMode;
- (bool)sendMessage:(id)arg1;
- (void)setLogToRegistration:(bool)arg1;
- (void)setMaxConcurrentMessages:(unsigned long long)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setRetryInAirplaneMode:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
