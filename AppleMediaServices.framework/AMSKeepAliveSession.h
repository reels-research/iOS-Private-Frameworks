/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSKeepAliveSession : NSObject <BKSProcessDelegate> {
    NSCountedSet * _activeNames;
    NSString * _assertionName;
    bool  _interrupted;
    NSString * _logKey;
    NSObject<OS_os_transaction> * _osTransaction;
    BKSProcess * _process;
    BKSProcessAssertion * _taskAssertion;
    long long  _timerId;
}

@property (nonatomic, retain) NSCountedSet *activeNames;
@property (nonatomic, readonly) NSString *assertionName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, retain) NSObject<OS_os_transaction> *osTransaction;
@property (nonatomic, retain) BKSProcess *process;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSProcessAssertion *taskAssertion;
@property (nonatomic) long long timerId;

+ (void)_afterDelay:(long long)arg1 coalesce:(bool)arg2 handler:(id /* block */)arg3;
+ (void)_deactivateSession;
+ (void)_reapplyAssertion;
+ (id)_sharedSessionQueue;
+ (void)addKeepAliveForName:(id)arg1;
+ (void)interrupt;
+ (void)removeKeepAliveForName:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)activeNames;
- (id)assertionName;
- (void)dealloc;
- (id)init;
- (bool)interrupted;
- (id)logKey;
- (id)osTransaction;
- (id)process;
- (void)processWillExpire:(id)arg1;
- (void)setActiveNames:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setOsTransaction:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setTaskAssertion:(id)arg1;
- (void)setTimerId:(long long)arg1;
- (id)taskAssertion;
- (long long)timerId;

@end
