//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNWirelessController.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SMWirelessController : SMNWirelessController
{
    NSObject<OS_dispatch_semaphore> *_wirelessNetworkSwitchCancellation;
}

@property(retain) NSObject<OS_dispatch_semaphore> *wirelessNetworkSwitchCancellation; // @synthesize wirelessNetworkSwitchCancellation=_wirelessNetworkSwitchCancellation;
- (void).cxx_destruct;
- (BOOL)waitForReconnection:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (BOOL)prepareSourceMachine:(id)arg1 ssid:(id)arg2 password:(id)arg3 error:(id *)arg4;
- (void)stopWirelessNetworkSwitch;
- (BOOL)attemptAccessPointAssocationWithSystem:(id)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)attemptAccessPointAssocationWithSystem:(id)arg1 error:(id *)arg2;

@end
