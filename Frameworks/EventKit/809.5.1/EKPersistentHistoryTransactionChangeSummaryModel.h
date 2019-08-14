//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKObjectPersistentChangesModel, NSArray, NSMutableArray;

@interface EKPersistentHistoryTransactionChangeSummaryModel : NSObject
{
    EKObjectPersistentChangesModel *_calendarItems;
    EKObjectPersistentChangesModel *_calendars;
    EKObjectPersistentChangesModel *_accounts;
    EKObjectPersistentChangesModel *_notifications;
    NSArray *_otherModifiedObjects;
    NSMutableArray *_updatedProperties;
}

@property(retain, nonatomic) NSMutableArray *updatedProperties; // @synthesize updatedProperties=_updatedProperties;
@property(readonly, nonatomic) NSArray *otherModifiedObjects; // @synthesize otherModifiedObjects=_otherModifiedObjects;
@property(readonly, nonatomic) EKObjectPersistentChangesModel *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) EKObjectPersistentChangesModel *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) EKObjectPersistentChangesModel *calendars; // @synthesize calendars=_calendars;
@property(readonly, nonatomic) EKObjectPersistentChangesModel *calendarItems; // @synthesize calendarItems=_calendarItems;
- (void).cxx_destruct;
- (void)addRelevantObjectIDs:(id)arg1 withModificationType:(unsigned long long)arg2;
- (void)addPropertyWithName:(id)arg1 onEntity:(id)arg2;
- (BOOL)_entityIsPrincipalOrCalendar:(id)arg1;
- (void)addRelevantObjectID:(id)arg1 withModificationType:(unsigned long long)arg2;
- (id)_getNSSetForTypeOfModification:(unsigned long long)arg1 withObjectChangeModel:(id)arg2;
- (id)_getChangeModelForObjectID:(id)arg1;
- (id)init;

@end
