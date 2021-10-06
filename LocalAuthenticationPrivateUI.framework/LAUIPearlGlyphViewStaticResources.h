/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIPearlGlyphViewStaticResources : NSObject {
    <MTLDevice> * _device;
    struct renderer_shared_state { 
        <MTLDevice> *device; 
        <MTLDepthStencilState> *depth_stencil_state; 
        <MTLComputePipelineState> *tesselation_factor_pipeline; 
        <MTLRenderPipelineState> *tube_pipeline; 
        struct array<id<MTLRenderPipelineState>, 3> { 
            <MTLRenderPipelineState> *__elems_[3]; 
        } begin_cap_pipelines; 
        struct array<id<MTLRenderPipelineState>, 3> { 
            <MTLRenderPipelineState> *__elems_[3]; 
        } end_cap_pipelines; 
        <MTLComputePipelineState> *horizontal_blur_pipeline; 
        <MTLComputePipelineState> *vertical_blur_pipeline; 
        <MTLComputePipelineState> *accumulator_pipeline; 
    }  _state;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1 state:(struct renderer_shared_state { id x1; id x2; struct array<id<MTLRenderPipelineState>, 3> { /* Warning: unhandled array encoding: '[3@]}{array<id<MTLRenderPipelineState>, 3>=[3@]}@@@}' */ id x_3_1_1[3]; } x3; id x4; id x5; })arg2;
- (struct renderer_shared_state { id x1; id x2; struct array<id<MTLRenderPipelineState>, 3> { /* Warning: unhandled array encoding: '[3@]}{array<id<MTLRenderPipelineState>, 3>=[3@]}@@@}' */ id x_3_1_1[3]; } x3; id x4; id x5; }*)state;

@end