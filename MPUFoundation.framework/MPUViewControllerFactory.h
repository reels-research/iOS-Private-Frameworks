/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUViewControllerFactory : NSObject <MPUViewControllerFactory, UIViewControllerRestoration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allConfigurations;
+ (id)_existingViewControllerWithRestorationIdentifierPath:(id)arg1;
+ (id)configurationForViewControllerIdentifier:(id)arg1;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(id /* block */)arg2;
+ (void)registerViewControllerIdentifiers;
+ (id)viewControllerForIdentifier:(id)arg1;
+ (id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

@end
