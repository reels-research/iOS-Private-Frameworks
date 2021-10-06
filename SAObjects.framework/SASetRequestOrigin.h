/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSNumber *age;
@property (nonatomic) double altitude;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *desiredAccuracy;
@property (nonatomic) double direction;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic) double speed;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic) double verticalAccuracy;

+ (id)setRequestOrigin;
+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)age;
- (double)altitude;
- (id)desiredAccuracy;
- (double)direction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (double)horizontalAccuracy;
- (double)latitude;
- (double)longitude;
- (bool)requiresResponse;
- (void)setAge:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setDesiredAccuracy:(id)arg1;
- (void)setDirection:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStatus:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (id)status;
- (double)verticalAccuracy;

@end
