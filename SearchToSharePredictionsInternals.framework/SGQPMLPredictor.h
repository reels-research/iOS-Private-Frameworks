/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPMLPredictor : NSObject <PMLPlistAndChunksSerializableProtocol> {
    NSDictionary * _categoryNameForLabel;
    SGQPMultiLabelModel * _multiLabelModel;
    PMLHashingVectorizer * _vectorizer;
}

@property (nonatomic, readonly) NSDictionary *categoryNameForLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SGQPMultiLabelModel *multiLabelModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PMLHashingVectorizer *vectorizer;

+ (id)predictorFromAsset:(id)arg1;
+ (id)predictorFromChunkedFileAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)categoryNameForLabel;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithVectorizer:(id)arg1 multiLabelModel:(id)arg2 labelMap:(id)arg3;
- (id)multiLabelModel;
- (id)predictionsForMessages:(id)arg1;
- (void)serializeInChunkedFileFormatToFile:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)vectorizer;

@end
