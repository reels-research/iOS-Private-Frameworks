/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalSuggestionsProvider : NSObject {
    NSObject<SGSuggestionsServiceEventsProtocol> * _service;
    bool  _suggestionsFrameworkAvailable;
}

@property (nonatomic, retain) NSObject<SGSuggestionsServiceEventsProtocol> *service;
@property (nonatomic) bool suggestionsFrameworkAvailable;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (void)_loadSuggestionsFramework;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (bool)eventsFoundInMailEnabled;
- (id)fakeSGRecordID;
- (id)init;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void)setSuggestionsFrameworkAvailable:(bool)arg1;
- (id)sgEventFromUniqueID:(id)arg1 error:(id*)arg2;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id*)arg2;
- (bool)suggestionsFrameworkAvailable;

@end
