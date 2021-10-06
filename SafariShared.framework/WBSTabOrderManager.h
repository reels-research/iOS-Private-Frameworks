/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTabOrderManager : NSObject {
    <WBSTabOrderProvider> * _tabOrderProvider;
}

@property (nonatomic) <WBSTabOrderProvider> *tabOrderProvider;
@property (nonatomic, readonly) <WBSOrderedTab> *tabToSelectBeforeClosingSelectedTab;

- (void).cxx_destruct;
- (void)setTabOrderProvider:(id)arg1;
- (bool)tab:(id)arg1 isInSameSetAsTab:(id)arg2;
- (id)tabOrderProvider;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)arg1;
- (id)tabToSelectBeforeClosingSelectedTab;

@end
