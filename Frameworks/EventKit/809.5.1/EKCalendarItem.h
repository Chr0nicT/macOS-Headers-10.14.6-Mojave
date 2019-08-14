//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/MutableOccurrenceModelProtocol-Protocol.h>

@class EKCalendar, EKRecurrenceIdentifier, NSArray, NSData, NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSString, NSTimeZone, NSURL;
@protocol CalendarModelProtocol, EKProtocolParticipant, EKProtocolStructuredLocation;

@interface EKCalendarItem : EKObject <MutableOccurrenceModelProtocol>
{
    BOOL cachedHasAttachment;
    BOOL cachedHasAttendee;
    BOOL cachedHasAlarm;
    BOOL cachedIsCalendarOwnerInvitedAttendee;
    BOOL cachedIsCurrentUserInvitedAttendee;
    NSNumber *calendarItemPermissionNumber;
    NSDate *creationDate;
    NSDate *recurrenceDateUnadjustedFromUTC;
    NSString *_localUID;
    NSString *_sharedUID;
    NSString *_itemID;
    EKRecurrenceIdentifier *_recurrenceIdentifier;
}

+ (id)_scheduleAgentStringFromScheduleAgent:(long long)arg1;
+ (long long)_scheduleAgentFromScheduleAgentString:(id)arg1;
+ (id)existingItemFromTruthFile:(id)arg1 inStore:(id)arg2;
+ (id)itemWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)exportToICS:(id)arg1;
+ (id)adjustDateIntoUTC:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3;
+ (id)adjustDateFromUTC:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3;
+ (BOOL)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;
+ (id)calculateDateFromDateComponents:(id)arg1 usingTimeZone:(id)arg2;
+ (id)calculateDateComponentsFromDate:(id)arg1 usingTimeZone:(id)arg2 isAllDay:(BOOL)arg3;
+ (BOOL)isAllDayDateComponents:(id)arg1;
+ (BOOL)isValidDateComponents:(id)arg1;
+ (id)keysToCheckForChangedKeysMethod;
+ (id)knownSingleValueKeys;
+ (id)knownDerivedRelationshipKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)multiValueDiffKeys;
+ (id)singleValueDiffKeys;
+ (id)knownImmutableKeys;
+ (id)knownIdentityKeys;
+ (id)knownPerUserPropertyKeys;
+ (id)knownRequireRSVPKeys;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (unsigned long long)hashForObject:(id)arg1;
+ (Class)frozenClass;
+ (id)itemWithOccurrence:(id)arg1 eventStore:(id)arg2 preFrozenRelationshipObjects:(id)arg3;
+ (id)itemWithOccurrence:(id)arg1 eventStore:(id)arg2;
+ (id)itemWithOccurrence:(id)arg1 createPartialBackingObject:(BOOL)arg2 eventStore:(id)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
+ (id)itemWithOccurrence:(id)arg1 createPartialBackingObject:(BOOL)arg2 eventStore:(id)arg3 preFrozenRelationshipObjects:(id)arg4;
+ (id)itemWithOccurrence:(id)arg1 createPartialBackingObject:(BOOL)arg2 eventStore:(id)arg3;
+ (Class)_classForOccurrence:(id)arg1;
@property(retain, nonatomic) EKRecurrenceIdentifier *recurrenceIdentifier; // @synthesize recurrenceIdentifier=_recurrenceIdentifier;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *sharedUID; // @synthesize sharedUID=_sharedUID;
@property(retain, nonatomic) NSString *localUID; // @synthesize localUID=_localUID;
- (void)setRecurrenceDateUnadjustedFromUTC:(id)arg1;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee; // @synthesize cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee; // @synthesize cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedHasAlarm; // @synthesize cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttendee; // @synthesize cachedHasAttendee;
@property(readonly, nonatomic) BOOL cachedHasAttachment; // @synthesize cachedHasAttachment;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber; // @synthesize calendarItemPermissionNumber;
- (void).cxx_destruct;
- (BOOL)_validateDeletable:(id *)arg1;
- (BOOL)_validateDeletableInCalendarWithError:(id *)arg1;
- (BOOL)_validateDeletableBySharedCalendarShareeWithError:(id *)arg1;
- (BOOL)_isInSharedToMeCalendarWithNoSharingScheduling;
- (BOOL)_validateSchedulingAllowed:(id *)arg1;
- (BOOL)_validatePriority:(id *)arg1;
- (BOOL)_validateMoveToCalendar:(id *)arg1;
- (BOOL)_validateHasCalendar:(id *)arg1;
- (BOOL)_validateDefaultOrganizerExists:(id *)arg1;
- (BOOL)_validateEntityTypeIsSupported:(id *)arg1;
- (BOOL)_validateEditable:(id *)arg1;
- (BOOL)_needsAttendeePartStatReset;
- (BOOL)_safeToUnschedule;
- (BOOL)_validateAttendees:(id *)arg1;
- (BOOL)_validateAttachments:(id *)arg1;
- (id)_previousStartDateUnadjustedFromUTC;
- (id)_previousCalendar;
- (BOOL)_hasCalendarChange;
- (void)_handleDuplicateAttachments;
- (BOOL)_validateRecurrence:(id *)arg1;
- (BOOL)_validateAlarms:(id *)arg1;
- (BOOL)_validateAccessConsent:(id *)arg1;
- (BOOL)_suggestedStartDateHelperRecurrenceRuleRequiresExpansion:(id)arg1 forDate:(id)arg2;
- (void)_removeAllAlarms;
- (BOOL)revert;
- (void)refetch;
- (id)_updatedBackingItem;
- (BOOL)_refreshable;
- (BOOL)_reset;
- (BOOL)validate:(id *)arg1;
- (id)recurrenceSet;
- (id)roomAttendeeForLocationString:(id)arg1;
- (id)roomAttendees;
- (id)_pathToTruthFile;
- (id)_nsCalendar;
- (void)_clearRecurrenceDate;
- (void)_changeRecurrenceDate:(id)arg1;
- (void)_updateDatesForRecurrenceDate:(id)arg1;
- (void)_updateIdentifiersFromItem:(id)arg1;
- (void)_updateRecurrenceRuleTiedToStartDayUnadjustedFromUTC:(id)arg1 toNewStartDayUnadjustedFromUTC:(id)arg2;
- (id)adjustDateIntoUTC:(id)arg1;
- (id)adjustRangeIntoUTC:(id)arg1;
- (id)adjustDateFromUTC:(id)arg1;
- (void)setSingleRecurrenceRule:(id)arg1;
- (id)singleRecurrenceRule;
- (id)recurrenceRule;
- (BOOL)hasComplexRecurrence;
- (BOOL)hasEquivalentRecurrenceRuleToItem:(id)arg1;
- (void)setRecurrenceRuleString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
- (id)ruleStringForRecurrenceRule:(id)arg1;
@property(copy, nonatomic) NSArray *recurrenceRules;
- (void)_resetMeltedCache;
- (id)singleChangedValueForKey:(id)arg1;
@property(readonly, nonatomic) BOOL hasRecurrenceRules;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)suggestedStartDateForCurrentRecurrenceRule;
- (BOOL)futureOccurrencesCannotBeAffectedByChangingStartDateToDate:(id)arg1;
- (void)setAction:(id)arg1;
- (id)action;
- (void)_updateRecurrenceIdentifier;
- (void)changeIdentifiersFromOriginal:(id)arg1;
- (id)_chosenLocalUIDForDuplicate;
- (id)_duplicateWithChangedKeys:(id)arg1;
- (id)_keysToChangeForDuplicateWithOptions:(long long)arg1;
- (id)duplicate;
- (void)setStartDateUnadjustedFromUTC:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
- (void)setStartDate:(id)arg1;
- (id)startDate;
@property(readonly, nonatomic) BOOL hasNotes;
@property(readonly, nonatomic) BOOL hasAlarms;
@property(readonly, nonatomic) BOOL hasAttendees;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)allDay;
- (BOOL)isAllDay;
@property(copy, nonatomic) NSTimeZone *timeZone;
- (void)setTimeZoneObject:(id)arg1;
- (id)datePreservingDateComponentsForDate:(id)arg1 inCurrentTimeZone:(id)arg2 movingToTimeZone:(id)arg3;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;
- (void)setLastModifiedDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (void)clearCachedTimeValues;
- (void)setOrganizer:(id)arg1;
@property(readonly, retain, nonatomic) id <EKProtocolParticipant> organizer;
- (void)setOrganizerPhoneNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerPhoneNumber;
- (void)setOrganizerEncodedLikenessData:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
- (void)setOrganizerEmail:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
- (void)setOrganizerURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
- (void)setOrganizerName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *organizerName;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)removeAllAttachments;
- (void)addAttachment:(id)arg1;
- (BOOL)hasAttachment;
- (void)setAttachmentSet:(id)arg1;
- (id)attachmentSet;
- (void)setAttachments:(id)arg1;
- (id)attachments;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)setAlarmSet:(id)arg1;
- (id)nonNoneAlarms;
- (id)alarmSet;
@property(copy, nonatomic) NSArray *alarms;
- (id)allAlarms;
- (void)updateWithAppLink:(id)arg1 usedSelectedText:(char *)arg2;
- (id)commitedItemIgnoringPotentialSlice:(BOOL)arg1;
- (id)commitedItem;
- (BOOL)isDifferentFromCommitted;
- (id)backingOccurrenceIdentifier;
- (id)occurrenceIdentifier;
@property(readonly, nonatomic) NSString *calendarItemIdentifier;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)priority;
- (BOOL)isEvent;
- (BOOL)isReminder;
- (id)externalURI;
@property(readonly, nonatomic) NSString *calendarItemExternalIdentifier;
@property(readonly, nonatomic) NSString *UUID;
- (void)_applyKnownImmutableValuesFrom:(id)arg1;
- (void)_setCachedMeltedParticipantForMeInAttendeeSet:(id)arg1;
- (void)_setCachedMeltedParticipantForMe:(id)arg1;
- (id)_cachedMeltedParticipantForMeInAttendeeSet;
- (id)_cachedMeltedParticipantForMe;
- (BOOL)organizerIsRepresentedByAttendee:(id)arg1;
- (BOOL)canMoveOrCopyToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (BOOL)canMoveOrCopyToCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 allowedRequirements:(long long)arg3 error:(id *)arg4;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (BOOL)canMoveToCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)isValidAttendee:(id)arg1 forCalendar:(id)arg2;
- (id)attendeeRepresentingOrganizer;
- (BOOL)_hasAbsoluteAlarms;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *title;
- (void)setScheduleAgentString:(id)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (id)contactIdentifiers;
- (void)setContactIdentifiersString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property(copy, nonatomic) NSNumber *priorityNumber;
- (void)setRelatedExternalID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
- (void)setRecurrenceSetID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
- (void)setOrganizedByMe:(BOOL)arg1;
@property(copy, nonatomic) NSString *notes;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
- (id)preferredLocation;
- (void)setStructuredLocationWithoutPrediction:(id)arg1;
- (id)structuredLocationWithoutPrediction;
- (void)setStructuredLocation:(id)arg1;
- (id)structuredLocation;
- (void)setEkStructuredLocation:(id)arg1;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(copy, nonatomic) NSString *location;
@property(readonly, nonatomic) BOOL organizedByMe;
- (void)setAttendeeSet:(id)arg1;
- (id)attendeeSet;
- (BOOL)isEditable;
- (BOOL)isDeletable;
- (BOOL)allowsResponseCommentModifications;
- (BOOL)allowsAttendeesModifications;
- (BOOL)allowsAttachmentModifications;
- (void)_wrapWithDefaultAlarmsUpdate:(CDUnknownBlockType)arg1;
- (id)defaultAlarms;
- (void)_addDefaultAlarms;
- (void)_removeDefaultAlarms;
- (void)setDefaultAlarmWasDeleted:(BOOL)arg1;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
- (void)markDefaultAlarmsDeleted;
- (void)setAttendees:(id)arg1;
- (void)setScheduleAgent:(long long)arg1;
- (void)setParticipantForMe:(id)arg1;
- (void)setContainer:(id)arg1;
@property(retain, nonatomic) EKCalendar *calendar;
- (long long)scheduleAgent;
- (id)participantMatchingContact:(id)arg1;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
- (BOOL)isScheduled;
- (BOOL)isOrganizedBySomeoneElse;
- (BOOL)isOrganizedBySharedCalendarOwner;
- (BOOL)isSelfOrganized;
- (BOOL)isOrganizedByCurrentUser;
- (BOOL)isCurrentUserInvitedAttendee;
- (BOOL)isCalendarOwnerInvitedAttendee;
- (unsigned long long)entityType;
- (BOOL)_currentUserMayActAsOrganizerForCalendar:(id)arg1;
- (BOOL)currentUserMayActAsOrganizer;
- (long long)currentUserGeneralizedParticipantRole;
- (long long)calendarItemPermission;
@property(readonly, retain, nonatomic) id <CalendarModelProtocol> container;
- (id)backingOccurrence;
@property(readonly, nonatomic) NSArray *attendees;
- (void)setSelfAttendee:(id)arg1;
- (id)selfAttendee;
- (id)attendeeForMe;
- (id)attendeeForCurrentUser;
- (BOOL)allowsLikenessDataModifications;
- (BOOL)allowsParticipantStatusModifications;
- (id)specificIdentifier;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
- (void)willSave;
- (void)setLocalCustomObject:(id)arg1 forKey:(id)arg2;
- (id)localCustomObjectForKey:(id)arg1;
- (void)setCustomObject:(id)arg1 forKey:(id)arg2;
- (id)customObjectForKey:(id)arg1;
- (void)_setCustomObject:(id)arg1 forKey:(id)arg2 local:(BOOL)arg3;
- (id)_customObjectForKey:(id)arg1 local:(BOOL)arg2;
- (id)_dataFromStructuredDataDictionary:(id)arg1;
- (id)_structuredDataDictionaryFromData:(id)arg1;
@property(copy, nonatomic) NSData *localStructuredData;
@property(copy, nonatomic) NSData *structuredData;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end
