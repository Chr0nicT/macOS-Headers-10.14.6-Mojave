//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSObject, NSString;
@protocol HMDWACAccessoryConfigurationDelegate, HMDWACDevice, OS_dispatch_queue;

@interface HMDUnassociatedWACAccessory : HMDUnassociatedAccessory <HMFLogging, HMFTimerDelegate>
{
    id <HMDWACDevice> _wacDevice;
    CDUnknownBlockType _completionHandler;
    HMFTimer *_handoffExpirationTimer;
    long long _state;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDUnassociatedAccessory *_postWACAccessory;
    id <HMDWACAccessoryConfigurationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *wacDeviceID;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)_postWACMatchingAccessoryFound:(id)arg1;
- (void)_abort:(CDUnknownBlockType)arg1;
- (void)_postWACMatchTimeout;
- (void)_waitForPostWACMatch;
- (void)_configureDeviceCompleted:(id)arg1;
- (void)_configureDevice;
- (void)_userPermissionResponse:(BOOL)arg1;
- (void)_requestUserPermission;
- (void)updateWithMatchingUnassociatedAccessory:(id)arg1;
- (void)cancelConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSString *wacDeviceID; // @synthesize wacDeviceID;
@property(retain, setter=setWACDevice:) id <HMDWACDevice> wacDevice;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 wacDevice:(id)arg5;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HMDWACAccessoryConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDelegate:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
