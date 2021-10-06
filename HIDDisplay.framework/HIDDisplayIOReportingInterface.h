/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
 */

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {
    id /* block */  _cancelHandler;
    id /* block */  _dataHandler;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoop { } * _runLoop;
    NSDictionary * _usageElementMap;
}

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (id)getHIDDevices;
- (void)handleInputData:(struct __IOHIDValue { }*)arg1;
- (id)initWithContainerID:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInputDataHandler:(id /* block */)arg1;
- (bool)setOutputData:(id)arg1 error:(id*)arg2;
- (bool)setupIOReporting;

@end