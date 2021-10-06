/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAMPEnrollmentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationStateMachineDelegate> {
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    PKAMPEnrollmentCardView * _cardView;
    <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> * _delegate;
    bool  _hostApplicationEnteredBackground;
    bool  _hostApplicationResignedActive;
    bool  _needsFinalCallback;
    PKPaymentRequest * _request;
    PKPaymentAuthorizationStateMachine * _stateMachine;
    bool  _treatingHostAsBackgrounded;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentAuthorizationStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_authenticatorPolicy;
- (void)_didCancel;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (id)_evaluationRequest;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (id)_physicalButtonTitle;
- (void)_processClientCallback:(id)arg1;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_setAuthenticating:(bool)arg1;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)_startEvaluation;
- (void)_suspendAuthentication;
- (void)_suspendAuthenticationAndForceReset:(bool)arg1;
- (void)_updateBackgroundedState:(bool)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (id)init;
- (void)loadView;
- (bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (long long)preferredStatusBarStyle;
- (void)setDelegate:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateMachine;
- (void)viewDidLoad;

@end