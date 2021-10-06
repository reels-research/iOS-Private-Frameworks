/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVCameraController : NSObject {
    NSMutableArray * _cameras;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, retain) NSArray *cameras;
@property (nonatomic, retain) IMAVCamera *currentCamera;

+ (id)sharedInstance;

- (void)_loadSavedCamera;
- (void)_rebuildCameraList;
- (id)cameraWithDeviceID:(unsigned int)arg1;
- (id)cameras;
- (id)currentCamera;
- (void)dealloc;
- (id)init;
- (void)setCurrentCamera:(id)arg1;

@end
