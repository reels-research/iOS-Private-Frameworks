/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceEngineConfiguration : NSObject <NSCopying, NSMutableCopying, REIndentedDescription> {
    bool  _allowsRemoteTraining;
    bool  _allowsUpdatingModelFile;
    NSURL * _baseModelFileURL;
    REDataSourceLoader * _dataSourceLoader;
    REFeatureSet * _featureSet;
    bool  _ignoreDeviceLockState;
    NSMutableArray * _interactionDescriptions;
    RELocationManager * _locationManager;
    NSURL * _modelFileURL;
    unsigned long long  _modelStorageBehavior;
    NSString * _preferenceDomain;
    NSMutableArray * _sectionDescriptions;
    unsigned long long  _trainingBehavior;
    bool  _wantsBackup;
    bool  _wantsImmutableContent;
}

@property (nonatomic, readonly) bool allowsRemoteTraining;
@property (nonatomic, readonly) bool allowsUpdatingModelFile;
@property (nonatomic, readonly, copy) NSURL *baseModelFileURL;
@property (nonatomic, readonly, copy) REDataSourceLoader *dataSourceLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreDeviceLockState;
@property (nonatomic, readonly, copy) NSArray *interactionDescriptors;
@property (nonatomic, readonly) RELocationManager *locationManager;
@property (nonatomic, readonly, copy) NSURL *modelFileURL;
@property (nonatomic, readonly) unsigned long long modelStorageBehavior;
@property (nonatomic, readonly) NSString *preferenceDomain;
@property (nonatomic, readonly, copy) REFeatureSet *primaryFeatures;
@property (nonatomic, readonly, copy) NSArray *sectionDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long trainingBehavior;
@property (nonatomic, readonly) bool wantsBackup;
@property (nonatomic, readonly) bool wantsImmutableContent;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)allowsRemoteTraining;
- (bool)allowsUpdatingModelFile;
- (id)baseModelFileURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceLoader;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (bool)ignoreDeviceLockState;
- (id)initWithModelFileURL:(id)arg1 baseModelFileURL:(id)arg2 allowsUpdatingModelFile:(bool)arg3 dataSourceLoader:(id)arg4 trainingBehavior:(unsigned long long)arg5 modelStorageBehavior:(unsigned long long)arg6 sectionDescriptions:(id)arg7 locationManager:(id)arg8 featureSet:(id)arg9 wantsImmutableContent:(bool)arg10 preferenceDomain:(id)arg11 interactionDescriptions:(id)arg12 allowsRemoteTraining:(bool)arg13 wantsBackup:(bool)arg14 ignoreDeviceLockState:(bool)arg15;
- (id)interactionDescriptors;
- (bool)isEqual:(id)arg1;
- (id)locationManager;
- (id)modelFileURL;
- (unsigned long long)modelStorageBehavior;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferenceDomain;
- (id)primaryFeatures;
- (id)sectionDescriptors;
- (unsigned long long)trainingBehavior;
- (bool)wantsBackup;
- (bool)wantsImmutableContent;

@end