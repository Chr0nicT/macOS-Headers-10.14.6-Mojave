//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent
{
    unsigned long long _dataSyncState;
}

+ (id)dataSyncStateEstablished:(unsigned long long)arg1;
+ (id)uuid;
@property(nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (id)initWithDataSyncState:(unsigned long long)arg1;

@end
