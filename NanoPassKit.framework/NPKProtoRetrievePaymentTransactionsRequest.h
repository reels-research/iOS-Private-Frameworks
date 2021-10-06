/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRetrievePaymentTransactionsRequest : PBRequest <NSCopying> {
    NSString * _passID;
}

@property (nonatomic, readonly) bool hasPassID;
@property (nonatomic, retain) NSString *passID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
