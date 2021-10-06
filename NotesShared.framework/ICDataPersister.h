/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDataPersister : NSObject <ICDataPersister, NSSecureCoding> {
    unsigned long long  _accumulatedDataSize;
    NSMutableArray * _allURLs;
    NSURL * _cacheDirectoryURL;
    ICDataCryptor * _dataCryptor;
    NSMutableDictionary * _identifierToDataDictionary;
    NSString * _objectIdentifier;
}

@property (nonatomic) unsigned long long accumulatedDataSize;
@property (nonatomic, readonly) NSMutableArray *allURLs;
@property (nonatomic, readonly) NSURL *cacheDirectoryURL;
@property (nonatomic, readonly) ICDataCryptor *dataCryptor;
@property (nonatomic, readonly) NSMutableDictionary *identifierToDataDictionary;
@property (nonatomic, readonly) NSString *objectIdentifier;

+ (void)deletePasteboardDataFiles;
+ (id)rootCacheDirectoryPathForPasteboard:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accumulatedDataSize;
- (id)allURLs;
- (id)cacheDirectoryURL;
- (void)createDataCryptorIfNecessary;
- (id)dataCryptor;
- (void)deleteDataFiles;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierToDataDictionary;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIdentifier:(id)arg1 forPasteboard:(bool)arg2;
- (id)loadDataForIdentifier:(id)arg1;
- (bool)makeSureCacheDirectoryExists;
- (id)objectIdentifier;
- (bool)saveData:(id)arg1 identifier:(id)arg2;
- (void)setAccumulatedDataSize:(unsigned long long)arg1;
- (bool)verifyDataFiles;

@end
