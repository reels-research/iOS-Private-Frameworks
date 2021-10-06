/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DESRecipe : NSObject <NSCopying> {
    NSArray * _attachments;
    NSDictionary * _parametersUsed;
    NSDictionary * _recipeUserInfo;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, readonly, copy) NSDictionary *parametersUsed;
@property (nonatomic, readonly, copy) NSDictionary *recipeUserInfo;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithRecipeResponse:(id)arg1 error:(id*)arg2;
- (id)_initWithRecipeUserInfo:(id)arg1;
- (id)attachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)parametersUsed;
- (id)recipeUserInfo;
- (void)setAttachments:(id)arg1;

@end
