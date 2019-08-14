//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSharingServiceDelegate-Protocol.h"

@class CALMainController, NSArray, NSDate, NSMenu, NSMenuItem, NSString;

@interface CALCMManager : NSObject <NSSharingServiceDelegate>
{
    NSMenu *_occurrenceCM;
    NSMenu *_calendarCM;
    NSMenu *_calendarBgCM;
    NSMenu *_dailyBgCM;
    NSMenu *_dailyBgADECM;
    NSMenu *_monthlyBgCM;
    id _menuItemValidator;
    BOOL _focusedDateIsAllDay;
    NSDate *_focusedDate;
    CALMainController *_mainController;
    NSMenuItem *_acceptMenuItem;
    NSMenuItem *_maybeMenuItem;
    NSMenuItem *_declineMenuItem;
    NSMenuItem *_reportJunkMenuItem;
    NSArray *_responseMenuItems;
}

@property(retain) NSArray *responseMenuItems; // @synthesize responseMenuItems=_responseMenuItems;
@property(retain) NSMenuItem *reportJunkMenuItem; // @synthesize reportJunkMenuItem=_reportJunkMenuItem;
@property(retain) NSMenuItem *declineMenuItem; // @synthesize declineMenuItem=_declineMenuItem;
@property(retain) NSMenuItem *maybeMenuItem; // @synthesize maybeMenuItem=_maybeMenuItem;
@property(retain) NSMenuItem *acceptMenuItem; // @synthesize acceptMenuItem=_acceptMenuItem;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
@property BOOL focusedDateIsAllDay; // @synthesize focusedDateIsAllDay=_focusedDateIsAllDay;
@property(retain) NSDate *focusedDate; // @synthesize focusedDate=_focusedDate;
- (void).cxx_destruct;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)updatedResponseMenuItemsForTarget:(id)arg1 event:(id)arg2;
- (void)createResponseMenuItems;
- (void)messageAttendees:(id)arg1;
- (void)emailAttendees:(id)arg1;
- (id)_allParticipantsToSendMessageToFromEvent:(id)arg1;
- (void)mailEntity:(id)arg1;
- (void)copyEventLink:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)pasteEvents:(id)arg1;
- (void)pasteEventsHere:(id)arg1;
- (void)newEventHere:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)handleMonthlyCMForBackgroundWithTime:(id)arg1 withValidator:(id)arg2;
- (id)handleDailyCMForBackgroundWithTime:(id)arg1 withValidator:(id)arg2 allday:(BOOL)arg3;
- (id)handleOccurrenceCMWithTarget:(id)arg1 validator:(id)arg2 event:(id)arg3;
- (void)popCMWithMenu:(id)arg1 withMouseEvent:(id)arg2 inView:(id)arg3;
- (void)setCalendarMenu:(id)arg1 forEvent:(id)arg2 target:(id)arg3 enabled:(BOOL)arg4;
- (id)monthlyBgCM;
- (id)dailyBgADECM;
- (id)dailyBgCM;
- (id)occurrenceCM;
- (BOOL)authorizeCM;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
