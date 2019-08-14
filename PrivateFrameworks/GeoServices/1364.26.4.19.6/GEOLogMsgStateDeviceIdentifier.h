//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying>
{
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
    BOOL _deviceDarkMode;
    BOOL _isInternalInstall;
    BOOL _isInternalTool;
    struct {
        unsigned int deviceDarkMode:1;
        unsigned int isInternalInstall:1;
        unsigned int isInternalTool:1;
    } _has;
}

@property(nonatomic) BOOL deviceDarkMode; // @synthesize deviceDarkMode=_deviceDarkMode;
@property(nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall=_isInternalInstall;
@property(nonatomic) BOOL isInternalTool; // @synthesize isInternalTool=_isInternalTool;
@property(retain, nonatomic) NSString *deviceHwIdentifier; // @synthesize deviceHwIdentifier=_deviceHwIdentifier;
@property(retain, nonatomic) NSString *deviceOsVersion; // @synthesize deviceOsVersion=_deviceOsVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDeviceDarkMode;
@property(nonatomic) BOOL hasIsInternalInstall;
@property(nonatomic) BOOL hasIsInternalTool;
@property(readonly, nonatomic) BOOL hasDeviceHwIdentifier;
@property(readonly, nonatomic) BOOL hasDeviceOsVersion;

@end
