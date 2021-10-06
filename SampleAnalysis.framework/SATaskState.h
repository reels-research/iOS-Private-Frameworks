/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SATaskState : NSObject <SASerializable> {
    unsigned int  _cowFaults;
    NSSet * _donatingUniquePids;
    unsigned long long  _endSampleIndex;
    SATimestamp * _endTimestamp;
    unsigned int  _faults;
    unsigned int  _latencyQos;
    unsigned int  _pageins;
    unsigned long long  _ssFlags;
    unsigned long long  _startSampleIndex;
    SATimestamp * _startTimestamp;
    unsigned int  _suspendCount;
    unsigned long long  _taskSizeInBytes;
    unsigned long long  _terminatedThreadsCycles;
    unsigned long long  _terminatedThreadsInstructions;
    unsigned long long  _terminatedThreadsSystemTimeInNs;
    unsigned long long  _terminatedThreadsUserTimeInNs;
}

@property unsigned int cowFaults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *donatingUniquePids;
@property unsigned long long endSampleIndex;
@property (retain) SATimestamp *endTimestamp;
@property unsigned int faults;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBoosted;
@property (readonly) bool isDarwinBG;
@property (readonly) bool isDarwinExtBG;
@property (readonly) bool isDirty;
@property (readonly) bool isForeground;
@property (readonly) bool isFrozen;
@property (readonly) bool isImpDonor;
@property (readonly) bool isLiveImpDonor;
@property (readonly) bool isNonVisible;
@property (readonly) bool isPidSuspended;
@property (readonly) bool isSuppressed;
@property (readonly) bool isTaskResourceFlagged;
@property (readonly) bool isTerminatedSnapshot;
@property (readonly) bool isTimerThrottled;
@property (readonly) bool isVisible;
@property unsigned int latencyQos;
@property unsigned int pageins;
@property unsigned long long ssFlags;
@property unsigned long long startSampleIndex;
@property (retain) SATimestamp *startTimestamp;
@property (readonly) Class superclass;
@property unsigned int suspendCount;
@property unsigned long long taskSizeInBytes;
@property (readonly) unsigned long long terminatedThreadsCpuTimeNs;
@property unsigned long long terminatedThreadsCycles;
@property unsigned long long terminatedThreadsInstructions;
@property unsigned long long terminatedThreadsSystemTimeInNs;
@property unsigned long long terminatedThreadsUserTimeInNs;
@property (readonly) bool wqExceededConstrainedThreadLimit;
@property (readonly) bool wqExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned long long x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned char x17; unsigned long long x18; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)stateWithKCDataDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 terminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 donatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8;
+ (id)stateWithKCDataTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 terminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 donatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8;
+ (id)stateWithPAStyleTaskPrivateData:(id)arg1 donatingUniquePids:(id)arg2;
+ (id)stateWithStackshotTaskV1:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6;
+ (id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned long long x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned char x17; unsigned long long x18; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)applyPAStyleSampleTimestamp:(id)arg1;
- (bool)correspondsToKCDataDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 terminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 donatingUniquePids:(id)arg4;
- (bool)correspondsToKCDataTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 terminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 donatingUniquePids:(id)arg4;
- (unsigned int)cowFaults;
- (id)debugDescriptionWithTask:(id)arg1;
- (id)donatingUniquePids;
- (unsigned long long)endSampleIndex;
- (id)endTimestamp;
- (unsigned int)faults;
- (id)initWithKCDataDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 andDonatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8;
- (id)initWithKCDataTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3 andDonatingUniquePids:(id)arg4 startTimestamp:(id)arg5 endTimestamp:(id)arg6 startSampleIndex:(unsigned long long)arg7 endSampleIndex:(unsigned long long)arg8;
- (id)initWithStackshotTaskV1:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6;
- (id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
- (bool)isBoosted;
- (bool)isDarwinBG;
- (bool)isDarwinExtBG;
- (bool)isDirty;
- (bool)isForeground;
- (bool)isFrozen;
- (bool)isImpDonor;
- (bool)isLiveImpDonor;
- (bool)isNonVisible;
- (bool)isPidSuspended;
- (bool)isSuppressed;
- (bool)isTaskResourceFlagged;
- (bool)isTerminatedSnapshot;
- (bool)isTimerThrottled;
- (bool)isVisible;
- (unsigned int)latencyQos;
- (unsigned int)pageins;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned long long x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned char x17; unsigned long long x18; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)setCowFaults:(unsigned int)arg1;
- (void)setDonatingUniquePids:(id)arg1;
- (void)setEndSampleIndex:(unsigned long long)arg1;
- (void)setEndTimestamp:(id)arg1;
- (void)setFaults:(unsigned int)arg1;
- (void)setLatencyQos:(unsigned int)arg1;
- (void)setPageins:(unsigned int)arg1;
- (void)setSsFlags:(unsigned long long)arg1;
- (void)setStartSampleIndex:(unsigned long long)arg1;
- (void)setStartTimestamp:(id)arg1;
- (void)setSuspendCount:(unsigned int)arg1;
- (void)setTaskSizeInBytes:(unsigned long long)arg1;
- (void)setTerminatedThreadsCycles:(unsigned long long)arg1;
- (void)setTerminatedThreadsInstructions:(unsigned long long)arg1;
- (void)setTerminatedThreadsSystemTimeInNs:(unsigned long long)arg1;
- (void)setTerminatedThreadsUserTimeInNs:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)ssFlags;
- (unsigned long long)startSampleIndex;
- (id)startTimestamp;
- (unsigned int)suspendCount;
- (unsigned long long)taskSizeInBytes;
- (unsigned long long)terminatedThreadsCpuTimeNs;
- (unsigned long long)terminatedThreadsCycles;
- (unsigned long long)terminatedThreadsInstructions;
- (unsigned long long)terminatedThreadsSystemTimeInNs;
- (unsigned long long)terminatedThreadsUserTimeInNs;
- (bool)wqExceededConstrainedThreadLimit;
- (bool)wqExceededTotalThreadLimit;

@end
