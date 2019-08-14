//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NUAdSettings-Protocol.h"

@class NSString;
@protocol SXAdvertisingSettings;

@interface NUAdSettings : NSObject <NUAdSettings>
{
    BOOL _debugAdSlotsEnabled;
    BOOL _debugInteractivityEnabled;
    id <SXAdvertisingSettings> _debugAdvertisementSettings;
}

@property(readonly, nonatomic) id <SXAdvertisingSettings> debugAdvertisementSettings; // @synthesize debugAdvertisementSettings=_debugAdvertisementSettings;
@property(readonly, nonatomic) BOOL debugInteractivityEnabled; // @synthesize debugInteractivityEnabled=_debugInteractivityEnabled;
@property(readonly, nonatomic) BOOL debugAdSlotsEnabled; // @synthesize debugAdSlotsEnabled=_debugAdSlotsEnabled;
- (void).cxx_destruct;
- (id)initWithDebugAdSlotsEnabled:(BOOL)arg1 debugInteractivityEnabled:(BOOL)arg2 debugAdvertisementSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
