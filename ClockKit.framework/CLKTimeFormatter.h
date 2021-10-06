/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKTimeFormatter : NSObject {
    _CLKTimeFormatterSubstringRange * _blinkerRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange * _blinkerRangeInTimeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange * _blinkerRangeInTimeSubstringToSeparatorText;
    _CLKTimeFormatterSubstringRange * _blinkerRangeInTimeText;
    NSDate * _date;
    <CLKTimeFormatterDelegate> * _delegate;
    _CLKTimeFormatterSubstringRange * _designatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange * _designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
    NSString * _designatorText;
    bool  _forcesLatinNumbers;
    _CLKTimeFormatterSubstringRange * _lastBlinkerRangeInTimeText;
    struct NSNumber { Class x1; } * _minutesUpdateToken;
    NSHashTable * _observers;
    NSDate * _overrideDate;
    _CLKTimeFormatterSubstringRange * _rangeInTimeSubstringFromSecondsSeparatorText;
    NSMutableSet * _reasonsToPause;
    struct NSNumber { Class x1; } * _secondsUpdateToken;
    _CLKTimeFormatterSubstringRange * _separatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange * _separatorRangeInTimeText;
    bool  _showSeconds;
    bool  _suppressesDesignatorWhitespace;
    NSString * _timeAndDesignatorText;
    NSString * _timeAndDesignatorTextWithoutMinutesIfZero;
    double  _timeOffset;
    _CLKTimeFormatterSubstringRange * _timeRange;
    NSString * _timeSubstringFromSeparatorText;
    NSString * _timeSubstringToSeparatorText;
    NSString * _timeText;
    NSTimeZone * _timeZone;
    bool  _useNarrowDesignatorTextForGerman;
}

@property (getter=_useNarrowDesignatorTextForGerman, setter=_setUseNarrowDesignatorTextForGerman:, nonatomic) bool _useNarrowDesignatorTextForGerman;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } blinkerRangeInTimeAndDesignatorText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } blinkerRangeInTimeSubstringFromSeparatorText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } blinkerRangeInTimeSubstringToSeparatorText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } blinkerRangeInTimeText;
@property (nonatomic) <CLKTimeFormatterDelegate> *delegate;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } designatorRangeInTimeAndDesignatorText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
@property (nonatomic, readonly) NSString *designatorText;
@property (nonatomic, readonly) bool forcesLatinNumbers;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastBlinkerRangeInTimeText;
@property (nonatomic, retain) NSDate *overrideDate;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInTimeSubstringFromSecondsSeparatorText;
@property (nonatomic, readonly) bool reportingLiveTime;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } separatorRangeInTimeAndDesignatorText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } separatorRangeInTimeText;
@property (nonatomic) bool showSeconds;
@property (nonatomic) bool suppressesDesignatorWhitespace;
@property (nonatomic, readonly) NSString *timeAndDesignatorText;
@property (nonatomic, readonly) bool timeAndDesignatorTextHasDesignator;
@property (nonatomic, readonly) bool timeAndDesignatorTextStartsWithDesignator;
@property (nonatomic, readonly) NSString *timeAndDesignatorTextWithoutMinutesIfZero;
@property (nonatomic) double timeOffset;
@property (nonatomic, readonly) NSString *timeSubstringFromSeparatorText;
@property (nonatomic, readonly) NSString *timeSubstringToSeparatorText;
@property (nonatomic, readonly) NSString *timeText;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_blinkerRangeInTimeAndDesignatorText;
- (id)_blinkerRangeInTimeSubstringFromSeparatorText;
- (id)_blinkerRangeInTimeSubstringToSeparatorText;
- (id)_blinkerRangeInTimeText;
- (id)_designatorRangeInText:(id)arg1;
- (id)_designatorRangeInTimeAndDesignatorText;
- (id)_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
- (void)_handleSignificantTimeChange;
- (void)_invalidateDate:(id)arg1;
- (void)_invalidateText;
- (id)_lastBlinkerRangeInTimeText;
- (void)_notifyReportingLiveTimeDidChange;
- (void)_notifyTextDidChange;
- (id)_rangeInTimeSubstringFromSecondsSeparatorText;
- (id)_separatorRangeInTimeAndDesignatorText;
- (id)_separatorRangeInTimeText;
- (void)_setUseNarrowDesignatorTextForGerman:(bool)arg1;
- (void)_startOrStopUpdatesIfNecessary;
- (void)_stopMinuteUpdates:(bool)arg1;
- (void)_stopSecondsUpdates:(bool)arg1;
- (id)_timeAndDesignatorFormatter;
- (bool)_useNarrowDesignatorTextForGerman;
- (void)addObserver:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })blinkerRangeInTimeAndDesignatorText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })blinkerRangeInTimeSubstringFromSeparatorText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })blinkerRangeInTimeSubstringToSeparatorText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })blinkerRangeInTimeText;
- (void)dealloc;
- (id)delegate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })designatorRangeInTimeAndDesignatorText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
- (id)designatorText;
- (bool)forcesLatinNumbers;
- (id)init;
- (id)initWithForcesLatinNumbers:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastBlinkerRangeInTimeText;
- (id)overrideDate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInTimeSubstringFromSecondsSeparatorText;
- (void)removeObserver:(id)arg1;
- (bool)reportingLiveTime;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })separatorRangeInTimeAndDesignatorText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })separatorRangeInTimeText;
- (void)setDelegate:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setPaused:(bool)arg1 forReason:(id)arg2;
- (void)setShowSeconds:(bool)arg1;
- (void)setSuppressesDesignatorWhitespace:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)showSeconds;
- (bool)suppressesDesignatorWhitespace;
- (id)timeAndDesignatorText;
- (bool)timeAndDesignatorTextHasDesignator;
- (bool)timeAndDesignatorTextStartsWithDesignator;
- (id)timeAndDesignatorTextWithoutMinutesIfZero;
- (double)timeOffset;
- (id)timeSubstringFromSeparatorText;
- (id)timeSubstringToSeparatorText;
- (id)timeText;
- (id)timeZone;

@end
