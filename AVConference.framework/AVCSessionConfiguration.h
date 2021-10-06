/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCSessionConfiguration : NSObject {
    unsigned long long  _maxRemoteParticipants;
    id  _reportingHierarchyToken;
    long long  _sessionMode;
}

@property (nonatomic) unsigned long long maxRemoteParticipants;
@property (nonatomic, copy) id reportingHierarchyToken;
@property (nonatomic) long long sessionMode;

+ (long long)clientSessionModeWithSessionMode:(long long)arg1;
+ (long long)sessionModeWithClientSessionMode:(long long)arg1;

- (void)dealloc;
- (id)dictionary;
- (unsigned long long)maxRemoteParticipants;
- (id)reportingHierarchyToken;
- (long long)sessionMode;
- (void)setMaxRemoteParticipants:(unsigned long long)arg1;
- (void)setReportingHierarchyToken:(id)arg1;
- (void)setSessionMode:(long long)arg1;
- (void)setUpWithDictionary:(id)arg1;

@end
