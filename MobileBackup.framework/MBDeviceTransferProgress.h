/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDeviceTransferProgress : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _bytesTransferred;
    NSDate * _fileTransferStartDate;
    unsigned long long  _filesTransferred;
    long long  _minutesRemaining;
    NSString * _phaseDescription;
    double  _progress;
    NSDate * _restoreStartDate;
}

@property (nonatomic) unsigned long long bytesTransferred;
@property (nonatomic, retain) NSDate *fileTransferStartDate;
@property (nonatomic) unsigned long long filesTransferred;
@property (nonatomic) long long minutesRemaining;
@property (nonatomic, retain) NSString *phaseDescription;
@property (nonatomic) double progress;
@property (nonatomic, retain) NSDate *restoreStartDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bytesTransferred;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileTransferStartDate;
- (unsigned long long)filesTransferred;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)minutesRemaining;
- (id)phaseDescription;
- (double)progress;
- (id)restoreStartDate;
- (void)setBytesTransferred:(unsigned long long)arg1;
- (void)setFileTransferStartDate:(id)arg1;
- (void)setFilesTransferred:(unsigned long long)arg1;
- (void)setMinutesRemaining:(long long)arg1;
- (void)setPhaseDescription:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRestoreStartDate:(id)arg1;

@end
