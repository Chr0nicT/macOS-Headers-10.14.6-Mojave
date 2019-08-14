//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class BSAtomicSignal, CADisplay, FBSDisplayConfiguration, FBSDisplayMonitor, NSString;
@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    CADisplay *_display;
    BOOL _isMain;
    unsigned int _displayID;
    unsigned int _instanceID;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BOOL _observing;
    BOOL _initialized;
    BSAtomicSignal *_invalidated;
    struct os_unfair_lock_s _lock;
    FBSDisplayMonitor *_lock_monitor;
    FBSDisplayConfiguration *_lock_configuration;
    int _lock_attachment;
    unsigned int _lock_debounceToken;
    FBSDisplayConfiguration *_lock_reportedConfiguration;
    struct os_unfair_lock_s _externallyVisibleLock;
    int _evlock_attachment;
    FBSDisplayConfiguration *_evlock_configuration;
    FBSDisplayConfiguration *_evlock_reportedConfiguration;
}

@property(readonly, nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_lock_noteDisconnecting;
- (void)_lock_noteUpdated;
- (void)_lock_noteConnected;
- (void)_lock_update;
- (id)_lock_setReportedConfiguration:(id)arg1;
- (void)_lock_setAttachment:(int)arg1;
- (void)_lock_setConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *connectedConfiguration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithDisplay:(id)arg1 monitor:(id)arg2 isMain:(BOOL)arg3;
- (id)initWithNonMainDisplay:(id)arg1 monitor:(id)arg2;
- (id)initWithMainDisplay:(id)arg1 monitor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
