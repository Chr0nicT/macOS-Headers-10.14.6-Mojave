//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionBitrateArbiter : NSObject
{
    unsigned int _maxBitrate2GUplink;
    unsigned int _maxBitrate2GDownlink;
    unsigned int _maxBitrate3GUplink;
    unsigned int _maxBitrate3GDownlink;
    unsigned int _maxBitrateLTEUplink;
    unsigned int _maxBitrateLTEDownlink;
    unsigned int _maxBitrateWiFiUplink;
    unsigned int _maxBitrateWiFiDownlink;
    NSDictionary *_currentSettings;
}

@property(readonly) unsigned int maxBitrateWiFiDownlink; // @synthesize maxBitrateWiFiDownlink=_maxBitrateWiFiDownlink;
@property(readonly) unsigned int maxBitrateLTEDownlink; // @synthesize maxBitrateLTEDownlink=_maxBitrateLTEDownlink;
@property(readonly) unsigned int maxBitrate3GDownlink; // @synthesize maxBitrate3GDownlink=_maxBitrate3GDownlink;
@property(readonly) unsigned int maxBitrate2GDownlink; // @synthesize maxBitrate2GDownlink=_maxBitrate2GDownlink;
@property(readonly) unsigned int maxBitrateWiFiUplink; // @synthesize maxBitrateWiFiUplink=_maxBitrateWiFiUplink;
@property(readonly) unsigned int maxBitrateLTEUplink; // @synthesize maxBitrateLTEUplink=_maxBitrateLTEUplink;
@property(readonly) unsigned int maxBitrate3GUplink; // @synthesize maxBitrate3GUplink=_maxBitrate3GUplink;
@property(readonly) unsigned int maxBitrate2GUplink; // @synthesize maxBitrate2GUplink=_maxBitrate2GUplink;
- (void)readStoreBagValues;
- (unsigned int)bitrateForStoreBagKey:(id)arg1 connectionType:(int)arg2 currentBitrate:(unsigned int)arg3;
- (void)readHardwareValues;
- (BOOL)rangeCheck:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
