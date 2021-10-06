/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPhysicalCard : NSObject <NSCopying, NSSecureCoding> {
    NSString * _FPANSuffix;
    PKImage * _frontFaceImage;
    NSURL * _frontFaceImageURL;
    NSString * _identifier;
    NSDate * _lastUpdated;
    NSString * _nameOnCard;
    NSSet * _orderActivity;
    NSSet * _shippingActivity;
    NSString * _shippingCompany;
    unsigned long long  _state;
    NSString * _trackingNumber;
}

@property (nonatomic, copy) NSString *FPANSuffix;
@property (nonatomic, retain) PKImage *frontFaceImage;
@property (nonatomic, copy) NSURL *frontFaceImageURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic, copy) NSString *nameOnCard;
@property (nonatomic, copy) NSSet *orderActivity;
@property (nonatomic, copy) NSSet *shippingActivity;
@property (nonatomic, copy) NSString *shippingCompany;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) NSString *trackingNumber;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FPANSuffix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frontFaceImage;
- (id)frontFaceImageURL;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)lastUpdated;
- (id)latestOrderActivity;
- (id)latestShippingActivity;
- (id)nameOnCard;
- (id)orderActivity;
- (void)setFPANSuffix:(id)arg1;
- (void)setFrontFaceImage:(id)arg1;
- (void)setFrontFaceImageURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setNameOnCard:(id)arg1;
- (void)setOrderActivity:(id)arg1;
- (void)setShippingActivity:(id)arg1;
- (void)setShippingCompany:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTrackingNumber:(id)arg1;
- (id)shipmentTrackingURL;
- (id)shippingActivity;
- (id)shippingCompany;
- (unsigned long long)state;
- (id)trackingNumber;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)_downloadImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)artworkImage:(id /* block */)arg1;

@end
