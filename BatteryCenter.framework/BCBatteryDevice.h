/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
 */

@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _accessoryCategory;
    NSString * _accessoryIdentifier;
    bool  _approximatesPercentCharge;
    bool  _batterySaverModeActive;
    bool  _charging;
    bool  _connected;
    bool  _fake;
    UIImage * _glyph;
    NSString * _groupName;
    NSString * _identifier;
    bool  _internal;
    bool  _lowBattery;
    NSString * _matchIdentifier;
    NSString * _name;
    unsigned long long  _parts;
    long long  _percentCharge;
    bool  _powerSource;
    long long  _powerSourceState;
    long long  _productIdentifier;
    long long  _transportType;
    long long  _vendor;
    bool  _wirelesslyCharging;
}

@property (nonatomic) unsigned long long accessoryCategory;
@property (nonatomic, copy) NSString *accessoryIdentifier;
@property (nonatomic) bool approximatesPercentCharge;
@property (getter=isBatterySaverModeActive, nonatomic) bool batterySaverModeActive;
@property (getter=isCharging, nonatomic) bool charging;
@property (getter=isConnected, nonatomic) bool connected;
@property (getter=isFake, nonatomic) bool fake;
@property (nonatomic, readonly) UIImage *glyph;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInternal, nonatomic) bool internal;
@property (getter=isLowBattery, nonatomic) bool lowBattery;
@property (nonatomic, readonly, copy) NSString *matchIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long parts;
@property (nonatomic) long long percentCharge;
@property (getter=isPowerSource, nonatomic) bool powerSource;
@property (nonatomic) long long powerSourceState;
@property (nonatomic, readonly) long long productIdentifier;
@property (nonatomic) long long transportType;
@property (nonatomic, readonly) long long vendor;
@property (getter=isWirelesslyCharging, nonatomic) bool wirelesslyCharging;

+ (id)batteryDeviceWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lazyGlyph;
- (unsigned long long)accessoryCategory;
- (id)accessoryIdentifier;
- (bool)approximatesPercentCharge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glyph;
- (id)groupName;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5;
- (bool)isBatterySaverModeActive;
- (bool)isCharging;
- (bool)isConnected;
- (bool)isFake;
- (bool)isInternal;
- (bool)isLowBattery;
- (bool)isPowerSource;
- (bool)isWirelesslyCharging;
- (id)matchIdentifier;
- (id)name;
- (unsigned long long)parts;
- (long long)percentCharge;
- (long long)powerSourceState;
- (long long)productIdentifier;
- (void)setAccessoryCategory:(unsigned long long)arg1;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setApproximatesPercentCharge:(bool)arg1;
- (void)setBatterySaverModeActive:(bool)arg1;
- (void)setCharging:(bool)arg1;
- (void)setConnected:(bool)arg1;
- (void)setFake:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternal:(bool)arg1;
- (void)setLowBattery:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParts:(unsigned long long)arg1;
- (void)setPercentCharge:(long long)arg1;
- (void)setPowerSource:(bool)arg1;
- (void)setPowerSourceState:(long long)arg1;
- (void)setTransportType:(long long)arg1;
- (void)setWirelesslyCharging:(bool)arg1;
- (long long)transportType;
- (long long)vendor;

@end