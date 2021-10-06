/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageAttachmentItem : CKAttachmentItem {
    bool  _backgroundEnqueued;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _useDefaultSize;
}

@property (nonatomic) bool backgroundEnqueued;
@property struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool useDefaultSize;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)UTITypes;

- (struct CGSize { double x1; double x2; })_calculateImageSize;
- (id)_newImageData;
- (bool)backgroundEnqueued;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (id)imageData;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setBackgroundEnqueued:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseDefaultSize:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)startDeferredSetup;
- (bool)useDefaultSize;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end
