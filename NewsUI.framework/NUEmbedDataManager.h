/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUEmbedDataManager : NSObject <NUEmbedDataManager, SXEmbedDataProvider> {
    SXJSONDictionary * _embedConfiguration;
    <NUEmbedConfigurationLoader> * _embedConfigurationLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXJSONDictionary *embedConfiguration;
@property (nonatomic, readonly) <NUEmbedConfigurationLoader> *embedConfigurationLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)embedConfiguration;
- (id)embedConfigurationLoader;
- (id)embedForType:(id)arg1;
- (id)initWithEmbedConfigurationLoader:(id)arg1;
- (void)loadEmbedDataWithCompletion:(id /* block */)arg1;
- (void)setEmbedConfiguration:(id)arg1;

@end
