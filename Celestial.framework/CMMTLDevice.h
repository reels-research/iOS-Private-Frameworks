/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLDevice : NSObject <MTLDeviceSPI> {
    <MTLDeviceSPI> * _device;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long argumentBuffersSupport;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (getter=isDepth24Stencil8PixelFormatSupported, readonly) bool depth24Stencil8PixelFormatSupported;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long doubleFPConfig;
@property (readonly) unsigned long long featureProfile;
@property (readonly) unsigned long long halfFPConfig;
@property (readonly) unsigned long long hash;
@property (getter=isHeadless, readonly) bool headless;
@property (readonly) struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; } indirectArgumentBufferCapabilities;
@property (readonly) unsigned long long indirectArgumentBuffersSupport;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned long long x57; }*limits;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property (getter=isLowPower, readonly) bool lowPower;
@property (readonly) unsigned long long maxArgumentBufferSamplerCount;
@property (readonly) unsigned long long maxBufferLength;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxCustomSamplePositions;
@property (readonly) unsigned long long maxFragmentBuffers;
@property (readonly) unsigned long long maxFragmentInlineDataSize;
@property (readonly) unsigned long long maxFragmentSamplers;
@property (readonly) unsigned long long maxFragmentTextures;
@property (readonly) unsigned long long maxFramebufferStorageBits;
@property (readonly) unsigned long long maxFunctionConstantIndices;
@property (readonly) unsigned long long maxIndirectBuffers;
@property (readonly) unsigned long long maxIndirectSamplers;
@property (readonly) unsigned long long maxIndirectSamplersPerDevice;
@property (readonly) unsigned long long maxIndirectTextures;
@property (readonly) unsigned long long maxInterpolants;
@property (readonly) unsigned long long maxInterpolatedComponents;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned long long maxTessellationFactor;
@property (readonly) unsigned long long maxTextureBufferWidth;
@property (readonly) unsigned long long maxTextureDepth3D;
@property (readonly) unsigned long long maxTextureDimensionCube;
@property (readonly) unsigned long long maxTextureHeight2D;
@property (readonly) unsigned long long maxTextureHeight3D;
@property (readonly) unsigned long long maxTextureLayers;
@property (readonly) unsigned long long maxTextureWidth1D;
@property (readonly) unsigned long long maxTextureWidth2D;
@property (readonly) unsigned long long maxTextureWidth3D;
@property (readonly) unsigned long long maxThreadgroupMemoryLength;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxThreadsPerThreadgroup;
@property (readonly) unsigned long long maxTileBuffers;
@property (readonly) unsigned long long maxTileInlineDataSize;
@property (readonly) unsigned long long maxTileSamplers;
@property (readonly) unsigned long long maxTileTextures;
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxViewportCount;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (nonatomic) bool metalAssertionsEnabled;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) unsigned long long minTilePixels;
@property (readonly) NSString *name;
@property (getter=areProgrammableSamplePositionsSupported, readonly) bool programmableSamplePositionsSupported;
@property (getter=isQuadDataSharingSupported, readonly) bool quadDataSharingSupported;
@property (getter=areRasterOrderGroupsSupported, readonly) bool rasterOrderGroupsSupported;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (getter=isRemovable, readonly) bool removable;
@property bool shaderDebugInfoCaching;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long singleFPConfig;
@property (readonly) Class superclass;
@property (readonly) bool supportPriorityBand;
@property (readonly) const struct MTLTargetDeviceArch { unsigned int x1; unsigned int x2; char *x3; }*targetDeviceInfo;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)newCommandQueue;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;

@end
