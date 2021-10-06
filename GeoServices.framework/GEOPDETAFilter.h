/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDETAFilter : PBCodable <NSCopying> {
    GEOAutomobileOptions * _automobileOptions;
    struct { 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeRouteTrafficDetail : 1; 
    }  _has;
    bool  _includeHistoricTravelTime;
    bool  _includeRouteTrafficDetail;
    GEOTransitOptions * _transitOptions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transportTypes;
    PBUnknownFields * _unknownFields;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) bool hasAutomobileOptions;
@property (nonatomic) bool hasIncludeHistoricTravelTime;
@property (nonatomic) bool hasIncludeRouteTrafficDetail;
@property (nonatomic, readonly) bool hasTransitOptions;
@property (nonatomic, readonly) bool hasWalkingOptions;
@property (nonatomic) bool includeHistoricTravelTime;
@property (nonatomic) bool includeRouteTrafficDetail;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) int*transportTypes;
@property (nonatomic, readonly) unsigned long long transportTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;

- (void).cxx_destruct;
- (int)StringAsTransportTypes:(id)arg1;
- (void)addTransportType:(int)arg1;
- (id)automobileOptions;
- (void)clearTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomobileOptions;
- (bool)hasIncludeHistoricTravelTime;
- (bool)hasIncludeRouteTrafficDetail;
- (bool)hasTransitOptions;
- (bool)hasWalkingOptions;
- (unsigned long long)hash;
- (bool)includeHistoricTravelTime;
- (bool)includeRouteTrafficDetail;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setHasIncludeRouteTrafficDetail:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeRouteTrafficDetail:(bool)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setWalkingOptions:(id)arg1;
- (id)transitOptions;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (id)transportTypesAsString:(int)arg1;
- (unsigned long long)transportTypesCount;
- (id)unknownFields;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

@end
