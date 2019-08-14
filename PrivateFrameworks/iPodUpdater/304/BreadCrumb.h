//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Pod;

__attribute__((visibility("hidden")))
@interface BreadCrumb : NSObject
{
    CDStruct_2755fe45 _infoRec;
    Pod *_pod;
    long long _offset;
}

- (int)readWithVersion:(unsigned short)arg1;
- (int)write;
- (long long)compareStartingTime:(id)arg1;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (id)applicationName;
- (void)setApplicationName;
- (struct NumVersion)updaterVersion;
- (void)setUpdaterVersion;
- (id)newBuildVersion;
- (void)setNewBuildVersion:(id)arg1;
- (struct NumVersion)updatingFirmwareVersion;
- (void)setUpdatingFirmwareVersion:(struct NumVersion)arg1;
- (id)previousBuildVersion;
- (void)setPreviousBuildVersion:(id)arg1;
- (struct NumVersion)previousFirmwareVersion;
- (void)setPreviousFirmwareVersion:(struct NumVersion)arg1;
- (BOOL)powered;
- (void)setPowered:(BOOL)arg1;
- (int)architecture;
- (void)setArchitecture;
- (id)osVersionString;
- (void)setOSVersionString;
- (struct NumVersion)osVersion;
- (void)setOSVersion;
- (id)finishTime;
- (void)setFinishTimeToNow;
- (id)startTime;
- (void)setStartTimeToNow;
- (int)updaterHost;
- (void)setUpdaterHost:(int)arg1;
- (int)connectionType;
- (void)setConnectionType:(int)arg1;
- (int)host;
- (void)setHost:(int)arg1;
- (int)recoveryType;
- (void)setRecoveryType:(int)arg1;
- (int)restoreType;
- (void)setRestoreType:(int)arg1;
- (BOOL)appearsValid;
- (CDStruct_2755fe45 *)infoRecord;
- (id)description;
- (void)dealloc;
- (id)initWithPod:(id)arg1 atOffset:(long long)arg2 version:(unsigned short)arg3;
- (id)initNewCrumbWithPod:(id)arg1 atOffset:(long long)arg2;

@end
