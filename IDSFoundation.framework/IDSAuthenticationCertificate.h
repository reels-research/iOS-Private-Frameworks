/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSAuthenticationCertificate : NSObject {
    IDSServerCertificate * _backingCertificate;
}

@property (nonatomic, readonly) IDSServerCertificate *backingCertificate;
@property (nonatomic, readonly) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)backingCertificate;
- (id)dataRepresentation;
- (id)description;
- (id)initWithBackingCertificate:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;

@end
