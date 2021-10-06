/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountPassActivationResultViewController : PKExplanationViewController <PKAccountFlowControllerDelegate> {
    PKAccountFlowController * _accountController;
    UINotificationFeedbackGenerator * _cardAddedFeedbackGenerator;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    bool  _didMakeAccountPassDefault;
    unsigned long long  _featureIdentifier;
    CLLocationManager * _locationManager;
    UIViewController * _nextViewController;
    long long  _setupContext;
    bool  _showingLoadingIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didMakeAccountPassDefault;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showingLoadingIndicator;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (void)_handleNextStep;
- (id)_localizedStringKeyForPerformedOperations;
- (void)_presentDisplayableError:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_promptForPhysicalCardLocationAuthorization;
- (bool)_shouldPromptForPhysicalCardLocationAccess;
- (void)_showActivationSpinner:(bool)arg1;
- (void)_terminateSetupFlow;
- (void)_updateForLoading;
- (void)_updateForMadeDefault;
- (void)_updateUI;
- (bool)_willPerformProvisioningActions;
- (void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2;
- (void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2;
- (void)dealloc;
- (bool)didMakeAccountPassDefault;
- (id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (void)loadView;
- (void)setDidMakeAccountPassDefault:(bool)arg1;
- (void)setShowingLoadingIndicator:(bool)arg1;
- (bool)showingLoadingIndicator;
- (void)viewDidLoad;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (id)_setupLaterBodyString;
- (void)_updateForSetupLater;

@end
