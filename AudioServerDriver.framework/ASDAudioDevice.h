/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDAudioDevice : ASDObject {
    id /* block */  _beginIOOperationBlock;
    id /* block */  _beginIOOperationBlockUnretained;
    bool  _canBeDefaultDevice;
    bool  _canBeDefaultSystemDevice;
    bool  _canChangeDeviceName;
    NSDictionary * _clientDescription;
    unsigned int  _clockAlgorithm;
    unsigned int  _clockDomain;
    bool  _clockIsStable;
    <ASDDeviceConfigurationChangeDelegate> * _configurationChangeDelegate;
    NSObject<OS_dispatch_queue> * _controlQueue;
    NSMutableArray * _controls;
    NSDictionary * _deviceDescription;
    NSString * _deviceName;
    NSString * _deviceUID;
    id /* block */  _endIOOperationBlock;
    id /* block */  _endIOOperationBlockUnretained;
    id /* block */  _getZeroTimestampBlock;
    id /* block */  _getZeroTimestampBlockUnretained;
    bool  _hidden;
    unsigned int  _inputLatency;
    unsigned int  _inputSafetyOffset;
    NSObject<OS_dispatch_queue> * _inputStreamQueue;
    NSMutableArray * _inputStreams;
    long long  _ioReferenceCount;
    NSObject<OS_dispatch_queue> * _ioReferenceQueue;
    bool  _isAlive;
    bool  _isRunning;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSString * _modelUID;
    unsigned int  _outputLatency;
    unsigned int  _outputSafetyOffset;
    NSObject<OS_dispatch_queue> * _outputStreamQueue;
    NSMutableArray * _outputStreams;
    NSObject<OS_dispatch_queue> * _sampleRateQueue;
    double  _samplingRate;
    NSArray * _samplingRates;
    unsigned int  _timestampPeriod;
    unsigned int  _transportType;
    NSObject<OS_dispatch_semaphore> * _wakeSemaphore;
    id /* block */  _willDoConvertInputBlock;
    id /* block */  _willDoConvertInputBlockUnretained;
    id /* block */  _willDoConvertMixBlock;
    id /* block */  _willDoConvertMixBlockUnretained;
    id /* block */  _willDoMixOutputBlock;
    id /* block */  _willDoMixOutputBlockUnretained;
    id /* block */  _willDoProcessInputBlock;
    id /* block */  _willDoProcessInputBlockUnretained;
    id /* block */  _willDoProcessMixBlock;
    id /* block */  _willDoProcessMixBlockUnretained;
    id /* block */  _willDoProcessOutputBlock;
    id /* block */  _willDoProcessOutputBlockUnretained;
    id /* block */  _willDoReadInputBlock;
    id /* block */  _willDoReadInputBlockUnretained;
    id /* block */  _willDoWriteMixBlock;
    id /* block */  _willDoWriteMixBlockUnretained;
}

@property (nonatomic, copy) id /* block */ beginIOOperationBlock;
@property (nonatomic, readonly) id /* block */*beginIOOperationBlockUnretainedPtr;
@property (nonatomic) bool canBeDefaultDevice;
@property (nonatomic) bool canBeDefaultSystemDevice;
@property (nonatomic) bool canChangeDeviceName;
@property (nonatomic, copy) NSDictionary *clientDescription;
@property (nonatomic) unsigned int clockAlgorithm;
@property (nonatomic) unsigned int clockDomain;
@property (nonatomic) bool clockIsStable;
@property (nonatomic) <ASDDeviceConfigurationChangeDelegate> *configurationChangeDelegate;
@property (nonatomic, copy) NSDictionary *deviceDescription;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *deviceUID;
@property (nonatomic, copy) id /* block */ endIOOperationBlock;
@property (nonatomic, readonly) id /* block */*endIOOperationBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ getZeroTimestampBlock;
@property (nonatomic, readonly) id /* block */*getZeroTimestampBlockUnretainedPtr;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasOutput;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) unsigned int inputLatency;
@property (nonatomic) unsigned int inputSafetyOffset;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *ioReferenceQueue;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *modelUID;
@property (nonatomic) unsigned int outputLatency;
@property (nonatomic) unsigned int outputSafetyOffset;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) double samplingRate;
@property (nonatomic, copy) NSArray *samplingRates;
@property (nonatomic) unsigned int timestampPeriod;
@property (nonatomic) unsigned int transportType;
@property (nonatomic, copy) id /* block */ willDoConvertInputBlock;
@property (nonatomic, readonly) id /* block */*willDoConvertInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoConvertMixBlock;
@property (nonatomic, readonly) id /* block */*willDoConvertMixBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoMixOutputBlock;
@property (nonatomic, readonly) id /* block */*willDoMixOutputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoProcessInputBlock;
@property (nonatomic, readonly) id /* block */*willDoProcessInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoProcessMixBlock;
@property (nonatomic, readonly) id /* block */*willDoProcessMixBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoProcessOutputBlock;
@property (nonatomic, readonly) id /* block */*willDoProcessOutputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoReadInputBlock;
@property (nonatomic, readonly) id /* block */*willDoReadInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ willDoWriteMixBlock;
@property (nonatomic, readonly) id /* block */*willDoWriteMixBlockUnretainedPtr;

- (void).cxx_destruct;
- (void)_updateSafetyOffsets:(double)arg1;
- (void)_updateTimestampPeriod:(double)arg1;
- (int)addClient:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (void)addControl:(id)arg1;
- (void)addInputStream:(id)arg1;
- (void)addOutputStream:(id)arg1;
- (id /* block */)beginIOOperationBlock;
- (id /* block */*)beginIOOperationBlockUnretainedPtr;
- (bool)canBeDefaultDevice;
- (bool)canBeDefaultSystemDevice;
- (bool)canChangeDeviceName;
- (bool)changeClientDescription:(id)arg1;
- (bool)changeDeviceName:(id)arg1;
- (bool)changeSamplingRate:(double)arg1;
- (id)clientDescription;
- (unsigned int)clockAlgorithm;
- (unsigned int)clockDomain;
- (bool)clockIsStable;
- (id)configurationChangeDelegate;
- (id)controls;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (void)dealloc;
- (id)deviceDescription;
- (id)deviceName;
- (id)deviceUID;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)driverClassName;
- (id /* block */)endIOOperationBlock;
- (id /* block */*)endIOOperationBlockUnretainedPtr;
- (id)getProperty:(id)arg1;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (id /* block */)getZeroTimestampBlock;
- (id /* block */*)getZeroTimestampBlockUnretainedPtr;
- (bool)hasInput;
- (bool)hasOutput;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithDeviceUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;
- (unsigned int)inputLatency;
- (unsigned int)inputSafetyOffset;
- (id)inputStreams;
- (id)ioReferenceQueue;
- (bool)isHidden;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isRunning;
- (id)manufacturerName;
- (id)modelName;
- (id)modelUID;
- (unsigned int)numberOfChannelsInLayoutForScope:(unsigned int)arg1;
- (unsigned int)objectClass;
- (unsigned int)outputLatency;
- (unsigned int)outputSafetyOffset;
- (id)outputStreams;
- (void)performConfigurationChange:(void*)arg1;
- (int)performStartIO;
- (int)performStopIO;
- (void)preferredChannelDescriptions:(struct AudioChannelDescription { unsigned int x1; unsigned int x2; float x3[3]; }*)arg1 forScope:(unsigned int)arg2;
- (void)preferredChannelsForLeft:(unsigned int*)arg1 andRight:(unsigned int*)arg2;
- (int)removeClient:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (void)removeControl:(id)arg1;
- (void)removeInputStream:(id)arg1;
- (void)removeOutputStream:(id)arg1;
- (void)requestConfigurationChange:(id /* block */)arg1;
- (double)samplingRate;
- (id)samplingRates;
- (void)setBeginIOOperationBlock:(id /* block */)arg1;
- (void)setCanBeDefaultDevice:(bool)arg1;
- (void)setCanBeDefaultSystemDevice:(bool)arg1;
- (void)setCanChangeDeviceName:(bool)arg1;
- (void)setClientDescription:(id)arg1;
- (void)setClockAlgorithm:(unsigned int)arg1;
- (void)setClockDomain:(unsigned int)arg1;
- (void)setClockIsStable:(bool)arg1;
- (void)setConfigurationChangeDelegate:(id)arg1;
- (void)setDeviceDescription:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEndIOOperationBlock:(id /* block */)arg1;
- (void)setGetZeroTimestampBlock:(id /* block */)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInputLatency:(unsigned int)arg1;
- (void)setInputSafetyOffset:(unsigned int)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelUID:(id)arg1;
- (void)setOutputLatency:(unsigned int)arg1;
- (void)setOutputSafetyOffset:(unsigned int)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setSamplingRate:(double)arg1;
- (void)setSamplingRates:(id)arg1;
- (void)setTimestampPeriod:(unsigned int)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setWillDoConvertInputBlock:(id /* block */)arg1;
- (void)setWillDoConvertMixBlock:(id /* block */)arg1;
- (void)setWillDoMixOutputBlock:(id /* block */)arg1;
- (void)setWillDoProcessInputBlock:(id /* block */)arg1;
- (void)setWillDoProcessMixBlock:(id /* block */)arg1;
- (void)setWillDoProcessOutputBlock:(id /* block */)arg1;
- (void)setWillDoReadInputBlock:(id /* block */)arg1;
- (void)setWillDoWriteMixBlock:(id /* block */)arg1;
- (int)startIOForClient:(unsigned int)arg1;
- (int)stopIOForClient:(unsigned int)arg1;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (unsigned int)timestampPeriod;
- (unsigned int)transportType;
- (void)updateTimestampPeriod;
- (id /* block */)willDoConvertInputBlock;
- (id /* block */*)willDoConvertInputBlockUnretainedPtr;
- (id /* block */)willDoConvertMixBlock;
- (id /* block */*)willDoConvertMixBlockUnretainedPtr;
- (id /* block */)willDoMixOutputBlock;
- (id /* block */*)willDoMixOutputBlockUnretainedPtr;
- (id /* block */)willDoProcessInputBlock;
- (id /* block */*)willDoProcessInputBlockUnretainedPtr;
- (id /* block */)willDoProcessMixBlock;
- (id /* block */*)willDoProcessMixBlockUnretainedPtr;
- (id /* block */)willDoProcessOutputBlock;
- (id /* block */*)willDoProcessOutputBlockUnretainedPtr;
- (id /* block */)willDoReadInputBlock;
- (id /* block */*)willDoReadInputBlockUnretainedPtr;
- (id /* block */)willDoWriteMixBlock;
- (id /* block */*)willDoWriteMixBlockUnretainedPtr;

@end
