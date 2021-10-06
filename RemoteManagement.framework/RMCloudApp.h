/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCloudApp : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic, copy) NSURL *artworkURL60;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) RMCloudCategory *category;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, copy) NSDate *currentVersionReleaseDate;
@property (nonatomic, retain) NSSet *installedOnDevices;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nameLanguageCode;
@property (nonatomic, copy) NSUUID *sortKey;

+ (id)createOrReturnAppWithBundleIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchRequest;
+ (bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)setBundleIdentifier:(id)arg1;

@end
