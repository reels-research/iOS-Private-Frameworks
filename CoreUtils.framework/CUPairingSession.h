/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingSession : NSObject {
    NSDictionary * _acl;
    NSDictionary * _aclActual;
    NSDictionary * _additionalPeerInfo;
    NSDictionary * _additionalSelfInfo;
    NSArray * _allowedMACAddresses;
    NSDictionary * _appInfoSelf;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _fixedPIN;
    unsigned int  _flags;
    id /* block */  _hidePINHandler;
    NSString * _label;
    NSData * _mfiCertificateData;
    NSString * _mfiProductType;
    NSString * _mfiSerialNumber;
    NSData * _mfiToken;
    NSString * _myAppleID;
    CUAppleIDClient * _myAppleIDInfoClient;
    struct PairingSessionPrivate { } * _pairingSession;
    struct NSMutableDictionary { Class x1; } * _pairingStreams;
    NSString * _peerAppleID;
    NSDictionary * _peerInfo;
    unsigned int  _pinType;
    unsigned int  _pinTypeActual;
    id /* block */  _promptForPINHandler;
    unsigned long long  _selfAppFlags;
    id /* block */  _sendDataHandler;
    unsigned int  _sessionType;
    id /* block */  _showPINHandler;
    id /* block */  _showPINHandlerEx;
    id /* block */  _signDataHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    id /* block */  _verifySignatureHandler;
}

@property (nonatomic, copy) NSDictionary *acl;
@property (nonatomic, readonly, copy) NSDictionary *aclActual;
@property (nonatomic, copy) NSDictionary *additionalPeerInfo;
@property (nonatomic, copy) NSDictionary *additionalSelfInfo;
@property (nonatomic, copy) NSArray *allowedMACAddresses;
@property (nonatomic, readonly, copy) NSDictionary *appInfoPeer;
@property (nonatomic, copy) NSDictionary *appInfoSelf;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) NSString *fixedPIN;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) id /* block */ hidePINHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSData *mfiCertificateData;
@property (nonatomic, copy) NSString *mfiProductType;
@property (nonatomic, copy) NSString *mfiSerialNumber;
@property (nonatomic, copy) NSData *mfiToken;
@property (nonatomic, copy) NSString *myAppleID;
@property (nonatomic, retain) CUAppleIDClient *myAppleIDInfoClient;
@property (nonatomic, readonly) CUPairedPeer *pairedPeer;
@property (nonatomic, readonly) unsigned long long peerAppFlags;
@property (nonatomic, copy) NSString *peerAppleID;
@property (nonatomic, readonly, copy) NSDictionary *peerInfo;
@property (nonatomic) unsigned int pinType;
@property (nonatomic, readonly) unsigned int pinTypeActual;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic) unsigned long long selfAppFlags;
@property (nonatomic, copy) id /* block */ sendDataHandler;
@property (nonatomic) unsigned int sessionType;
@property (nonatomic, copy) id /* block */ showPINHandler;
@property (nonatomic, copy) id /* block */ showPINHandlerEx;
@property (nonatomic, copy) id /* block */ signDataHandler;
@property (nonatomic, copy) id /* block */ verifySignatureHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_completed:(id)arg1;
- (void)_receivedData:(id)arg1 flags:(unsigned int)arg2;
- (void)_tryPIN:(id)arg1;
- (id)acl;
- (id)aclActual;
- (void)activate;
- (id)additionalPeerInfo;
- (id)additionalSelfInfo;
- (id)allowedMACAddresses;
- (id)appInfoPeer;
- (id)appInfoSelf;
- (void)closeStream:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (int)deriveKeyWithSaltPtr:(const void*)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void*)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 outputKeyPtr:(void*)arg6;
- (id)dispatchQueue;
- (id)fixedPIN;
- (unsigned int)flags;
- (id /* block */)hidePINHandler;
- (id)init;
- (void)invalidate;
- (id)label;
- (id)mfiCertificateData;
- (id)mfiProductType;
- (id)mfiSerialNumber;
- (id)mfiToken;
- (id)myAppleID;
- (id)myAppleIDInfoClient;
- (id)openStreamWithName:(id)arg1 error:(id*)arg2;
- (id)openStreamWithName:(id)arg1 type:(int)arg2 error:(id*)arg3;
- (id)pairedPeer;
- (unsigned long long)peerAppFlags;
- (id)peerAppleID;
- (id)peerInfo;
- (unsigned int)pinType;
- (unsigned int)pinTypeActual;
- (id /* block */)promptForPINHandler;
- (void)receivedData:(id)arg1;
- (unsigned long long)selfAppFlags;
- (id /* block */)sendDataHandler;
- (unsigned int)sessionType;
- (void)setAcl:(id)arg1;
- (void)setAdditionalPeerInfo:(id)arg1;
- (void)setAdditionalSelfInfo:(id)arg1;
- (void)setAllowedMACAddresses:(id)arg1;
- (void)setAppInfoSelf:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFixedPIN:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHidePINHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setMfiCertificateData:(id)arg1;
- (void)setMfiProductType:(id)arg1;
- (void)setMfiSerialNumber:(id)arg1;
- (void)setMfiToken:(id)arg1;
- (void)setMyAppleID:(id)arg1;
- (void)setMyAppleIDInfoClient:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPinType:(unsigned int)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setSelfAppFlags:(unsigned long long)arg1;
- (void)setSendDataHandler:(id /* block */)arg1;
- (void)setSessionType:(unsigned int)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (void)setShowPINHandlerEx:(id /* block */)arg1;
- (void)setSignDataHandler:(id /* block */)arg1;
- (void)setVerifySignatureHandler:(id /* block */)arg1;
- (id /* block */)showPINHandler;
- (id /* block */)showPINHandlerEx;
- (id /* block */)signDataHandler;
- (void)tryPIN:(id)arg1;
- (id /* block */)verifySignatureHandler;

@end
