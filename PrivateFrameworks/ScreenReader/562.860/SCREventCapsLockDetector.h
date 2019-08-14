//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCREventFactory, SCRWorkspace;

__attribute__((visibility("hidden")))
@interface SCREventCapsLockDetector : NSObject
{
    BOOL _isVOModifierLockingEnabledInSecureInput;
    BOOL _isCapsLockKeyPressed;
    BOOL __isEchoLockKeysEnabled;
    BOOL __isCapsLockModifierOn;
    BOOL __isCapsLockSupportConfirmed;
    unsigned int __ioConnection;
    unsigned long long _voModifierPreference;
    double __capsLockKeyUpTime;
    unsigned long long __unhandledCapsLockEventCount;
    unsigned long long __unhandledVOEventCount;
    double __unhandledCapsLockKeyPressTime;
    SCREventFactory *__eventFactoryDelegate;
    SCRWorkspace *__workspaceDelegate;
    double __capsLockModifierChangeTime;
    struct __IOHIDManager *__hidManager;
    NSArray *__devices;
}

@property(nonatomic, setter=_setIOConnection:) unsigned int _ioConnection; // @synthesize _ioConnection=__ioConnection;
@property(copy, nonatomic, setter=_setDevices:) NSArray *_devices; // @synthesize _devices=__devices;
@property(nonatomic, setter=_setHIDManager:) struct __IOHIDManager *_hidManager; // @synthesize _hidManager=__hidManager;
@property(nonatomic, setter=_setCapsLockModifierChangeTime:) double _capsLockModifierChangeTime; // @synthesize _capsLockModifierChangeTime=__capsLockModifierChangeTime;
@property(nonatomic, setter=_setWorkspaceDelegate:) SCRWorkspace *_workspaceDelegate; // @synthesize _workspaceDelegate=__workspaceDelegate;
@property(nonatomic, setter=_setEventFactoryDelegate:) SCREventFactory *_eventFactoryDelegate; // @synthesize _eventFactoryDelegate=__eventFactoryDelegate;
@property(nonatomic, setter=_setUnhandledCapsLockKeyPressTime:) double _unhandledCapsLockKeyPressTime; // @synthesize _unhandledCapsLockKeyPressTime=__unhandledCapsLockKeyPressTime;
@property(nonatomic, setter=_setUnhandledVOEventCount:) unsigned long long _unhandledVOEventCount; // @synthesize _unhandledVOEventCount=__unhandledVOEventCount;
@property(nonatomic, setter=_setCapsLockSupportConfirmed:) BOOL _isCapsLockSupportConfirmed; // @synthesize _isCapsLockSupportConfirmed=__isCapsLockSupportConfirmed;
@property(nonatomic, setter=_setUnhandledCapsLockEventCount:) unsigned long long _unhandledCapsLockEventCount; // @synthesize _unhandledCapsLockEventCount=__unhandledCapsLockEventCount;
@property(nonatomic, setter=_setCapsLockKeyUpTime:) double _capsLockKeyUpTime; // @synthesize _capsLockKeyUpTime=__capsLockKeyUpTime;
@property(nonatomic, setter=_setCapsLockModifierOn:) BOOL _isCapsLockModifierOn; // @synthesize _isCapsLockModifierOn=__isCapsLockModifierOn;
@property(nonatomic, setter=_setEchoLockKeysEnabled:) BOOL _isEchoLockKeysEnabled; // @synthesize _isEchoLockKeysEnabled=__isEchoLockKeysEnabled;
@property(nonatomic, setter=_setCapsLockKeyPressed:) BOOL isCapsLockKeyPressed; // @synthesize isCapsLockKeyPressed=_isCapsLockKeyPressed;
@property(nonatomic, setter=setVOModifierPreference:) unsigned long long voModifierPreference; // @synthesize voModifierPreference=_voModifierPreference;
- (unsigned int)_openIOConnection;
- (id)_createScancodeMatchingDictionaryWithScancode:(unsigned long long)arg1;
- (id)_createDeviceMatchingDictionaryWithUsagePage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)_enableCapsLockKeyPressDetection;
- (void)_toggleVOModifierLockInSecureInput;
- (void)_enableVOModifierLockingForCapsLockInSecureInput;
- (void)_announceCapsLockModifier:(long long)arg1;
- (void)_setCapsLockModifierState:(BOOL)arg1;
- (void)_handleCapsLockKeyUp;
- (void)_handleCapsLockKeyDown;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithEventFactory:(id)arg1 workspace:(id)arg2;
- (id)init;
- (void)receivedKeyPressWithControlAndOption:(BOOL)arg1;
- (BOOL)capsLockModifierChanged:(BOOL)arg1;
@property(nonatomic, setter=setVOModifierLockingEnabledInSecureInput:) BOOL isVOModifierLockingEnabledInSecureInput; // @synthesize isVOModifierLockingEnabledInSecureInput=_isVOModifierLockingEnabledInSecureInput;
@property(readonly, nonatomic) BOOL isCapsLockKeyDetectionEnabled;

@end
