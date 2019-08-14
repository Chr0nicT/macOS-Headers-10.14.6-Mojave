//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKViewController.h>

@class EKCalendar;

@interface EKCalendarViewController : EKViewController
{
}

+ (id)emptyPlaceholderTitleString;
+ (id)newPlaceholderTitleString;
- (id)infoViewPublicURLString;
- (BOOL)isCalendarPublished;
- (BOOL)isCalendarSubscribed;
- (BOOL)isCalendarPubSub;
- (BOOL)isCalendarPublicallyShared;
- (BOOL)isCalendarSharedToMe;
- (BOOL)isCalendarFamilyCalendar;
- (BOOL)isCalendarMarkedImmutableSharees;
- (BOOL)calendarSupportsPublishing;
- (BOOL)calendarSupportsSharing;
- (double)defaultLabelWidth;
@property(retain, nonatomic) EKCalendar *calendar;
- (id)initWithSettings:(id)arg1;

@end
