/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFormula : NSObject <EDFormulaBuilding> {
    struct __CFData { } * mPackedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)formula;

- (bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (bool)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (bool)convertLastRefsToArea;
- (bool)convertToIntersect:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1 withFinalParen:(bool)arg2;
- (bool)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (bool)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (bool)copyTokenFromXlPtg:(struct XlPtg { char *x1; int x2; unsigned int x3; unsigned short x4; }*)arg1;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int*)arg3;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (bool)fixTableOfConstantsRefs;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (bool)isBaseFormula;
- (bool)isCleaned;
- (bool)isCleanedWithEvaluationStack;
- (bool)isContainsRelativeReferences;
- (bool)isSharedFormula;
- (bool)isSupportedFormula;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int*)arg2;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(bool*)arg1 withEDLinks:(id)arg2;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (id)originalFormulaString;
- (void)populateXlPtg:(struct XlPtg { char *x1; int x2; unsigned int x3; unsigned short x4; }*)arg1 index:(unsigned int)arg2;
- (void)removeAllTokens;
- (bool)removeTokenAtIndex:(unsigned int)arg1;
- (bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (id)saveArgs:(unsigned int)arg1 andDelete:(bool)arg2;
- (void)setCleaned:(bool)arg1;
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setOriginalFormulaString:(id)arg1;
- (void)setWarning:(int)arg1;
- (void)setWarningParameter:(id)arg1;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (bool)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (struct EDToken { unsigned short x1; unsigned int x2; }*)tokenAtIndex:(unsigned int)arg1;
- (unsigned int)tokenCount;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(unsigned long long*)arg2;
- (void)updateCleanedWithEvaluationStack:(bool)arg1;
- (void)updateContainsRelativeReferences:(bool)arg1;
- (bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (id)warning;
- (id)warningParameter;
- (int)warningType;
- (bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (struct ChVector<XlPtg *> { struct XlPtg {} **x1; struct XlPtg {} **x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)xlPtgs;

@end
