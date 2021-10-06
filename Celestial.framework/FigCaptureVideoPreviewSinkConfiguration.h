/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _depthDataDeliveryEnabled;
    bool  _filterRenderingEnabled;
    NSArray * _filters;
    float  _simulatedAperture;
}

@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool filterRenderingEnabled;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) float simulatedAperture;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (bool)filterRenderingEnabled;
- (id)filters;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setSimulatedAperture:(float)arg1;
- (float)simulatedAperture;
- (int)sinkType;

@end
