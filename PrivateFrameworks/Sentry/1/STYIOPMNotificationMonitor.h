//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, STYIOPMNotificationDelegate;

@interface STYIOPMNotificationMonitor : NSObject
{
    struct __IOPMConnection *_connectionToIOPM;
    unsigned long long _eventTimestamps[3];
    char _receivedEarlyNotification[3];
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <STYIOPMNotificationDelegate> _delegate;
}

@property(nonatomic) __weak id <STYIOPMNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendEventNotification:(unsigned long long)arg1;
- (void)_handleEvent:(unsigned int)arg1 ofType:(unsigned long long)arg2;
- (void)iopmEvent:(unsigned int)arg1;
- (BOOL)_startMonitoring;
- (void)dealloc;
- (id)init;

@end
