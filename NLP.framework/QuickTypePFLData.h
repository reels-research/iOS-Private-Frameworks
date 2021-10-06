/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

@interface QuickTypePFLData : NSObject {
    struct unique_ptr<TrainingData, std::__1::default_delete<TrainingData> > { 
        struct __compressed_pair<TrainingData *, std::__1::default_delete<TrainingData> > { 
            struct TrainingData {} *__value_; 
        } __ptr_; 
    }  _data;
    unsigned long long  _maxSequenceLength;
}

@property (nonatomic, readonly) unsigned long long maxSequenceLength;
@property (nonatomic, readonly) unsigned long long numTrainingSamples;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateDataInBatches:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithMaxSequenceLength:(unsigned long long)arg1;
- (bool)loadFromFile:(id)arg1 error:(id*)arg2;
- (unsigned long long)maxSequenceLength;
- (unsigned long long)numTrainingSamples;
- (void)shuffle;

@end
