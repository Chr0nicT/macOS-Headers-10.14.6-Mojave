//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/RWIServiceConnectionDelegate-Protocol.h>
#import <WebInspector/_RWIRelayToClientMessageReceiver-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, RWIApplication, RWIMachine;
@protocol RWIBaseManagerDelegate;

__attribute__((visibility("hidden")))
@interface RWIBaseManager : NSObject <RWIServiceConnectionDelegate, _RWIRelayToClientMessageReceiver>
{
    NSMutableDictionary *_targets;
    NSMutableDictionary *_floatingDebuggables;
    id <RWIBaseManagerDelegate> _delegate;
    NSString *_uuid;
}

@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <RWIBaseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_rpc_reportAutomaticInspectionCandidate:(id)arg1;
- (void)_rpc_requestDriverStateChange:(id)arg1;
- (void)_rpc_reportSetup:(id)arg1;
- (void)_rpc_applicationSentData:(id)arg1;
- (void)_rpc_driverDisconnected:(id)arg1;
- (void)_rpc_driverUpdated:(id)arg1;
- (void)_rpc_driverConnected:(id)arg1;
- (void)_rpc_reportConnectedDriverList:(id)arg1;
- (void)_updateDebuggableFromListing:(id)arg1 forApplication:(id)arg2;
- (void)_updateDrivableFromListing:(id)arg1 forApplication:(id)arg2;
- (void)_rpc_applicationSentListing:(id)arg1;
- (void)_rpc_applicationDisconnected:(id)arg1;
- (void)_rpc_applicationUpdated:(id)arg1;
- (void)_rpc_applicationConnected:(id)arg1;
- (void)_rpc_reportConnectedApplicationList:(id)arg1;
- (void)serviceConnectionDidClose:(id)arg1;
- (void)_fetchListingForApplication:(id)arg1;
- (void)_fetchApplicationListingForTarget:(id)arg1;
- (void)_sendIdentifierToTarget:(id)arg1;
- (void)_removeFloatingDebuggable:(id)arg1;
- (void)_adoptFloatingDebuggables:(id)arg1;
- (void)_addFloatingDebuggable:(id)arg1 forApplicationIdentifier:(id)arg2;
- (void)_removeDriver:(id)arg1;
- (void)_addDriver:(id)arg1;
- (void)_removeDrivable:(id)arg1;
- (void)_addDrivable:(id)arg1;
- (void)_removeDebuggable:(id)arg1;
- (void)_addDebuggable:(id)arg1;
- (void)_removeApplication:(id)arg1;
- (void)_addApplication:(id)arg1;
- (void)launchApplicationWithBundleIdentifier:(id)arg1 forTarget:(id)arg2;
- (void)requestDriver:(id)arg1 shouldBeActive:(BOOL)arg2;
- (void)updateDriver:(id)arg1 toState:(BOOL)arg2;
- (void)unmanageDriver:(id)arg1;
- (id)manageDriverInterface:(id)arg1 forTarget:(id)arg2;
- (id)managedTargetWithKey:(id)arg1;
- (void)unmanageTargetWithKey:(id)arg1;
- (id)manageTarget:(id)arg1 withKey:(id)arg2;
- (id)managedDevice:(id)arg1;
- (id)unmanageDevice:(id)arg1;
- (id)manageDevice:(id)arg1;
- (void)sendAutomaticInspectionEnabled:(BOOL)arg1 forTarget:(id)arg2;
- (void)targetLostServiceConnection:(id)arg1;
- (void)targetEstablishedServiceConnection:(id)arg1;
- (void)openServiceConnectionForTarget:(id)arg1;
- (void)targetDidChangeReadyState:(id)arg1;
- (void)targetHasBasicInformation:(id)arg1;
@property(readonly, nonatomic) RWIApplication *currentApplication;
@property(readonly, nonatomic) RWIMachine *currentMachine; // @dynamic currentMachine;
@property(readonly, nonatomic) NSSet *targets; // @dynamic targets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
