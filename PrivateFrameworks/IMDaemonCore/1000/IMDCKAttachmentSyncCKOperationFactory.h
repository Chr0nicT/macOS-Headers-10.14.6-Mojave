//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
{
}

+ (id)_desiredKeysArrayForType:(long long)arg1;
- (id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4;
- (id)_operationGroupWithName:(id)arg1;
- (BOOL)_defaultsSayWeHaveSyncedOnce;
- (id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1;
- (id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3;
- (id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5;

@end

