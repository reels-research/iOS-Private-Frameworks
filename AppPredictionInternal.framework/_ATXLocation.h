/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXLocation : NSObject <NSSecureCoding> {
    NSUUID * _uuid;
    NSArray * _visits;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSArray *visits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 visits:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (id)uuid;
- (id)visits;

@end
