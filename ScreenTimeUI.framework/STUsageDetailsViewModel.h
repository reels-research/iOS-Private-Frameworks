/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageDetailsViewModel : NSObject {
    bool  _hasAggregateUsageData;
    NSDate * _lastUpdatedDate;
    bool  _localDevice;
    NSArray * _rawUsageItems;
    NSString * _selectedItemDisplayName;
    unsigned long long  _selectedTimePeriod;
    STUsageReport * _todayUsageReport;
    STUsageReport * _weekUsageReport;
}

@property bool hasAggregateUsageData;
@property (nonatomic, readonly) bool hasUsageData;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (getter=isLocalDevice) bool localDevice;
@property (nonatomic, readonly, copy) NSArray *rawUsageItems;
@property (nonatomic, copy) NSString *selectedItemDisplayName;
@property unsigned long long selectedTimePeriod;
@property (nonatomic, readonly) STUsageReport *selectedUsageReport;
@property (nonatomic, retain) STUsageReport *todayUsageReport;
@property (nonatomic, retain) STUsageReport *weekUsageReport;

+ (id)keyPathsForValuesAffectingHasUsageData;
+ (id)keyPathsForValuesAffectingSelectedUsageReport;

- (void).cxx_destruct;
- (void)_setRawUsageItems:(id)arg1 lastUpdatedDate:(id)arg2 firstPickupOnReferenceDate:(id)arg3 referenceDate:(id)arg4;
- (bool)hasAggregateUsageData;
- (bool)hasUsageData;
- (id)init;
- (bool)isLocalDevice;
- (id)lastUpdatedDate;
- (id)rawUsageItems;
- (id)selectedItemDisplayName;
- (unsigned long long)selectedTimePeriod;
- (id)selectedUsageReport;
- (void)setHasAggregateUsageData:(bool)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setLocalDevice:(bool)arg1;
- (void)setRawUsageItems:(id)arg1 lastUpdatedDate:(id)arg2;
- (void)setSelectedItemDisplayName:(id)arg1;
- (void)setSelectedTimePeriod:(unsigned long long)arg1;
- (void)setTodayUsageReport:(id)arg1;
- (void)setWeekUsageReport:(id)arg1;
- (id)todayUsageReport;
- (id)weekUsageReport;

@end
