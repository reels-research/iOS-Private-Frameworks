/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming> {
    NSString * _briefingsTagID;
    FCBundleSubscription * _bundleSubscription;
    long long  _filterOptions;
    NSSet * _mutedChannelTagIDs;
    NSSet * _otherArticleIDs;
    NSSet * _otherClusterIDs;
    <FCPaidAccessCheckerType> * _paidAccessChecker;
    NSSet * _subscribedTagIDs;
}

@property (nonatomic, copy) NSString *briefingsTagID;
@property (nonatomic, retain) FCBundleSubscription *bundleSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long filterOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *mutedChannelTagIDs;
@property (nonatomic, copy) NSSet *otherArticleIDs;
@property (nonatomic, copy) NSSet *otherClusterIDs;
@property (nonatomic, retain) <FCPaidAccessCheckerType> *paidAccessChecker;
@property (nonatomic, copy) NSSet *subscribedTagIDs;
@property (readonly) Class superclass;

+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3;
+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4;
+ (id)transformationWithFilterOptions:(long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedChannelTagIDs:(id)arg5 briefingsTagID:(id)arg6 paidAccessChecker:(id)arg7 bundleSubscription:(id)arg8;

- (void).cxx_destruct;
- (id)briefingsTagID;
- (id)bundleSubscription;
- (long long)filterOptions;
- (id)mutedChannelTagIDs;
- (id)otherArticleIDs;
- (id)otherClusterIDs;
- (id)paidAccessChecker;
- (void)setBriefingsTagID:(id)arg1;
- (void)setBundleSubscription:(id)arg1;
- (void)setFilterOptions:(long long)arg1;
- (void)setMutedChannelTagIDs:(id)arg1;
- (void)setOtherArticleIDs:(id)arg1;
- (void)setOtherClusterIDs:(id)arg1;
- (void)setPaidAccessChecker:(id)arg1;
- (void)setSubscribedTagIDs:(id)arg1;
- (id)subscribedTagIDs;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadline:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end
