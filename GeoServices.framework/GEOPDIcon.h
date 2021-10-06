/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDIcon : PBCodable <NSCopying> {
    struct { 
        unsigned int iconType : 1; 
    }  _has;
    int  _iconType;
    GEOPDPhoto * _image;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIconType;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic) int iconType;
@property (nonatomic, retain) GEOPDPhoto *image;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsIconType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIconType;
- (bool)hasImage;
- (unsigned long long)hash;
- (int)iconType;
- (id)iconTypeAsString:(int)arg1;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIconType:(bool)arg1;
- (void)setIconType:(int)arg1;
- (void)setImage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
