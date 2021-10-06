/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASendInstrumentation : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *eventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic, copy) NSString *eventTransmittedTimestampRefId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *instrumentationBatch;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)sendInstrumentation;
+ (id)sendInstrumentationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)eventTransmittedRelativeToBootTimeTimestampNs;
- (id)eventTransmittedTimestampRefId;
- (id)groupIdentifier;
- (id)instrumentationBatch;
- (bool)requiresResponse;
- (void)setEventTransmittedRelativeToBootTimeTimestampNs:(id)arg1;
- (void)setEventTransmittedTimestampRefId:(id)arg1;
- (void)setInstrumentationBatch:(id)arg1;

@end
