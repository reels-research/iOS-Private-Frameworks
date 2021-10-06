/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessaging : NSObject <VCControlChannelDelegate> {
    id  controlChannelWeak;
    NSMutableDictionary * topics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(bool)arg3 receiveHandler:(id /* block */)arg4;
- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(bool)arg3 toParticipant:(id)arg4;
- (void)dealloc;
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)startMessaging;
- (void)stopMessaging;

@end
