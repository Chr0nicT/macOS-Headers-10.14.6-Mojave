//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAppSessionDataProviding-Protocol.h"
#import "FRAppSessionDataReporting-Protocol.h"

@class NSString;

@interface FRAppSessionManager : NSObject <FRAppSessionDataProviding, FRAppSessionDataReporting>
{
    BOOL _specialEventsAvailableDuringSession;
    BOOL _specialEventsDismissedDuringSession;
}

@property(nonatomic) BOOL specialEventsDismissedDuringSession; // @synthesize specialEventsDismissedDuringSession=_specialEventsDismissedDuringSession;
@property(nonatomic) BOOL specialEventsAvailableDuringSession; // @synthesize specialEventsAvailableDuringSession=_specialEventsAvailableDuringSession;
- (void)clearSessionData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
