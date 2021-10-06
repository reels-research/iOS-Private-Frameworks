/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUHeadlineAdContextProvider : NSObject <NUAdContextProvider> {
    <FCHeadlineProviding> * _headline;
    FCIssue * _issue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) FCIssue *issue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)headline;
- (id)initWithHeadline:(id)arg1 issue:(id)arg2;
- (id)issue;

@end
