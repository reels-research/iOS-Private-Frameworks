/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem> {
    PKAccount * _account;
    PKPaymentPass * _paymentPass;
    PKCreditAccountStatement * _statement;
    NSArray * _statements;
    PKCreditAccountSummary * _summary;
    PKPaymentTransactionGroup * _transactionGroup;
    unsigned long long  _type;
    PKPaymentWebService * _webService;
}

@property (nonatomic, retain) PKAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) PKCreditAccountStatement *statement;
@property (nonatomic, retain) NSArray *statements;
@property (nonatomic, retain) PKCreditAccountSummary *summary;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransactionGroup *transactionGroup;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (id)account;
- (id)paymentPass;
- (void)setAccount:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setStatement:(id)arg1;
- (void)setStatements:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTransactionGroup:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWebService:(id)arg1;
- (id)statement;
- (id)statements;
- (id)summary;
- (id)transactionGroup;
- (unsigned long long)type;
- (id)webService;

@end
