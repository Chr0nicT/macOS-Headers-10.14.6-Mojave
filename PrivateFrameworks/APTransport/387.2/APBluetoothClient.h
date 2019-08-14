//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <APTransport/WPAirPlaySoloDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, WPAirPlaySolo;
@protocol APBluetoothClientDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate>
{
    id <APBluetoothClientDelegate> _delegate;
    BOOL _isFirstCycle;
    BOOL _isSourcePresenceAdvertising;
    BOOL _isStartAdvertisingPending;
    BOOL _isStopAdvertisingPending;
    NSMutableDictionary *_nearbyDevices;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_sourcePresenceAdvertisingData;
    NSObject<OS_dispatch_source> *_sourcePresenceAdvertisingTimer;
    NSObject<OS_dispatch_source> *_sourcePresenceWaitingTimer;
    WPAirPlaySolo *_wpAirPlaySolo;
}

@property(retain, nonatomic) WPAirPlaySolo *wpAirPlaySolo; // @synthesize wpAirPlaySolo=_wpAirPlaySolo;
@property(nonatomic) NSObject<OS_dispatch_source> *sourcePresenceWaitingTimer; // @synthesize sourcePresenceWaitingTimer=_sourcePresenceWaitingTimer;
@property(nonatomic) NSObject<OS_dispatch_source> *sourcePresenceAdvertisingTimer; // @synthesize sourcePresenceAdvertisingTimer=_sourcePresenceAdvertisingTimer;
@property(copy, nonatomic) NSDictionary *sourcePresenceAdvertisingData; // @synthesize sourcePresenceAdvertisingData=_sourcePresenceAdvertisingData;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *nearbyDevices; // @synthesize nearbyDevices=_nearbyDevices;
@property(nonatomic) BOOL isStopAdvertisingPending; // @synthesize isStopAdvertisingPending=_isStopAdvertisingPending;
@property(nonatomic) BOOL isStartAdvertisingPending; // @synthesize isStartAdvertisingPending=_isStartAdvertisingPending;
@property(nonatomic) BOOL isSourcePresenceAdvertising; // @synthesize isSourcePresenceAdvertising=_isSourcePresenceAdvertising;
@property(nonatomic) BOOL isFirstCycle; // @synthesize isFirstCycle=_isFirstCycle;
- (void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySoloAdvertisingPending:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)stopTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)startTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)stopSourcePresenceConnectionlessAdvertising;
- (void)startSourcePresenceConnectionlessAdvertising;
- (void)startSourcePresenceAdvertisingCycle;
- (void)stopSourcePresenceAdvertisingCycle;
- (void)startSourcePresenceWaitingCycle;
- (void)stopSourcePresenceWaitingCycle;
@property(readonly) long long state;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
