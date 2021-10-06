/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCreditCardFormatter : NSFormatter {
    bool  _allowsUnknownCardTypes;
    bool  _isVirtualCard;
    bool  _showCreditCardNumber;
    bool  _showLastFourDigits;
}

@property (nonatomic) bool allowsUnknownCardTypes;
@property (nonatomic) bool isVirtualCard;
@property (nonatomic) bool showCreditCardNumber;
@property (nonatomic) bool showLastFourDigits;

- (id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inNormalizedCreditCardNumber:(id)arg3;
- (bool)allowsUnknownCardTypes;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (bool)isVirtualCard;
- (void)setAllowsUnknownCardTypes:(bool)arg1;
- (void)setIsVirtualCard:(bool)arg1;
- (void)setShowCreditCardNumber:(bool)arg1;
- (void)setShowLastFourDigits:(bool)arg1;
- (bool)showCreditCardNumber;
- (bool)showLastFourDigits;
- (id)stringForObjectValue:(id)arg1;

@end
