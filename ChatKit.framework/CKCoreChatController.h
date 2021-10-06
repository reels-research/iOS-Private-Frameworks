/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCoreChatController : CKScrollViewController <IMChatSendProgressDelegate, IMSystemMonitorListener> {
    CKTranscriptCollectionViewController * _collectionViewController;
    CKConversation * _conversation;
    <CKCoreChatControllerDelegate> * _delegate;
    bool  _disableAnimationsUnderTest;
    CKFullScreenBalloonViewController * _fullScreenBalloonViewController;
    bool  _ignoreLastBalloonVisibleInMarkAsReadCheck;
    bool  _initialLayoutComplete;
    id /* block */  _overrideScrollBlock;
    UIProgressView * _progressBar;
    CKScheduledUpdater * _refreshServiceForSendingUpdater;
    double  _sendProgress;
    unsigned long long  _sendProgressSendCount;
    unsigned long long  _sendProgressTotalCount;
    bool  _sendingMessage;
    bool  _transitionedFromComposing;
    bool  _userInitiatedTranscriptPush;
    bool  _viewIsVisible;
}

@property (nonatomic, readonly) double balloonMaxWidth;
@property (nonatomic, readonly) IMChat *chat;
@property (nonatomic, readonly) CKTranscriptCollectionView *collectionView;
@property (nonatomic, retain) CKTranscriptCollectionViewController *collectionViewController;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKCoreChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAnimationsUnderTest;
@property (nonatomic, retain) CKFullScreenBalloonViewController *fullScreenBalloonViewController;
@property (nonatomic, readonly) double gradientBottomPlaceholderHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreLastBalloonVisibleInMarkAsReadCheck;
@property (nonatomic) bool initialLayoutComplete;
@property (nonatomic, copy) id /* block */ overrideScrollBlock;
@property (nonatomic, retain) UIProgressView *progressBar;
@property (nonatomic, retain) CKScheduledUpdater *refreshServiceForSendingUpdater;
@property (nonatomic) double sendProgress;
@property (nonatomic) unsigned long long sendProgressSendCount;
@property (nonatomic) unsigned long long sendProgressTotalCount;
@property (getter=isSendingMessage, nonatomic) bool sendingMessage;
@property (nonatomic, readonly) bool shouldDismissAfterSend;
@property (readonly) Class superclass;
@property (nonatomic) bool transitionedFromComposing;
@property (nonatomic) bool userInitiatedTranscriptPush;
@property (nonatomic) bool viewIsVisible;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void).cxx_destruct;
- (void)_chatRegistryDidReloadNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_deregisterSendProgressDelegate;
- (void)_didSendCompositionInConversation:(id)arg1;
- (void)_dismissFullScreenBubbleViewControllerWithSendAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (void)_downgradeStateChangedNotification:(id)arg1;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(bool)arg2;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_handleTapEventForBalloonView:(id)arg1 atIndexPath:(id)arg2 showActionMenu:(bool)arg3;
- (void)_increaseContrastDidChangeNotification:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_markAsReadIfNecessary;
- (void)_performResume;
- (void)_preferredServiceChangedNotification:(id)arg1;
- (void)_refreshActiveChat:(id)arg1;
- (void)_refreshServiceForSending;
- (void)_registerSendProgressDelegate;
- (void)_removeExistingCollectionViewController;
- (void)_setConversationDeferredSetup;
- (void)_setTitle:(id)arg1 animated:(bool)arg2;
- (void)_transferFinishedNotification:(id)arg1;
- (void)_transferRestoredNotification:(id)arg1;
- (void)_updateForNewPreferredService;
- (void)_updateNavigationButtons;
- (void)_updateTitleAnimated:(bool)arg1;
- (void)_willSendComposition:(id)arg1 inConversation:(id)arg2;
- (double)balloonMaxWidth;
- (id)chat;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(bool)arg6;
- (id)collectionView;
- (id)collectionViewController;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 animated:(bool)arg2 duration:(double)arg3;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (bool)disableAnimationsUnderTest;
- (id)fullScreenBalloonViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(bool)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (double)gradientBottomPlaceholderHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrameWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)gradientReferenceView;
- (bool)ignoreLastBalloonVisibleInMarkAsReadCheck;
- (id)initWithConversation:(id)arg1;
- (bool)initialLayoutComplete;
- (bool)isSafeToMarkAsRead;
- (bool)isSendingMessage;
- (void)keyboardWillHideViaGesture;
- (void)loadView;
- (id /* block */)overrideScrollBlock;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2;
- (void)preferredSendingServiceChanged;
- (void)prepareForSuspend;
- (id)progressBar;
- (void)refreshServiceForSending;
- (id)refreshServiceForSendingUpdater;
- (void)registerNotifications;
- (void)registerNotificationsForConversation:(id)arg1;
- (id)scrollView;
- (void)sendComposition:(id)arg1;
- (double)sendProgress;
- (unsigned long long)sendProgressSendCount;
- (unsigned long long)sendProgressTotalCount;
- (void)setCollectionViewController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAnimationsUnderTest:(bool)arg1;
- (void)setFullScreenBalloonViewController:(id)arg1;
- (void)setIgnoreLastBalloonVisibleInMarkAsReadCheck:(bool)arg1;
- (void)setInitialLayoutComplete:(bool)arg1;
- (void)setOverrideScrollBlock:(id /* block */)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setRefreshServiceForSendingUpdater:(id)arg1;
- (void)setSendProgress:(double)arg1;
- (void)setSendProgressSendCount:(unsigned long long)arg1;
- (void)setSendProgressTotalCount:(unsigned long long)arg1;
- (void)setSendingMessage:(bool)arg1;
- (void)setTransitionedFromComposing:(bool)arg1;
- (void)setUserInitiatedTranscriptPush:(bool)arg1;
- (void)setViewIsVisible:(bool)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (void)setupStateForLaunchURL:(id)arg1;
- (bool)shouldDismissAfterSend;
- (void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(bool)arg2;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(bool)arg2;
- (void)significantTimeChange;
- (void)systemApplicationDidResume;
- (void)systemApplicationWillEnterForeground;
- (id)textInputContextIdentifier;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(bool)arg4 error:(id*)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(bool)arg4;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (bool)transitionedFromComposing;
- (bool)userInitiatedTranscriptPush;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidLayoutSubviews;
- (bool)viewIsVisible;
- (void)viewWillDisappear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

@end
