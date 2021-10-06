/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSUIServiceOptions : NSObject <BSXPCCoding, NSCopying> {
    unsigned long long  _flashStyle;
    unsigned long long  _saveLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long flashStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long saveLocation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)flashStyle;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)saveLocation;
- (void)setFlashStyle:(unsigned long long)arg1;
- (void)setSaveLocation:(unsigned long long)arg1;

@end
