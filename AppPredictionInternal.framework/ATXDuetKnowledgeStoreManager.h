/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXDuetKnowledgeStoreManager : NSObject {
    NSObject<OS_dispatch_source> * _expirationSource;
    NSDate * _lastUsedDate;
    NSObject<OS_dispatch_source> * _pressureSource;
    unsigned long long  _previousPressure;
    NSObject<OS_dispatch_queue> * _queue;
    <_DKKnowledgeQuerying> * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clear;
- (void)_handleMemoryPressure;
- (void)dealloc;
- (id)init;
- (void)runBlock:(id /* block */)arg1;

@end
