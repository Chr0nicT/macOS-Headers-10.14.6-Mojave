//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MobileTimer/NSCopying-Protocol.h>

@class NSString;

@interface MTPBAlarmDelete : PBCodable <NSCopying>
{
    double _deletionDate;
    NSString *_alarmID;
    BOOL _isSleepAlarm;
}

@property(nonatomic) double deletionDate; // @synthesize deletionDate=_deletionDate;
@property(nonatomic) BOOL isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property(retain, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
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

@end

