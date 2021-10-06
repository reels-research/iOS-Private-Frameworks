/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemoveExpressPassWithUniqueIdentifierResponse : PBCodable <NSCopying> {
    NSData * _actualExpressPassInformation;
    NSMutableArray * _currentExpressPasseInformations;
    struct { 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSData *actualExpressPassInformation;
@property (nonatomic, retain) NSMutableArray *currentExpressPasseInformations;
@property (nonatomic, readonly) bool hasActualExpressPassInformation;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

+ (Class)currentExpressPasseInformationType;

- (void).cxx_destruct;
- (id)actualExpressPassInformation;
- (void)addCurrentExpressPasseInformation:(id)arg1;
- (void)clearCurrentExpressPasseInformations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentExpressPasseInformationAtIndex:(unsigned long long)arg1;
- (id)currentExpressPasseInformations;
- (unsigned long long)currentExpressPasseInformationsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActualExpressPassInformation;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActualExpressPassInformation:(id)arg1;
- (void)setCurrentExpressPasseInformations:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end