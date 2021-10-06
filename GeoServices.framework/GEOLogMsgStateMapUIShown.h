/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {
    struct { 
        unsigned int isAirQualityShown : 1; 
        unsigned int isWeatherShown : 1; 
    }  _has;
    bool  _isAirQualityShown;
    bool  _isWeatherShown;
}

@property (nonatomic) bool hasIsAirQualityShown;
@property (nonatomic) bool hasIsWeatherShown;
@property (nonatomic) bool isAirQualityShown;
@property (nonatomic) bool isWeatherShown;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsAirQualityShown;
- (bool)hasIsWeatherShown;
- (unsigned long long)hash;
- (bool)isAirQualityShown;
- (bool)isEqual:(id)arg1;
- (bool)isWeatherShown;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAirQualityShown:(bool)arg1;
- (void)setHasIsWeatherShown:(bool)arg1;
- (void)setIsAirQualityShown:(bool)arg1;
- (void)setIsWeatherShown:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
