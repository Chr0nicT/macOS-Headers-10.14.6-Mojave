//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTVoicemailInfoType, CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientVoicemailDelegate <NSObject>

@optional
- (void)voicemailInfoAvailableNotification:(CTXPCServiceSubscriptionContext *)arg1 voicemailInfo:(CTVoicemailInfoType *)arg2;
- (void)voicemailDatabaseReset:(CTXPCServiceSubscriptionContext *)arg1;
@end
