//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class CalUIReminderTimeWheelViewController, NSDate;

@protocol CalUIReminderTimeWheelViewControllerDelegate <NSObject>

@optional
- (void)timeWheel:(CalUIReminderTimeWheelViewController *)arg1 didSelectDate:(NSDate *)arg2 finalized:(BOOL)arg3;
- (void)timeWheelDidEndScroll:(CalUIReminderTimeWheelViewController *)arg1;
- (void)timeWheelWillBeginScroll:(CalUIReminderTimeWheelViewController *)arg1;
@end
