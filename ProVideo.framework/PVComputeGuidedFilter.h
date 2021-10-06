/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVComputeGuidedFilter : NSObject {
    float  _epsilon;
    PVImageBuffer * _guide;
    int  _radius;
}

@property (nonatomic, readonly) float epsilon;
@property (nonatomic, readonly) int radius;

- (void).cxx_destruct;
- (bool)applyFilterToInput:(id)arg1 output:(id)arg2;
- (float)epsilon;
- (id)initWithGuide:(id)arg1 radius:(int)arg2 epsilon:(float)arg3;
- (void)processStage1Float32Input:(float*)arg1 inputRowBytes:(unsigned long long)arg2 guide:(float*)arg3 guideRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9;
- (void)processStage1UInt8Input:(char *)arg1 inputRowBytes:(unsigned long long)arg2 guide:(char *)arg3 guideRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9;
- (void)processStage5Float32Guide:(float*)arg1 guideRowBytes:(unsigned long long)arg2 stats:(float*)arg3 statsRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9;
- (void)processStage5UInt6Guide:(char *)arg1 guideRowBytes:(unsigned long long)arg2 stats:(float*)arg3 statsRowBytes:(unsigned long long)arg4 output:(char *)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9;
- (int)radius;
- (bool)runCPUPathOnInput:(struct HGBitmap { int (**x1)(); unsigned int x2; int x3; int x4; struct HGRect { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct HGRect { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct HGEdgePolicy { int x_12_1_1; float x_12_1_2[4]; } x12; struct HGObject {} *x13; }*)arg1 guide:(struct HGBitmap { int (**x1)(); unsigned int x2; int x3; int x4; struct HGRect { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct HGRect { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct HGEdgePolicy { int x_12_1_1; float x_12_1_2[4]; } x12; struct HGObject {} *x13; }*)arg2 output:(struct HGBitmap { int (**x1)(); unsigned int x2; int x3; int x4; struct HGRect { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct HGRect { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; void *x10; void *x11; struct HGEdgePolicy { int x_12_1_1; float x_12_1_2[4]; } x12; struct HGObject {} *x13; }*)arg3 radius:(int)arg4 epsilon:(float)arg5;

@end
