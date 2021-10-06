/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {
    UIViewController<PKPaymentAuthorizationServiceProtocol> * _authorizationViewController;
    PKPaymentAuthorizationLayout * _layout;
    <UIViewControllerTransitioningDelegate> * _paymentTransitioningDelegate;
}

@property (nonatomic, readonly) UIViewController<PKPaymentAuthorizationServiceProtocol> *authorizationViewController;
@property (nonatomic, retain) <UIViewControllerTransitioningDelegate> *paymentTransitioningDelegate;

- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (id)authorizationViewController;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)paymentTransitioningDelegate;
- (void)setPaymentTransitioningDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end