/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate> {
    bool  _attemptedTimeout;
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    PKPaymentAuthorizationFooterView * _authorizationView;
    _UIBackdropView * _backdropView;
    PKContinuityPaymentCardSummaryView * _cardView;
    NSArray * _compactConstraints;
    UIView * _compactRegion;
    NSArray * _defaultConstraints;
    <PKPaymentAuthorizationHostProtocol> * _delegate;
    UIView * _dimmingBackgroundView;
    PKContinuityPaymentFaviconView * _faviconImage;
    long long  _internalCoachingState;
    UIViewController * _passcodeViewController;
    UIViewController * _passphraseViewController;
    LAUIPhysicalButtonView * _physicalButtonView;
    UILabel * _priceLabel;
    UIView * _priceView;
    PKRemotePaymentRequest * _remoteRequest;
    UILabel * _requestingDeviceLabel;
    UILabel * _requestingSiteLabel;
    PKPaymentAuthorizationStateMachine * _stateMachine;
    UIStackView * _summaryContainerView;
    NSTimer * _timeoutTimer;
    bool  _userIntentRequired;
    bool  _viewAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKRemotePaymentRequest *remoteRequest;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (long long)_authenticatorPolicy;
- (void)_cancelPassphrasePressed;
- (void)_didCancel;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (id)_evaluationRequest;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (void)_resetAndScheduleTimeout;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_setAuthenticating:(bool)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setUserIntentRequired:(bool)arg1;
- (void)_startEvaluation;
- (void)_suspendAuthentication;
- (void)_timeoutFired;
- (void)_updateCardView;
- (void)_updateCoachingInstruction;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_updateUserIntentRequired;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (id)init;
- (id)initWithRemotePaymentRequest:(id)arg1;
- (void)invalidate;
- (bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (bool)paymentPass:(id*)arg1 paymentApplication:(id*)arg2 fromAID:(id)arg3;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (id)remoteRequest;
- (void)setDelegate:(id)arg1;
- (void)setProgressState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (void)setProgressState:(long long)arg1 string:(id)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)updatePaymentWithClientUpdate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;

@end
