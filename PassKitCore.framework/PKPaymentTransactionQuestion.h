/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding> {
    bool  _answered;
    bool  _answeredOnThisDevice;
    NSDate * _expirationDate;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSArray *allowedAnswers;
@property (nonatomic) bool answered;
@property (nonatomic) bool answeredOnThisDevice;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedAnswers;
- (bool)answered;
- (bool)answeredOnThisDevice;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuestion:(id)arg1;
- (void)setAnswered:(bool)arg1;
- (void)setAnsweredOnThisDevice:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
