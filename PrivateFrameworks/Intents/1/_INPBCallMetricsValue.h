//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCallMetricsValue-Protocol.h>

@class NSString;

@interface _INPBCallMetricsValue : PBCodable <_INPBCallMetricsValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int callDuration:1;
        unsigned int timeToEstablish:1;
    } _has;
    double _callDuration;
    double _timeToEstablish;
}

@property(nonatomic) double timeToEstablish; // @synthesize timeToEstablish=_timeToEstablish;
@property(nonatomic) double callDuration; // @synthesize callDuration=_callDuration;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasTimeToEstablish;
@property(nonatomic) BOOL hasCallDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
