/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem> {
    <AVTAvatarRecord> * _avatar;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avatar;
- (void)downcastWithRecordHandler:(id /* block */)arg1 imageHandler:(id /* block */)arg2 viewHandler:(id /* block */)arg3;
- (void)downcastWithRecordHandler:(id /* block */)arg1 viewHandler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)initWithAvatar:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
