/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeatureValuePair : NSObject <NSCopying> {
    REFeature * _feature;
    REFeatureValue * _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) REFeatureValue *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
