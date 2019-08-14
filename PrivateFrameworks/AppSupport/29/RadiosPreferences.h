//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_os_log, RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    int _applySkipCount;
    id <RadiosPreferencesDelegate> _delegate;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_os_log> *radios_prefs_log;
    BOOL notifyForExternalChangeOnly;
}

@property(nonatomic) BOOL notifyForExternalChangeOnly; // @synthesize notifyForExternalChangeOnly;
@property(nonatomic) id <RadiosPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_e097db04 *)arg2;
- (void)setValue:(void *)arg1 forKey:(id)arg2;
- (void *)getValueWithLockForKey:(id)arg1;
- (void *)getValueForKey:(id)arg1;
- (void)synchronize;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)refresh;
- (void)setTelephonyState:(BOOL)arg1 fromBundleID:(id)arg2;
- (BOOL)telephonyStateWithBundleIdentifierOut:(id *)arg1;
- (void)setAirplaneModeWithoutMirroring:(BOOL)arg1;
@property(nonatomic) BOOL airplaneMode;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end
