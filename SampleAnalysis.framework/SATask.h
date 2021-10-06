/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SATask : NSObject <SASerializable> {
    bool  _allowsIdleExit;
    bool  _alreadyGatheredDataFromLiveProcess;
    struct _CSArchitecture { 
        int cpu_type; 
        int cpu_subtype; 
    }  _architecture;
    NSArray * _binaryLoadInfos;
    NSString * _bundleName;
    NSMutableDictionary * _dispatchQueues;
    SATimestamp * _execTimestamp;
    SATimestamp * _exitTimestamp;
    bool  _isThirdParty;
    bool  _isTranslocated;
    bool  _isUnresponsive;
    NSString * _mainBinaryPath;
    SAThread * _mainThread;
    NSString * _name;
    int  _pid;
    int  _ppid;
    NSMutableSet * _rootUserFrames;
    int  _rpid;
    SASharedCache * _sharedCache;
    NSMutableArray * _taskStates;
    NSMutableDictionary * _threads;
    double  _timeOfLastResponse;
    unsigned int  _uid;
    unsigned long long  _uniquePid;
    bool  _usesSuddenTermination;
}

@property (readonly) bool allowsIdleExit;
@property bool alreadyGatheredDataFromLiveProcess;
@property struct _CSArchitecture { int x1; int x2; } architecture;
@property (readonly) NSArray *binaryLoadInfos;
@property (readonly) NSString *bundleName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dispatchQueues;
@property (retain) SATimestamp *execTimestamp;
@property (retain) SATimestamp *exitTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) bool isThirdParty;
@property (readonly) bool isTranslocated;
@property (readonly) bool isUnresponsive;
@property (readonly) SABinaryLoadInfo *mainBinaryLoadInfo;
@property (retain) SAThread *mainThread;
@property (readonly, copy) NSString *name;
@property (readonly) int pid;
@property int ppid;
@property (retain) NSMutableSet *rootUserFrames;
@property (readonly) int rpid;
@property (retain) SASharedCache *sharedCache;
@property (readonly) Class superclass;
@property (readonly) NSArray *taskStates;
@property (readonly) NSDictionary *threads;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (readonly) bool usesSuddenTermination;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; int x3; int x4; int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; struct _CSArchitecture { int x_21_1_1; int x_21_1_2; } x21; union { unsigned short x_22_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; } x_22_1_2; } x22; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)taskWithKCDataDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 pid:(int)arg4 machineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg5 sharedCache:(id)arg6;
+ (id)taskWithKCDataTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 sharedCache:(id)arg5;
+ (id)taskWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 name:(id)arg3 sharedCache:(id)arg4;
+ (id)taskWithStackshotTaskV1:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 sharedCache:(id)arg5;
+ (id)taskWithoutReferencesFromPAStyleSerializedTask:(const struct { unsigned long long x1; int x2; int x3; int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; bool x12; bool x13; double x14; unsigned long long x15; unsigned long long x16; struct _CSArchitecture { int x_17_1_1; int x_17_1_2; } x17; double x18; bool x19; }*)arg1;

- (void).cxx_destruct;
- (void)_gatherDataFromLiveProcessIsLate:(bool)arg1;
- (bool)_matchesName:(const char *)arg1;
- (void)addDispatchQueue:(id)arg1;
- (void)addImageInfos:(id)arg1;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; int x3; int x4; int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; struct _CSArchitecture { int x_21_1_1; int x_21_1_2; } x21; union { unsigned short x_22_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; } x_22_1_2; } x22; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)addTaskState:(id)arg1;
- (void)addThread:(id)arg1;
- (id)addUserStack:(id)arg1;
- (bool)allowsIdleExit;
- (bool)alreadyGatheredDataFromLiveProcess;
- (struct _CSArchitecture { int x1; int x2; })architecture;
- (id)architectureString;
- (id)binaryLoadInfos;
- (id)bundleName;
- (void)checkForBetterName;
- (bool)correspondsToName:(const char *)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 sharedCache:(id)arg4;
- (bool)correspondsToPid:(int)arg1 name:(const char *)arg2 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg3 numLoadInfos:(unsigned int)arg4 sharedCache:(id)arg5;
- (bool)correspondsToUniquePid:(unsigned long long)arg1 name:(const char *)arg2 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg3 numLoadInfos:(unsigned int)arg4 sharedCache:(id)arg5;
- (void)cpuTimeNs:(unsigned long long*)arg1 cpuInstructions:(unsigned long long*)arg2 cpuCycles:(unsigned long long*)arg3 betweenStartTime:(id)arg4 endTime:(id)arg5;
- (id)debugDescription;
- (id)dispatchQueues;
- (id)endTimestamp;
- (void)enumerateFrameTree:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateTaskStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(bool)arg3 withSampleIndex:(bool)arg4 block:(id /* block */)arg5;
- (id)execTimestamp;
- (id)exitTimestamp;
- (id)firstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (void)fixupFrameInstructionsInFrameTree:(id)arg1;
- (void)forwardFillMonotonicallyIncreasingData;
- (bool)gatherLoadInfoFromLiveProcessWithDataGatheringOptions:(unsigned long long)arg1;
- (void)guessArchitectureGivenMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfFirstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (unsigned long long)indexOfLastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (id)initWithKCDataDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 withLoadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 pid:(int)arg4 andMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg5 sharedCache:(id)arg6;
- (id)initWithKCDataTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 withLoadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 andMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 sharedCache:(id)arg5;
- (id)initWithPid:(int)arg1 andUniquePid:(unsigned long long)arg2 andName:(id)arg3 sharedCache:(id)arg4;
- (id)initWithStackshotTaskV1:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1 withLoadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 andMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 sharedCache:(id)arg5;
- (bool)isAliveAtTimestamp:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isThirdParty;
- (bool)isTranslocated;
- (bool)isUnresponsive;
- (id)lastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (id)mainBinaryLoadInfo;
- (id)mainBinaryPath;
- (id)mainThread;
- (id)name;
- (int)pid;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; int x3; int x4; int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; double x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; struct _CSArchitecture { int x_21_1_1; int x_21_1_2; } x21; union { unsigned short x_22_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; } x_22_1_2; } x22; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)populateReferencesUsingPAStyleSerializedTask:(const struct { unsigned long long x1; int x2; int x3; int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; bool x12; bool x13; double x14; unsigned long long x15; unsigned long long x16; struct _CSArchitecture { int x_17_1_1; int x_17_1_2; } x17; double x18; bool x19; }*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)postprocessWithDataGatheringOptions:(unsigned long long)arg1 mightBeAlive:(bool)arg2;
- (int)ppid;
- (void)removeStacksOutsideThisProcess;
- (id)rootUserFrames;
- (int)rpid;
- (unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2;
- (void)setAlreadyGatheredDataFromLiveProcess:(bool)arg1;
- (void)setArchitecture:(struct _CSArchitecture { int x1; int x2; })arg1;
- (void)setExecTimestamp:(id)arg1;
- (void)setExitTimestamp:(id)arg1;
- (void)setMainBinaryPath:(id)arg1;
- (void)setMainThread:(id)arg1;
- (void)setPpid:(int)arg1;
- (void)setRootUserFrames:(id)arg1;
- (void)setSharedCache:(id)arg1;
- (id)sharedCache;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)startTimestamp;
- (id)taskStates;
- (id)threads;
- (double)timeOfLastResponse;
- (id)truncatedUserStackFrame;
- (unsigned int)uid;
- (unsigned long long)uniquePid;
- (bool)usesSuddenTermination;

@end
