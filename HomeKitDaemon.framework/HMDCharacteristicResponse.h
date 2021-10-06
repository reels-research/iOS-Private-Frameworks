/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicResponse : HMFObject {
    NSError * _error;
    HMDCharacteristicRequest * _request;
    NSNumber * _stateNumber;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMDCharacteristicRequest *request;
@property (nonatomic, readonly) NSNumber *stateNumber;
@property (nonatomic, retain) id value;
@property (nonatomic, readonly) NSDate *valueUpdatedTime;

+ (id)responseWithRequest:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (id)request;
- (void)setValue:(id)arg1;
- (void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3;
- (id)stateNumber;
- (id)value;
- (id)valueUpdatedTime;

@end
