/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconContentViewReuseQueue : NSObject {
    Class  _contentViewClass;
    NSMutableArray * _reuseStack;
}

@property (nonatomic, readonly) Class contentViewClass;
@property (nonatomic, readonly) NSMutableArray *reuseStack;

+ (id)globalReuseQueueForContentViewClass:(Class)arg1;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)dequeueContentView;
- (id)init;
- (id)initWithContentViewClass:(Class)arg1;
- (void)reapContentView:(id)arg1;
- (id)reuseStack;

@end
