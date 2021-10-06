/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUHomeKitFindPairedPeerContext : NSObject {
    id /* block */  _completion;
    NSString * _identifier;
    unsigned long long  _options;
    CUPairedPeer * _pairedPeer;
    unsigned long long  _startTicks;
    bool  _triedAccessory;
    bool  _triedHAP;
    unsigned long long  _userCount;
    unsigned long long  _userIndex;
    NSArray * _users;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) CUPairedPeer *pairedPeer;
@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) bool triedAccessory;
@property (nonatomic) bool triedHAP;
@property (nonatomic) unsigned long long userCount;
@property (nonatomic) unsigned long long userIndex;
@property (nonatomic, retain) NSArray *users;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)identifier;
- (unsigned long long)options;
- (id)pairedPeer;
- (void)setCompletion:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPairedPeer:(id)arg1;
- (void)setStartTicks:(unsigned long long)arg1;
- (void)setTriedAccessory:(bool)arg1;
- (void)setTriedHAP:(bool)arg1;
- (void)setUserCount:(unsigned long long)arg1;
- (void)setUserIndex:(unsigned long long)arg1;
- (void)setUsers:(id)arg1;
- (unsigned long long)startTicks;
- (bool)triedAccessory;
- (bool)triedHAP;
- (unsigned long long)userCount;
- (unsigned long long)userIndex;
- (id)users;

@end
