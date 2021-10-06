/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditExportProperties : NSObject {
    double  _baseDuration;
    long long  _baseEXIFOrientation;
    unsigned long long  _imageHeight;
    unsigned long long  _imageWidth;
}

@property (nonatomic, readonly) double baseDuration;
@property (nonatomic, readonly) long long baseEXIFOrientation;
@property (nonatomic, readonly) unsigned long long imageHeight;
@property (nonatomic, readonly) unsigned long long imageWidth;

+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3;
+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4;

- (double)baseDuration;
- (long long)baseEXIFOrientation;
- (unsigned long long)imageHeight;
- (unsigned long long)imageWidth;

@end
