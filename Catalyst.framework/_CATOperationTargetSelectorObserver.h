/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    unsigned long long  _events;
    SEL  _selector;
    id  _target;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long events;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)delegateQueue;
- (unsigned long long)events;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (void)invokeActionWithOperation:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (SEL)selector;
- (id)target;
- (id)userInfo;

@end
