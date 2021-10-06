/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransitPassBalanceModel : NSObject {
    PKPaymentPass * _pass;
    NSSet * _serverBalances;
    NSArray * _transitBalanceFields;
    PKTransitPassProperties * _transitPassProperties;
}

@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, copy) NSSet *serverBalances;
@property (nonatomic, readonly) NSArray *transitBalanceFields;
@property (nonatomic, retain) PKTransitPassProperties *transitPassProperties;

- (void).cxx_destruct;
- (id)_backOfThePassBalanceFieldsWithBalancesByID:(id)arg1;
- (id)_balanceByIDWithBalances:(id)arg1;
- (id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)_fieldWithBalance:(id)arg1;
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1;
- (void)_updateTransitBalanceFields;
- (id)initWithPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pass;
- (id)serverBalances;
- (void)setServerBalances:(id)arg1;
- (void)setTransitPassProperties:(id)arg1;
- (id)transitBalanceFields;
- (id)transitPassProperties;

@end