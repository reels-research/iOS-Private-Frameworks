/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleFlowAnimator : NSObject <UINavigationControllerDelegate> {
    GKBubbleSet * _mostRecentOverlayBubbleSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKBubbleSet *mostRecentOverlayBubbleSet;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI

+ (id)sharedAnimator;

- (void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesComingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesGoingOffscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesStayingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1;
- (void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1;
- (void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1;
- (void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_pathTransitionInfoFromPathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)_prepareTransitionWithInfo:(id)arg1;
- (void)_resetContentInBubbles:(id)arg1 viewController:(id)arg2 adoptionFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; })arg3;
- (void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (id)_savvyViewControllerForViewController:(id)arg1 fromViewController:(id)arg2;
- (void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1;
- (void)_syncBubbleVisibilityWithInfo:(id)arg1;
- (id)_transitionInfoForBubbleFlowInvalidationOfViewController:(id)arg1;
- (id)_transitionInfoForBubbleFlowSimpleUpdateOfViewController:(id)arg1;
- (void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)invalidateBubblePositionsForViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)mostRecentOverlayBubbleSet;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })restingWorldPositionForBubble:(id)arg1 viewController:(id)arg2 forTransitionWithInfo:(id)arg3 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)setMostRecentOverlayBubbleSet:(id)arg1;
- (long long)syncOverlayViewBubbles:(id)arg1 withViewController:(id)arg2;
- (id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2;

// Image: /System/Library/AccessibilityBundles/GameCenterPrivateUIFramework.axbundle/GameCenterPrivateUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_finishTransitionWithInfo:(id)arg1;

@end
