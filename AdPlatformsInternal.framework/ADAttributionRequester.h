/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
 */

@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {
    NSString * _bundleID;
    NSXPCConnection * _connection;
    NSNumber * _transactionToken;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSNumber *transactionToken;

- (void).cxx_destruct;
- (int)appRunState;
- (void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2;
- (void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2;
- (void)beginAttributionRequest:(id)arg1 xpcToken:(unsigned int)arg2 reason:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)bundleID;
- (id)connection;
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3;
- (void)makeAttributionRequestWithObject:(id)arg1 andHandler:(id /* block */)arg2;
- (void)overrideAttributionData:(id)arg1;
- (bool)productionClient;
- (void)requestAttributionDetails:(id /* block */)arg1;
- (void)requestAttributionDetailsWithBlock:(id /* block */)arg1;
- (void)setBundleID:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setStocksAdEnabled:(bool)arg1;
- (void)setTransactionToken:(id)arg1;
- (id)transactionToken;

@end
