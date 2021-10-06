/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRServerRequestReporter : NSObject {
    NSString * _requestType;
    double  _startTime;
    bool  _submitted;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebaseInfo;
}

@property (nonatomic, retain) NSString *requestType;
@property (nonatomic) double startTime;
@property (nonatomic) bool submitted;
@property (nonatomic) struct mach_timebase_info { unsigned int x1; unsigned int x2; } timebaseInfo;

- (void).cxx_destruct;
- (unsigned long long)abs_to_nanos:(unsigned long long)arg1;
- (double)abs_to_seconds:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithRequestType:(id)arg1;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1;
- (void)requestCompletedWithErrorCode:(unsigned int)arg1 andDuration:(double)arg2;
- (void)requestTimedOut;
- (id)requestType;
- (void)setRequestType:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSubmitted:(bool)arg1;
- (void)setTimebaseInfo:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (double)startTime;
- (bool)submitted;
- (struct mach_timebase_info { unsigned int x1; unsigned int x2; })timebaseInfo;

@end
