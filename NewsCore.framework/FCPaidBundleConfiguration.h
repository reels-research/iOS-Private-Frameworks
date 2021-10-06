/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPaidBundleConfiguration : NSObject <NSCopying> {
    NSDictionary * _configDict;
    NSString * _localizedStorefrontID;
    NSDictionary * _magazineGenresByGenre;
    NSDictionary * _paywallConfigurationsByType;
    NSString * _storefrontID;
    NSDictionary * _subscriptionButtonConfigurationsByType;
}

@property (nonatomic, readonly) long long bundleSubscriptionsGlobalMeteredCount;
@property (getter=isCategoriesDownloadButtonEnabled, nonatomic, readonly) bool categoriesDownloadButtonEnabled;
@property (nonatomic, retain) NSDictionary *configDict;
@property (nonatomic, readonly) long long criticalStorageAutomaticIssueDownloadTTL;
@property (nonatomic, readonly) long long criticalStorageManualIssueDownloadTTL;
@property (nonatomic, readonly) NSString *defaultLandingPageArticleID;
@property (nonatomic, readonly) long long entitlementsGracePeriodInSeconds;
@property (nonatomic, readonly) NSString *expirationAlertDescription;
@property (nonatomic, readonly) NSString *familySharingLandingPageArticleID;
@property (nonatomic, readonly) long long featuredArticlesFetchLimit;
@property (nonatomic, readonly) NSString *featuredArticlesTagList;
@property (nonatomic, readonly) long long feedAutoRefreshMinimumInterval;
@property (nonatomic, readonly) long long forYouMaxDailyPaidArticlesForFreeUsers;
@property (nonatomic, readonly) long long forYouMaxMagazineGroupsForFreeUsers;
@property (nonatomic, readonly) long long forYouMaxMagazineGroupsForPaidUsers;
@property (nonatomic, readonly) long long forYouMaxMagazineGroupsForTrialUsers;
@property (getter=isFreeBadgeEnabled, nonatomic, readonly) bool freeBadgeEnabled;
@property (nonatomic, readonly) NSString *freeBadgeTitle;
@property (nonatomic, readonly) NSArray *groupWhitelistedTagIds;
@property (nonatomic, readonly, copy) NSString *localizedStorefrontID;
@property (nonatomic, readonly) long long lowStorageAutomaticIssueDownloadTTL;
@property (nonatomic, readonly) long long lowStorageManualIssueDownloadTTL;
@property (nonatomic, retain) NSDictionary *magazineGenresByGenre;
@property (getter=areMagazinesEnabled, nonatomic, readonly) bool magazinesEnabled;
@property (nonatomic, readonly) long long minimumArticlesInANFIssueBeforeRead;
@property (nonatomic, readonly) long long minimumPagesInPDFIssueBeforeRead;
@property (nonatomic, readonly) long long minimumReadIssuesInMyMagazines;
@property (nonatomic, readonly) long long newIssuesCheckLocalTime;
@property (nonatomic, readonly) long long newIssuesNotificationDeliveryLocalTime;
@property (nonatomic, readonly) long long normalStorageAutomaticIssueDownloadTTL;
@property (nonatomic, readonly) long long normalStorageManualIssueDownloadTTL;
@property (nonatomic, readonly) NSArray *offeredBundlePurchaseIDs;
@property (getter=isPaidBadgeEnabled, nonatomic, readonly) bool paidBadgeEnabled;
@property (nonatomic, readonly) NSString *paidBadgeTitle;
@property (getter=isPaidBundleVisible, nonatomic, readonly) bool paidBundleVisible;
@property (nonatomic, readonly) NSString *paidFeedID;
@property (nonatomic, retain) NSDictionary *paywallConfigurationsByType;
@property (nonatomic, readonly) long long recentIssuesMaxAge;
@property (nonatomic, readonly) NSString *recommendableIssuesTagList;
@property (nonatomic, readonly) NSString *renewalLandingPageArticleID;
@property (nonatomic, readonly) NSArray *restorableBundlePurchaseIDs;
@property (getter=isSharingIssuesEnabled, nonatomic, readonly) bool sharingIssuesEnabled;
@property (nonatomic, readonly, copy) NSString *storefrontID;
@property (nonatomic, retain) NSDictionary *subscriptionButtonConfigurationsByType;
@property (nonatomic, readonly) long long vanityURLMappingRefreshRate;
@property (nonatomic, readonly) NSString *vanityURLMappingResourceID;

+ (id)defaultConfigurationForStorefrontID:(id)arg1;
+ (id)defaultFamilySharingLandingPageByLocalizedStorefrontID;
+ (id)defaultLandingPageByLocalizedStorefrontID;
+ (id)defaultPaidFeedIDByLocalizedStorefrontID;
+ (id)defaultTagListIDByLocalizedStorefrontID;
+ (id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;
+ (id)renewalLandingPageByLocalizedStorefrontID;

- (void).cxx_destruct;
- (bool)areMagazinesEnabled;
- (long long)bundleSubscriptionsGlobalMeteredCount;
- (id)configDict;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)criticalStorageAutomaticIssueDownloadTTL;
- (long long)criticalStorageManualIssueDownloadTTL;
- (id)defaultLandingPageArticleID;
- (id)defaultMagazineGenres;
- (id)defaultPaywallConfigs;
- (id)defaultSubscriptionButtonConfigs;
- (long long)entitlementsGracePeriodInSeconds;
- (id)expirationAlertDescription;
- (id)familySharingLandingPageArticleID;
- (long long)featuredArticlesFetchLimit;
- (id)featuredArticlesTagList;
- (long long)feedAutoRefreshMinimumInterval;
- (long long)forYouMaxDailyPaidArticlesForFreeUsers;
- (long long)forYouMaxMagazineGroupsForFreeUsers;
- (long long)forYouMaxMagazineGroupsForPaidUsers;
- (long long)forYouMaxMagazineGroupsForTrialUsers;
- (id)freeBadgeTitle;
- (id)groupWhitelistedTagIds;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 localizedStorefrontID:(id)arg3;
- (bool)isCategoriesDownloadButtonEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isFreeBadgeEnabled;
- (bool)isPaidBadgeEnabled;
- (bool)isPaidBundleVisible;
- (bool)isSharingIssuesEnabled;
- (id)localizedStorefrontID;
- (long long)lowStorageAutomaticIssueDownloadTTL;
- (long long)lowStorageManualIssueDownloadTTL;
- (id)magazineGenresByGenre;
- (long long)minimumArticlesInANFIssueBeforeRead;
- (long long)minimumPagesInPDFIssueBeforeRead;
- (long long)minimumReadIssuesInMyMagazines;
- (long long)newIssuesCheckLocalTime;
- (long long)newIssuesNotificationDeliveryLocalTime;
- (long long)normalStorageAutomaticIssueDownloadTTL;
- (long long)normalStorageManualIssueDownloadTTL;
- (id)offeredBundlePurchaseIDs;
- (id)paidBadgeTitle;
- (id)paidFeedID;
- (id)paywallConfigurationsByType;
- (long long)recentIssuesMaxAge;
- (id)recommendableIssuesTagList;
- (id)renewalLandingPageArticleID;
- (id)restorableBundlePurchaseIDs;
- (void)setConfigDict:(id)arg1;
- (void)setMagazineGenresByGenre:(id)arg1;
- (void)setPaywallConfigurationsByType:(id)arg1;
- (void)setSubscriptionButtonConfigurationsByType:(id)arg1;
- (id)storefrontID;
- (id)subscriptionButtonConfigurationsByType;
- (long long)vanityURLMappingRefreshRate;
- (id)vanityURLMappingResourceID;

@end
