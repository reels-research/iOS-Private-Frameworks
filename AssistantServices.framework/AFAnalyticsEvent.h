/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {
    NSData * _contextData;
    long long  _contextDataType;
    unsigned long long  _deliveryStream;
    unsigned long long  _timestamp;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSData *contextData;
@property (nonatomic, readonly) long long contextDataType;
@property (nonatomic, readonly) unsigned long long deliveryStream;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextData;
- (id)contextDataAsDictionary;
- (id)contextDataAsProtobuf;
- (long long)contextDataType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deliveryStream;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)legacyTypeName;
- (unsigned long long)timestamp;
- (long long)type;
- (id)typeName;

@end
