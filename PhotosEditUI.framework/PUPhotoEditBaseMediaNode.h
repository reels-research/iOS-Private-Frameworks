/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditBaseMediaNode : PXRunNode <PUImageDataNode, PUVideoAssetNode, PXRunNodeDelegate> {
    PUEditableMediaProviderAdjustmentDataNode * _adjustmentNode;
    PXRunNode * _gatheringNode;
    NSData * _imageData;
    PUEditableMediaProviderImageDataNode * _imageDataNode;
    AVAsset * _videoAsset;
    PUEditableMediaProviderVideoAssetNode * _videoAssetNode;
}

@property (nonatomic, readonly) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (id)adjustmentNode;
- (id)imageData;
- (id)initWithAdjustmentNode:(id)arg1;
- (void)run;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (id)videoAsset;

@end
