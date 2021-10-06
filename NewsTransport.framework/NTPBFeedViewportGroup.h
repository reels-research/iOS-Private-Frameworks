/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportGroup : PBCodable <NSCopying> {
    NTPBColorGradient * _backgroundGradient;
    NTPBColor * _cardBackgroundColor;
    NTPBDate * _creationDate;
    int  _ctaTextRef;
    NTPBDiscoverMoreVideosInfo * _discoverMoreVideosInfo;
    NTPBDate * _editionFeedEndDate;
    NTPBDate * _editionFeedStartDate;
    NTPBDate * _editionKeyDate;
    int  _eyebrowTextRef;
    struct { 
        unsigned int mergeID : 1; 
        unsigned int options : 1; 
        unsigned int ctaTextRef : 1; 
        unsigned int eyebrowTextRef : 1; 
        unsigned int l2TagIDRef : 1; 
        unsigned int sourceIdentifierRef : 1; 
        unsigned int subtitleRef : 1; 
        unsigned int titleRef : 1; 
        unsigned int type : 1; 
        unsigned int isFirstFromEdition : 1; 
    }  _has;
    NSMutableArray * _headlines;
    NSString * _identifier;
    bool  _isFirstFromEdition;
    NSMutableArray * _issueIDs;
    int  _l2TagIDRef;
    NSString * _magazineGroupIdentifier;
    unsigned long long  _mergeID;
    unsigned long long  _options;
    NTPBColorGradient * _sauceGradient;
    int  _sourceIdentifierRef;
    int  _subtitleRef;
    NTPBColor * _titleColor;
    int  _titleRef;
    int  _type;
    NSMutableArray * _videoPlaylistHeadlines;
}

@property (nonatomic, retain) NTPBColorGradient *backgroundGradient;
@property (nonatomic, retain) NTPBColor *cardBackgroundColor;
@property (nonatomic, retain) NTPBDate *creationDate;
@property (nonatomic) int ctaTextRef;
@property (nonatomic, retain) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, retain) NTPBDate *editionFeedEndDate;
@property (nonatomic, retain) NTPBDate *editionFeedStartDate;
@property (nonatomic, retain) NTPBDate *editionKeyDate;
@property (nonatomic) int eyebrowTextRef;
@property (nonatomic, readonly) bool hasBackgroundGradient;
@property (nonatomic, readonly) bool hasCardBackgroundColor;
@property (nonatomic, readonly) bool hasCreationDate;
@property (nonatomic) bool hasCtaTextRef;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosInfo;
@property (nonatomic, readonly) bool hasEditionFeedEndDate;
@property (nonatomic, readonly) bool hasEditionFeedStartDate;
@property (nonatomic, readonly) bool hasEditionKeyDate;
@property (nonatomic) bool hasEyebrowTextRef;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsFirstFromEdition;
@property (nonatomic) bool hasL2TagIDRef;
@property (nonatomic, readonly) bool hasMagazineGroupIdentifier;
@property (nonatomic) bool hasMergeID;
@property (nonatomic) bool hasOptions;
@property (nonatomic, readonly) bool hasSauceGradient;
@property (nonatomic) bool hasSourceIdentifierRef;
@property (nonatomic) bool hasSubtitleRef;
@property (nonatomic, readonly) bool hasTitleColor;
@property (nonatomic) bool hasTitleRef;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *headlines;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isFirstFromEdition;
@property (nonatomic, retain) NSMutableArray *issueIDs;
@property (nonatomic) int l2TagIDRef;
@property (nonatomic, retain) NSString *magazineGroupIdentifier;
@property (nonatomic) unsigned long long mergeID;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NTPBColorGradient *sauceGradient;
@property (nonatomic) int sourceIdentifierRef;
@property (nonatomic) int subtitleRef;
@property (nonatomic, retain) NTPBColor *titleColor;
@property (nonatomic) int titleRef;
@property (nonatomic) int type;
@property (nonatomic, retain) NSMutableArray *videoPlaylistHeadlines;

+ (Class)headlinesType;
+ (Class)issueIDsType;
+ (Class)videoPlaylistHeadlinesType;

- (void)addHeadlines:(id)arg1;
- (void)addIssueIDs:(id)arg1;
- (void)addVideoPlaylistHeadlines:(id)arg1;
- (id)backgroundGradient;
- (id)cardBackgroundColor;
- (void)clearHeadlines;
- (void)clearIssueIDs;
- (void)clearVideoPlaylistHeadlines;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (int)ctaTextRef;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoverMoreVideosInfo;
- (id)editionFeedEndDate;
- (id)editionFeedStartDate;
- (id)editionKeyDate;
- (int)eyebrowTextRef;
- (bool)hasBackgroundGradient;
- (bool)hasCardBackgroundColor;
- (bool)hasCreationDate;
- (bool)hasCtaTextRef;
- (bool)hasDiscoverMoreVideosInfo;
- (bool)hasEditionFeedEndDate;
- (bool)hasEditionFeedStartDate;
- (bool)hasEditionKeyDate;
- (bool)hasEyebrowTextRef;
- (bool)hasIdentifier;
- (bool)hasIsFirstFromEdition;
- (bool)hasL2TagIDRef;
- (bool)hasMagazineGroupIdentifier;
- (bool)hasMergeID;
- (bool)hasOptions;
- (bool)hasSauceGradient;
- (bool)hasSourceIdentifierRef;
- (bool)hasSubtitleRef;
- (bool)hasTitleColor;
- (bool)hasTitleRef;
- (bool)hasType;
- (unsigned long long)hash;
- (id)headlines;
- (id)headlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)headlinesCount;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isFirstFromEdition;
- (id)issueIDs;
- (id)issueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)issueIDsCount;
- (int)l2TagIDRef;
- (id)magazineGroupIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)mergeID;
- (unsigned long long)options;
- (bool)readFrom:(id)arg1;
- (id)sauceGradient;
- (void)setBackgroundGradient:(id)arg1;
- (void)setCardBackgroundColor:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCtaTextRef:(int)arg1;
- (void)setDiscoverMoreVideosInfo:(id)arg1;
- (void)setEditionFeedEndDate:(id)arg1;
- (void)setEditionFeedStartDate:(id)arg1;
- (void)setEditionKeyDate:(id)arg1;
- (void)setEyebrowTextRef:(int)arg1;
- (void)setHasCtaTextRef:(bool)arg1;
- (void)setHasEyebrowTextRef:(bool)arg1;
- (void)setHasIsFirstFromEdition:(bool)arg1;
- (void)setHasL2TagIDRef:(bool)arg1;
- (void)setHasMergeID:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setHasSourceIdentifierRef:(bool)arg1;
- (void)setHasSubtitleRef:(bool)arg1;
- (void)setHasTitleRef:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFirstFromEdition:(bool)arg1;
- (void)setIssueIDs:(id)arg1;
- (void)setL2TagIDRef:(int)arg1;
- (void)setMagazineGroupIdentifier:(id)arg1;
- (void)setMergeID:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSauceGradient:(id)arg1;
- (void)setSourceIdentifierRef:(int)arg1;
- (void)setSubtitleRef:(int)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleRef:(int)arg1;
- (void)setType:(int)arg1;
- (void)setVideoPlaylistHeadlines:(id)arg1;
- (int)sourceIdentifierRef;
- (int)subtitleRef;
- (id)titleColor;
- (int)titleRef;
- (int)type;
- (id)videoPlaylistHeadlines;
- (id)videoPlaylistHeadlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPlaylistHeadlinesCount;
- (void)writeTo:(id)arg1;

@end