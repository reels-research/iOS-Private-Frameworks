/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int numAccessories : 1; 
        unsigned int triggerSource : 1; 
    }  _has;
    unsigned int  _numAccessories;
    unsigned long long  _timestamp;
    NSString * _transaction;
    int  _triggerSource;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasNumAccessories;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransaction;
@property (nonatomic) bool hasTriggerSource;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *transaction;
@property (nonatomic) int triggerSource;

- (void).cxx_destruct;
- (int)StringAsTriggerSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasNumAccessories;
- (bool)hasTimestamp;
- (bool)hasTransaction;
- (bool)hasTriggerSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasNumAccessories:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTriggerSource:(bool)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTriggerSource:(int)arg1;
- (unsigned long long)timestamp;
- (id)transaction;
- (int)triggerSource;
- (id)triggerSourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
