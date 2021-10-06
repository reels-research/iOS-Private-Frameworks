/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDSEUnboundItemsImpl : NSObject <IKDataSourceElementImplementing> {
    IKDataSourceElement * _dataSourceElement;
    NSArray * _itemElements;
    IKChangeSet * _itemsChangeSet;
}

@property (nonatomic, readonly) IKDataSourceElement *dataSourceElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *indexTitles;
@property (nonatomic, copy) NSArray *itemElements;
@property (nonatomic, retain) IKChangeSet *itemsChangeSet;
@property (nonatomic, readonly) NSArray *prototypes;
@property (nonatomic, readonly, copy) NSArray *proxiedItemElements;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(id /* block */)arg2;
- (void)configureUpdatesWithImplementation:(id)arg1;
- (id)dataSourceElement;
- (id)elementForItemAtIndex:(long long)arg1;
- (long long)indexOfItemForElement:(id)arg1;
- (id)indexTitles;
- (id)initWithDataSourceElement:(id)arg1;
- (void)initializeWithElementFactory:(id)arg1;
- (id)itemElements;
- (id)itemsChangeSet;
- (void)loadIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (id)prototypes;
- (void)resetUpdates;
- (void)setItemElements:(id)arg1;
- (void)setItemsChangeSet:(id)arg1;
- (void)teardown;
- (void)unloadIndex:(long long)arg1;
- (void)updateStylesUsingUpdater:(id /* block */)arg1;

@end
