/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPhysicalCardAction : NSObject <NSSecureCoding> {
    unsigned long long  _actionType;
    NSString * _activationCode;
    NSString * _artworkIdentifier;
    unsigned long long  _reason;
    CNPostalAddress * _shippingAddress;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, copy) NSString *activationCode;
@property (nonatomic, copy) NSString *artworkIdentifier;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, copy) CNPostalAddress *shippingAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_shippingAddressJSONRepresentation;
- (unsigned long long)actionType;
- (id)activationCode;
- (id)artworkIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActionType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPhysicalCardAction:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)reason;
- (void)setActivationCode:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setShippingAddress:(id)arg1;
- (id)shippingAddress;

@end