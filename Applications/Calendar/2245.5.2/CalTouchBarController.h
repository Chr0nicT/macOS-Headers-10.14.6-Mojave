//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CalUIDateScrubberTouchBarDelegate-Protocol.h"
#import "CalUIEventViewTouchBarDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"

@class CALMainController, CalUIDateScrubberTouchBar, CalUIEventViewTouchBar, EKEvent, NSString, NSTouchBar;

@interface CalTouchBarController : NSObject <CalUIDateScrubberTouchBarDelegate, CalUIEventViewTouchBarDelegate, NSTouchBarProvider>
{
    BOOL _changingCanvasDate;
    CALMainController *_mainController;
    NSTouchBar *_touchBar;
    CalUIDateScrubberTouchBar *_dateScrubberTouchBar;
    CalUIEventViewTouchBar *_eventViewTouchBar;
}

@property BOOL changingCanvasDate; // @synthesize changingCanvasDate=_changingCanvasDate;
@property(retain) CalUIEventViewTouchBar *eventViewTouchBar; // @synthesize eventViewTouchBar=_eventViewTouchBar;
@property(retain) CalUIDateScrubberTouchBar *dateScrubberTouchBar; // @synthesize dateScrubberTouchBar=_dateScrubberTouchBar;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (void)moveToCalendar:(id)arg1;
- (id)writableCalendars;
- (void)reportJunk;
- (void)deleteEvent;
- (void)respondWithStatus:(long long)arg1;
- (void)datePickerChanged;
- (void)datePickerIsChanging;
- (id)inviteesCandidateTouchBar;
- (id)locationCandidateTouchBar;
- (void)selectInspectorInvitees;
- (void)selectInspectorLocation;
- (void)selectInspectorDateTime;
- (void)toggleInspector;
- (BOOL)shouldShowInspectorFields;
- (void)nopeButtonPressed;
- (void)yupButtonPressed;
- (id)nopeButtonTitle;
- (id)yupButtonTitle;
- (BOOL)inspectorIsOpen;
@property(readonly) EKEvent *event;
- (void)goToDate:(id)arg1;
- (long long)firstDayOfWeek;
- (long long)daysPerWeek;
- (id)currentViewName;
- (id)activeDateInCanvas;
- (id)titleDateInCanvas;
- (void)eventsChanged:(id)arg1;
- (void)dateTimeFormatChanged;
- (BOOL)_shouldShowEventSelection;
- (void)updateTouchBar;
- (void)dealloc;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
