//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSMenuItem;

@protocol ClosedTabOrWindowMenuBuilderMenuActionTarget <NSObject>
- (void)reopenTabGroupFromPersistentState:(NSMenuItem *)arg1;
- (void)reopenTabFromPersistentStateIntoActiveWindowConsultingPagesOpenInWindowsInsteadOfTabsPreference:(NSMenuItem *)arg1;
- (void)reopenTabFromPersistentStateIntoActiveWindow:(NSMenuItem *)arg1;
- (void)reopenWindowFromPersistentState:(NSMenuItem *)arg1;
@end
