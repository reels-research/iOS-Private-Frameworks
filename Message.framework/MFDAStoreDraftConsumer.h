/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer> {
    MFError * _error;
    NSString * _serverId;
    bool  _success;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MFError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)error;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)serverId;
- (bool)success;

@end
