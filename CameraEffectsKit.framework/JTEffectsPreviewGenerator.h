/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTEffectsPreviewGenerator : NSObject {
    NSString * _name;
    PVRenderer * _renderer;
}

@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)_renderJob:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)generatePreviewRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithRendererOptions:(id)arg1;
- (id)name;
- (void)perfLog;
- (void)setName:(id)arg1;
- (void)trackStats:(bool)arg1;

@end
