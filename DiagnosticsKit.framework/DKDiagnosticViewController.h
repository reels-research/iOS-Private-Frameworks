/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticViewController : UIViewController <CAAnimationDelegate, CXCallObserverDelegate, DKDiagnostic, DKDiagnostic_Internal, NSExtensionRequestHandling> {
    CXCallObserver * _callObserver;
    bool  _cancelled;
    DKDiagnosticContext * _context;
    bool  _finished;
    NSLock * _finishedLock;
    CAGradientLayer * _gradientLayer;
    _UILegibilityLabel * _pressHomeLabel;
    DKMutableDiagnosticResult * _result;
    bool  _setup;
    bool  _shouldShowPressHomeLabel;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, retain) DKDiagnosticContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, retain) NSLock *finishedLock;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilityLabel *pressHomeLabel;
@property (nonatomic, retain) DKMutableDiagnosticResult *result;
@property (getter=isSetup, nonatomic) bool setup;
@property (nonatomic) bool shouldShowPressHomeLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)cancel;
- (id)context;
- (void)createGradientLayer;
- (void)displayPressHomeLabel;
- (id)finishedLock;
- (id)gradientLayer;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isSetup;
- (void)monitorIncomingCall;
- (id)pressHomeLabel;
- (void)resetGradientAndLabelBefore:(bool)arg1;
- (id)result;
- (void)setCallObserver:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFinishedLock:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setPressHomeLabel:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSetup:(bool)arg1;
- (void)setShouldShowPressHomeLabel:(bool)arg1;
- (bool)shouldShowPressHomeLabel;
- (void)start;
- (void)viewDidLoad;

@end
